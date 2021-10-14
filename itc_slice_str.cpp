#include "str_easy.h"

string itc_slice_str(string str, int start, int end){
    string res ="";
    if ( end >= itc_len(str)){
        end = itc_len(str);
    }
    for ( int i = start; i < end; i++){
        res += str[i];
    }
    return res;
}

/*
Написать функцию string ft_slice_str(string str, int start, int end),
которая принимает на вход строку,
 вторым аргументом и третьим число.
Функция возвращает часть строки от символа
  с номером второго аргумента,
  до символа с номером третьего аргумента.
  Если третий аргумент превышает значение конечного
  символа строки, то необходимо вернуть строку
  от второго аргумента до конца строки.

*/
