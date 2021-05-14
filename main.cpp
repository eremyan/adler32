#include <iostream>
#include <cctype>
#include <string>
using namespace std;
class adler_32
{
private:
    int A;
    int B;
public:
    adler_32()//конструктор инициализирует начальные значения переменной
    {
        A=1;
        B=0;
    }
    //конструктор с си строкой
    
    //конструктор с строкой си++
    
    //деструктор
    
    //функция checkTheCode
    
    //функция setTheFileNameAndGenerateCode
    
    void print() const
    {
        cout<<A<<endl;
        cout<<B<<endl;
    }
};
int main(int argc, char **argv)
{
    cout<<"ADLER_32"<<endl;
    string text;
    unsigned op;
    do {
        cout<<"Выбирайте, что будет делать ваш покорный слуга (0-выход, 1-проверить, 2-сгенерировать и задать имя файла): ";
        cin>>op;
    if (op >0) {
            cout<<"Вводите текст: ";
            cin>>text;
                if (op==1) {
                    cout<<"Проверенный код: "<</*checkTheCode(text)*/<<endl;
                } else if (op==2){
                    cout<<"Сгенерированный код и имя файла"<</*setTheFileNameAndGenerateCode(text)*/<<endl;
                }
            } else if (op>2){
                cout<<"Операция прервана, попался хацкер\n";
            }
    } while (op!=0);
    return 0;
}
