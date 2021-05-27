#include <cstring>
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
    
    unsigned int checkTheCode(string text, unsigned int code){
        adler_32 x;
        unsigned int myCode;
        myCode=x.setTheFileNameAndGenerateCode(text);
        if(myCode == code){
            cout<<"ok"<<endl;
    } else { 
        cout<<"not ok"<<endl;
        }
        return code;
        }
    
    unsigned int setTheFileNameAndGenerateCode(string text){
        int len = text.size();
        unsigned int k=0;
        for(int i=0;i<len;i++){
            k=text[i];
            A=(A+k)%65521;
            B=(B+A)%65521;;
            }
            cout<<hex<<B*65536+A<<endl;
            return (B*65536+A);
        }
    
    void print() const
    {
        cout<<A<<endl;
        cout<<B<<endl;
    }
};
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
                } else if (op==2){
                    cout<<"Сгенерированный код и имя файла:";
                    y.setTheFileNameAndGenerateCode(text);
                }
            } 
    } while (op!=0);
    return 0;
}
