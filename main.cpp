#include "adler.h"
#include "Help.h"
#include <cstring>
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;
int main(int argc, char **argv)
{
    help a;
    a.Helping(); 
    adler_32 y;
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
