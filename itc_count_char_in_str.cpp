#include "str_easy.h"

int itc_count_char_in_str(char ch, string str){
    int res = 0;
    for ( int i = 0; i < itc_len(str); i++){
        if (str[i] == ch)
            res++;
    }
    return res;
}
