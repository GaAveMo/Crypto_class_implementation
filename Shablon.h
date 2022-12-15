#pragma once
#include "Crypto.h"

class Shablon : public Crypto {
	string s;
	string array1 = "aasdfghjkl852zxcv852";
	string array2 = "qwertyuiop741asdf741";

public:
	Shablon(string str) : Crypto(str) {
		s = str;
	}
	string dchange();
	string nchange();
};