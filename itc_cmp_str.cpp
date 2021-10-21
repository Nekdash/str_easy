#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string res = "";
    for ( int i = 0; i < num-1;i++){
        res += str1[i];
    }
    res += str2;
  for ( int j = num-1; j< itc_len(str1);j++){
      res += str1[j];
  }
  res = itc_slice_str(res, 0, itc_len(str1)-1);
  return res;

}
