#include "adler.h"
#include <cstring>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    adler_32 y;
    cout<<"ADLER_32"<<endl;
    string text;
    unsigned op;
    do {
        cout<<"Выбирайте, что будет делать ваш покорный слуга (0-выход, 1-проверить, 2-сгенерировать и задать имя файла): ";
        cin>>op;
        if (op>0 && op<=2) {
            cout<<"Вводите текст: ";
            cin>>text;
            if (op==1) {
                unsigned int code;
                cout<<"Введите код:";
                cin>>code;
                cout<<"Проверенный код: "<<y.checkTheCode(text,code)<<endl;
            } else if (op==2) {
                cout<<"Сгенерированный код и имя файла:";
                y.setTheFileNameAndGenerateCode(text);
            }
        }
    } while (op!=0);
    return 0;
}
