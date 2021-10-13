#include "str_easy.h"

string itc_reverse_str(string str){
    string res = "";
    for (int i = 0, i < itc_len(str), i++){
        res += str[itc_len(str)-i-1];
    }
    return res;
}
