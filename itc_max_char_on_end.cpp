#include "str_easy.h"

 long long itc_max_char_on_end(string str){
     char ch = str[0];
     long long res = 0;
     long long counter =0;
     for ( int i = 0; i < itc_len(str); i++){
        ch = str[i];
        if ( ch >= '0' && ch <= '9'){
            counter += 1;
        }
      if ( counter > res)
       res = counter;
        if (ch < '0' || ch > '9'){
            
            counter = 0;
        }
     }
     return res;
 }
