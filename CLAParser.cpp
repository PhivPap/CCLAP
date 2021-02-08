#include "CLAParser.h"

CLAParser::CLAParser(void) {

}

CLAParser::~CLAParser(void) {

}

void CLAParser::Parse(const char** argv, int argc) {

}

void CLAParser::AddBoundedArg(const char* bound_key) {
	bounded[bound_key] = "";

}

void CLAParser::AddFlagArg(const char* flag) {
	flags[flag] = false;

}