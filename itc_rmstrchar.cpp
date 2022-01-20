#include "middle_list.h"

bool itc_find_str(string str1, char ch){
    long long res = -1;
    bool r = true;
    for ( int i = 0; i < itc_len(str1); i++){
        if (str1[i] == ch){
            res = false;
        }
    }
    return r;

}


string itc_rmstrchar(string str, string less1) {
    string res = "";
    int m  =0;
        for (long long i = 0; str[i] != '\0'; i++) {
        for(long long j = 0 ; less1[j] != '\0'; j++){
            if (less1[j] == str[i]){
                m  =1;
            }
        }
        if (m == 0){
            res += str[i];

        }
        m = 0;
    }


    return res;

}
