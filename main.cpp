#include "adler.h"
#include <cstring>
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;
int main(int argc, char **argv)
{
    adler_32 y;
    cout<<setw(70)<<"ADLER_32"<<endl;
    string text;
    unsigned op;
    do {
        cout<<"Выберите действие (0-выход, 1-проверить, 2-сгенерировать): ";
        cin>>op;
        if (op>0 && op<=2) {
            cout<<"Вводите текст: ";
            cin>>text;
            if (op==1) {
                unsigned int code;
                cout<<"Введите код:";
                cin>>hex>>code;
                cout<<"Верное значение: "<<y.checkTheCode(text,code)<<endl;
            } else if (op==2) {
                cout<<"Сгенерированный код:";
                y.setTheFileNameAndGenerateCode(text);
            }
        }
    } while (op!=0);
    return 0;
}
