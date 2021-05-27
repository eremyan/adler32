#include "adler.h"
using namespace std;
unsigned int adler_32::checkTheCode(string text, unsigned int code)
{
    adler_32 x;
    unsigned int myCode;
    myCode=x.setTheFileNameAndGenerateCode(text);
    if(myCode == code) {
        cout<<"ok"<<endl;
    } else {
        cout<<"not ok"<<endl;
    }
    //code=0;
    return code;
}

unsigned int adler_32::setTheFileNameAndGenerateCode(string text)
{
    int len = text.size();
    unsigned int k=0;
    for(int i=0; i<len; i++) {
        k=text[i];
        A=(A+k)%65521;
        B=(B+A)%65521;;
    }
    cout<<hex<<B*65536+A<<endl;
    return (B*65536+A);
}
