#pragma once
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "Token.h"

using std::cout;
using std::endl;
using std::left;
using std::setw;
using std::string;
using std::vector;

vector<Token> scan(string);
void printTokenList(vector<Token>);