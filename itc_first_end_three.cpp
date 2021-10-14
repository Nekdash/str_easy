#include "str_easy.h"

/*
Написать функцию void ft_first_end_three(string str),
которая выводит первые три символа и последний три символа,
если длина строки больше 5.
Иначе вывести первый символ столько раз,
какова длина строки.

*/
void itc_first_end_three(string str){
    if (itc_len(str) > 5){
        for (int i =0 ; i< 3; i++){
            cout << str[i];
        }
        for (int k = 3; k > 0; k--){
            cout << str[itc_len(str)-k];
        }
    }else{
        for (int j = 0; j < itc_len(str); j++){
            cout << str[j];
        }
    }
}
