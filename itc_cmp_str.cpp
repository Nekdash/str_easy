#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string res = "";
    for ( int i = 0; i < num;i++){
        res += str[i];
    }
  for ( int i = num; i< itc_len(str);i++){
      res += str[i];
  }
  return res;

}
/*
Написать функцию ft_cmp_str(str1, str2, num),
которая на вход принимает две строки и целое
значение и возвращает строку, которая состоит
из начала первой строки, затем начиная с номера,
который был передан вторая строка, затем продолжение первой.

*/
