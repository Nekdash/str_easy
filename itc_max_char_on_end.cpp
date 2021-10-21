#include "str_easy.h"

 long long itc_max_char_on_end(string str){
     char ch = str[0];
     long long res = 0;
     long long counter =0;
     for ( int i = 0; i < itc_len(str); i++){
        ch = str[i];
        if ( ch >= "0" && ch <= "9"){
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
/*


int itc_max_char_on_end(string str){
    int maxx = 0, kol = 0;
    string num = "";
    for (int i = 0; i < itc_len(str); i++){
        if (str[i] >= '0' && str[i] <= '9')
            kol += 1;
        if (kol > maxx)
            maxx = kol;
        if (str[i] < '0' || str[i] > '9')
            kol = 0;
        }

    return maxx;
}

*/
