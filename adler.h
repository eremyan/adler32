#pragma once
#include <cstring>
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;
class adler_32
{
private:
    int A=1;
    int B=0;
public:
    unsigned int checkTheCode(string text, unsigned int code);
    unsigned int setTheFileNameAndGenerateCode(string text);
};
