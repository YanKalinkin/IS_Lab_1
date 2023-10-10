#pragma once
using namespace System;
using namespace System::IO;
//Just for me: char numbers and descriptions:
// 33-47 - special symbols (1) [15]
// 48-57 - numbers [10]
// 58-64 - special symbols (2) [7]
// 65-90 - uppercase [26]
// 91-96 - special symbols (3) [6]
// 97-122 - lowercase [26]
// 123-126 - special symbols (4) [4]
ref class Password_CLR
{
private:
	String^ body;
	bool numb;
	bool spec;
	bool uppercase;
	bool lowercase;
	bool check(bool num, bool up, bool lw, bool sp);
public:
	Password_CLR(int lngth, bool num, bool spc, bool up, bool dn);
	~Password_CLR();
	int length;
	String^ generate();
};