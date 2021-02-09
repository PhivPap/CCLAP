#include "CLAParser.h"

CLAParser::CLAParser(void) {

}

CLAParser::~CLAParser(void) {

}

void CLAParser::Parse(int argc, const char** argv) {

}

void CLAParser::AddBoundedArg(const char* key) {
	bounded[key] = "";

}

void CLAParser::AddFlagArg(const char* flag) {
	flags[flag] = false;

}


/* 
* returns "" if 'index' is not contained in unbounded args
*/
std::string CLAParser::GetUnboundedArg(int index) const{

}


/* 
* returns "" if arg corresponding to 'key' was not parsed. Also prints a warning if 'key' is not bounded.
*/
std::string CLAParser::GetBoundedArg(const char* key) const {

}


/*
* returns true only if 'flag' is contained in parsed args
*/
bool CLAParser::IsFlagSet(const char* flag) const {

}


/*
* returns amount of unbounded args parsed.
*/
size_t CLAParser::GetUnboundedArgsSize(void) const {
	return unbounded.size();
}