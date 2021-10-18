#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3){
    long long i =0;
    while (itc_find_str(itc_slice_str(str1, i , itc_len(str1)), str2) != -1){
            long long start = itc_find_str(itc_slice_str(str1, i , itc_len(str1)), str2);
            str1 = itc_slice_str(str1, 0, start-1) + str3 + itc_slice_str(str1, start + itc_len(str2), itc_len(str1)-1);
            i = start + itc_len(str3) - 1;
        }
        return str1;
    }


/*
Íàïèñàòü ôóíêöèþ string itc_three_str(string str1, string str2, string str3),
êîòîðàÿ ïðèíèìàåò íà âõîä òðè ñòðîêè è âîçâðàùàåò ñòðîêó,
êîòîðàÿ ÿâëÿåòñÿ ïåðâîé ñòðîêîé,
íî â êîòîðîé ïîäñòðîêè ðàâíûå âòîðîìó àðãóìåíòó
ôóíêöèè çàìåíåíû íà òðåòèé àðãóìåíò â ôóíêöèè.

*/
