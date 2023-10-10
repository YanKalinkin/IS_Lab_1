#include "password.h"
#include <ctime>
#include <iostream>

bool password::check(bool num, bool up, bool lw, bool sp)
{
	if ((this->numb == num)&&(this->uppcase == up)&&(this->dwncase == lw)&&(this->spec == sp))
	{
		return true;
	}
	else
	{
		return false;
	}
}

password::password(int lngth, bool num, bool spc, bool up, bool dn)
{
	this->length = lngth;
	this->numb = num;
	this->spec = spc;
	this->uppcase = up;
	this->dwncase = dn;
}

password::~password()
{
}

std::string password::generate()
{
	//flags for generator work
	bool numbers_generated;
	bool upper_generated;
	bool lower_generated;
	bool special_generated;
	//alphabet
	char numbers_[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char upper_[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char lower_[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char special_[32] = { '!', '"', '#', '$', '%', '&', 39, '`', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '>', '=', '?', '@', '[', 92, ']', '^', '_', '`', '{', '|', '}' };
	do
	{
		this->body.clear();
		numbers_generated = false;
		upper_generated = false;
		lower_generated = false;
		special_generated = false;
		for (int i = 0; i < this->length; i++)
		{
			int start = 1;//1-numbers;2-special symbols;3-uppercase;4-downcase
			int end = 4;
			int section = rand() % (end - start + 1) + start;
			switch (section)
			{
			case 1:
				this->body += numbers_[rand() % (10)];
				numbers_generated = true;
				break;
			case 2:
				this->body += special_[rand() % (32)];
				special_generated = true;
				break;
			case 3:
				this->body += upper_[rand() % (26)];
				upper_generated = true;
				break;
			case 4:
				this->body += lower_[rand() % (26)];
				lower_generated = true;
				break;
			}
		}
	} while (!check(numbers_generated, upper_generated, lower_generated, special_generated));
	return this->body;
}
