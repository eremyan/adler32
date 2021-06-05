#include <UnitTest++/UnitTest++.h>
#include "adler.h"
//GenerateCode 
TEST(specialSimG) //спецальные символы
{    
  adler_32 k;    
  unsigned int d=0x01bf00ad;    
  CHECK_EQUAL(d,k.GenerateCode("$@#%"));
}
TEST(engG)//Английский алфавит
{
  adler_32 k;    
  unsigned int d=0x057e0196;    
  CHECK_EQUAL(d,k.GenerateCode("ABCDEF"));
}
TEST(numberG)//цифры
{
  adler_32 k;
  unsigned int d=0x91e01de;
  CHECK_EQUAL(d,k.GenerateCode("123456789"));
}
TEST(len1G)//длина в 1 символ
{    
  adler_32 k;    
  unsigned int d=0x00420042;    
  CHECK_EQUAL(d,k.GenerateCode("A"));
}TEST(len10G)//длина в 10 символов
{    adler_32 k;    
 unsigned int d=0x0ea602b8;
    CHECK_EQUAL(d,k.GenerateCode("ABCDEFGHIJ"));}
TEST(mixedCaseG)//смешанный регистр
{    adler_32 k;    
 unsigned int d=0x11e60398;
 CHECK_EQUAL(d,k.GenerateCode("Wikipedia"));}
TEST(lowerCaseG)//нижний регистр
{
  adler_32 k;    
  unsigned int d=0x130603b8;    
  CHECK_EQUAL(d,k.GenerateCode("wikipedia"));}
TEST(UpperCaseG)//верхний регистр
{    adler_32 k;    
 unsigned int d=0x0d660298;    
 CHECK_EQUAL(d,k.GenerateCode("WIKIPEDIA"));}
//checkTheCode 
TEST(mixedCaseC)//смешанный регистр
{    adler_32 k;    
 unsigned int d=0x11e60398;    
 CHECK_EQUAL(d,k.checkTheCode("Wikipedia",0x11e60398));}
TEST(lowerCaseC)//нижний регистр
{    adler_32 k;    
 unsigned int d=0x130603b8;    
 CHECK_EQUAL(d,k.checkTheCode("wikipedia",0x130603b8));}
TEST(upperCaseC)//верхний регистр
{    adler_32 k;
    unsigned int d=0x0d660298;    
 CHECK_EQUAL(d,k.checkTheCode("WIKIPEDIA",0x0d660298));}
TEST(len1C)//длина в 1 символ
{    adler_32 k;    
 unsigned int d=0x00420042;    
 CHECK_EQUAL(d,k.checkTheCode("A",0x00420042));}
TEST(len10C)//длина в 10 символов
{    adler_32 k;    
 unsigned int d=0x0ea602b8;    
 CHECK_EQUAL(d,k.checkTheCode("ABCDEFGHIJ",0x0ea602b8));}
TEST(specialSimC)//спец. символы
{    adler_32 k;    
 unsigned int d=0x01bf00ad;    
 CHECK_EQUAL(d,k.checkTheCode("$@#%",0x01bf00ad));}
TEST(engC)//английский алфавит
{    adler_32 k;    
 unsigned int d=0x057e0196;    
 CHECK_EQUAL(d,k.checkTheCode("ABCDEF",0x057e0196));}
TEST(numberC)//цифры
{
 adler_32 k;    
 unsigned int d=0x091e01de;    
 CHECK_EQUAL(d,k.checkTheCode("123456789",0x091e01de));
}
int main(int argc, char **argv){    
  return UnitTest::RunAllTests();
}
