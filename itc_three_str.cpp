#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3){
    long long i =0;
    string res = str1;
    long long len = 0;
    len = itc_len(str2);
    while (itc_find_str(res, str2) != -1){
            str1= res;
            i = itc_find_str(str1, str2);
            res = "";
            for ( int j = 0; j < i; j++){
                res += str1;
            }
            res += str3;
            for  ( int k  = i + len; str1[k] != '\0'; k++ ){
                res += str1[k];
            }
        }
        return res;
    }


/*
Íàïèñàòü ôóíêöèþ string itc_three_str(string str1, string str2, string str3),
êîòîðàÿ ïðèíèìàåò íà âõîä òðè ñòðîêè è âîçâðàùàåò ñòðîêó,
êîòîðàÿ ÿâëÿåòñÿ ïåðâîé ñòðîêîé,
íî â êîòîðîé ïîäñòðîêè ðàâíûå âòîðîìó àðãóìåíòó
ôóíêöèè çàìåíåíû íà òðåòèé àðãóìåíò â ôóíêöèè.

*/
