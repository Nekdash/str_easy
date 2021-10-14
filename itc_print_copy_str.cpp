#include "str_easy.h"
/*
Написать функцию void ft_print_copy_str(string str, int number),
 которая принимает на вход строку и целое число
  и выводит на экран строку столько раз,
   чему равен второй аргумент функции.

*/
void itc_print_copy_str(string str, int number){
    for (int i = 0; i < number; i++){
        cout << str << endl;
    }
}
