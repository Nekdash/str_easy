#include "str_easy.h"

/*

Написать функцию string ft_even_place(string str),
 которая принимает на вход строку,
 возвращает новую строку состоящую
 только из символов первой строки,
 которые имеют четные номера

*/
string itc_even_place(string str){
    string res = "";
    for (int i = 0; i < itc_len(str); i+=2){
        res += str[i];
    }
    return res;
}
