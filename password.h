#include <string>
#pragma once
//Just for me: char numbers and descriptions:
// 33-47 - special symbols (1) [15]
// 48-57 - numbers [10]
// 58-64 - special symbols (2) [7]
// 65-90 - uppercase [26]
// 91-96 - special symbols (3) [6]
// 97-122 - lowercase [26]
// 123-126 - special symbols (4) [4]
class password
{
public:
	std::string body;
	bool check(bool num, bool up, bool lw, bool sp);
	bool numb;
	bool spec;
	bool uppcase;
	bool dwncase;
public:
	password(int lngth, bool num, bool spc, bool up, bool dn);
	~password();
	int length;
	std::string generate();
};

