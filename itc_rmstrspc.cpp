#include "middle_list.h"

string itc_rmstrspc(string str){

    string res = "";
    if(itc_len(str) > 0){
       for(long long i =0; str[i] != '\0'; i++){
        if(str[i] != ' ')res+=str[i];
    }
    }

    return res;
}
