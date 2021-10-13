#ifndef STR_EASY_H_INCLUDED
#define STR_EASY_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

string itc_hello_str(string name);
long long itc_len(string str);
void itc_print_copy_str(string str, int number);
void itc_first_end_three(string str);
int itc_count_char_in_str(char ch, string str);
string itc_even_place(string str);
double itc_percent_lower_uppercase(string str);
string itc_reverse_str(string str);
string itc_slice_str(string str, int start, int end);
bool itc_equal_reverse(string str);

/*
Написать функцию ft_cmp_str(str1, str2, num), которая на вход принимает две строки и целое значение и возвращает строку, которая состоит из начала первой строки, затем начиная с номера, который был передан вторая строка, затем продолжение первой.
Написать функцию ft_find_str(str1, str2), которая принимает на вход две строки и возвращает номер первого вхождения второй строки в первую. (Вхождение – это когда одна строка полностью входит во вторую). Если такого номера нет, то выводит -1
Написать функцию ft_three_str(str1, str2, str3), которая принимает на вход три строки и возвращает строку, которая является первой строкой, но в которой подстроки равные второму аргументу функции заменены на третий аргумент в функции.
Написать функцию ft_max_char_on_end(str), которая принимает на вход строку и возвращает наибольшее количество идущих подряд цифр в строке.


*/

#endif // STR_EASY_H_INCLUDED
