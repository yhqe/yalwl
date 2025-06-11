#include <iostream>
#include <chrono>
#include <cstdio>
#include <sstream>

class logger {
public:
	bool timestamp = false;
	bool function = false;

	enum level {
		INFO = 1, 
		WARNING = 2, 
		ERROR = 3, 
		VERBOSE = 4, 
		DEBUG = 5
	};

	void log(int level, const char* content) {
		printc(level, content);
	}
private:
	void printc(int level, const char* content) {
		auto now = std::time(nullptr);
		std::tm* local_time = std::localtime(&now);

		char t_buffer[9];
		std::strftime(t_buffer, sizeof(t_buffer), "%H:%M:%S", local_time);

		std::stringstream output;

		if (timestamp)
			output << "\033[0;30m" << t_buffer << " \033[0m";
				
		if (function)
			output << "\033[0;30min " << __func__ << "\033[0m ";

		switch (level) {
			case 1: // info
				output << "\033[34;1m[i]\033[0m " << content << "\n";
				break;
			case 2: // warning
				output << "\033[0;33m[!]\033[0m " << content << "\n";
				break;
			case 3: // error
				output << "\033[0;31m[x]\033[0m " << content << "\n";
				break;
			case 4: // verbose
				output << "\033[0;36m[v]\033[0m " << content << "\n";
				break;
			case 5: // debug
				output << "\033[0;35m[d]\033[0m " << content << "\n";
				break;
		}

		printf("%s", output.str().c_str());
	}
};
