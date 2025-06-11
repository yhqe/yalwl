#include "logger/logger.h"
#include "git_version.h"

int main() {
	printf("yet another lightweight logger (developer [%s])\n", GIT_COMMIT_HASH);
	
	// create logger object
	logger logger;
	logger::level level = logger::level::INFO;

	logger.function = true;
	logger.timestamp = true;

	logger.log(logger::INFO, "this is an info message!");
	logger.log(logger::WARNING, "this is a warning message!");
        logger.log(logger::ERROR, "this is an error message!");
	logger.log(logger::VERBOSE, "this is a verbose message!");
	logger.log(logger::DEBUG, "this is a debug message!");

	return 0;
}
