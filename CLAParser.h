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
	void Parse(int, const char**);
	void AddBoundedArg(const char*);
	void AddFlagArg(const char*);
	std::string GetUnboundedArg(int index) const;		// returns "" if 'index' is not contained in unbounded args.
	std::string GetBoundedArg(const char* key) const;	// returns "" if arg corresponding to 'key' was not parsed. Also prints a warning if 'key' is not bounded.
	bool IsFlagSet(const char* flag) const;				// returns true only if 'flag' is contained in parsed args
	size_t GetUnboundedArgsSize(void) const;			// returns amount of unbounded args parsed.
};
