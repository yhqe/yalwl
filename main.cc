#include <cstdio>

#include "logger/logger.h"

int main() {
	printf("yet another lightweight logger (v0.0.1 BETA-DEV [c4bde5])\n");
	
	// create logger object
	logger logger;
	logger::level level = logger::level::INFO;

	logger.function = true;
	logger.timestamp = true;

	logger.log(logger::INFO, "this is an info message!");
	logger.log(logger::WARNING, "this is a warning message!");
        logger.log(logger::ERROR, "this is an error message!");

	return 0;
}
