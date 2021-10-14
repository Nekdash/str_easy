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
