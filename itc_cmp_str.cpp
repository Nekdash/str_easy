#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string res = "";
    for ( int i = 0; i < num;i++){
        res += str1[i];
    }
    res += itc_slice_str(str2, 0, (len1 - num));
  for ( int j = num-1; j< itc_len(str1);j++){
      res += str1[j];
  }
  res = itc_slice_str(res, 0, itc_len(str1)-1);
  return res;

}
