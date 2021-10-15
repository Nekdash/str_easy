#include "str_easy.h"

long long itc_find_str(string str1, string str2){
    bool start = false;
    bool check = true;
    long long res = -1;
    for ( int i = 0; i < itc_len(str1); i++){
        if ( str1[i] == str2[0] || !start){
            start = true;
            res = i;
        }else if(start && check){
            for ( int k = 0; k < itc_len(str2); j++){
                if (str1[i] == str2[j]){
                    check = true;
                }else{
                    check = false;
                }
            }
        }
    }
    if ( check )
        return res;
    return -1;
}
