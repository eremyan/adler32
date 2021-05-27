#pragma once
#include <cstring>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
class adler_32
{
private:
    int A=1;
    int B=0;
public:
    //конструктор с си строкой
    //конструктор с строкой си++
    //деструктор
    unsigned int checkTheCode(string text, unsigned int code);
    unsigned int setTheFileNameAndGenerateCode(string text);
};
