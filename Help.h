/**@file Help.h
*  @author Еремян М.Т. 
*  @version 1.0 
*  @date 03.06.2021
*  @copyright ИБСТ ПГУ 
*  @warning Это учебный пример 
*  @brief Заголовочный файл для модуля Help 
*/
#pragma once
#include <cstring>
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;
/**@brief Выдача справки по программе Adler-32
*  @details  Для вывода справки предназначен метод Helping
*/
class help
{
private:
    const string Help="Программа Adler-32.\nПрограмма выполняет:\n1.Проверку кода Adler-32 \n2.Формирование кода Adler-32\nПодробнее о том, как работает программа можно узнать по ссылке:\nhttps://ru.wikipedia.org/wiki/Adler-32"; ///< строка содержащая справочную информацию 
public:
/**     
* @brief Вывод справки     
* @return Ничего не возвращает         
*/
    void Helping();
};
