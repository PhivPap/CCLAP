#pragma once
#include <string>
#include <map>
#include <vector>

class CLAParser{
private:
	std::map<std::string, std::string> bounded;	// map of bounded args
	std::vector<std::string> unbounded;			// vector of inorder unbounded args
	std::map<std::string, bool> flags;
public:
	CLAParser(void);
	~CLAParser(void);
	void Parse(const char**, int);
	void AddBoundedArg(const char*);
	void AddFlagArg(const char*);
};
