#include "str_easy.h"

 long long itc_max_char_on_end(string str){
     int ch;
     long long res = 0;
     long long counter =0;
     for ( int i = 0; i < itc_len(str); i++){
        ch = str[i];
        if ( ch >= 48 && ch <= 57){
            counter += 1;
        }
        else{
            if (counter > res){
                res = counter;
            }
            counter = 0;
        }
     }
     return res;
 }
