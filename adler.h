/**@file 
*  @author Еремян М.Т. 
*  @version 1.0 
*  @date 03.06.2021
*  @copyright ИБСТ ПГУ 
*  @warning Это учебный пример 
*  @brief Заголовочный файл для модуля adler 
*/
#pragma once
#include <cstring>
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;
/**@brief Формирование и проверка кода Adler-32
*  @details  Для формирования и проверки кода предназначены методы setTheFileNameAndGenerateCode и checkTheCode.  
*/
class adler_32
{
private:
    int A=1; ///< Для первой контрольной суммы
    int B=0; ///< Для второй контрольной суммы
public:
/**     
* @brief Проверка кода     
* @param [in] text любой текст
* @param [in] code код который нужно проверить
* @return Проверяемый код         
*/
    unsigned int checkTheCode(string text, unsigned int code);
/**     
* @brief Формирование кода     
* @param [in] text любой текст для которого нужно сформировать код.
* @return Сформированный код         
*/
    unsigned int setTheFileNameAndGenerateCode(string text);
};
