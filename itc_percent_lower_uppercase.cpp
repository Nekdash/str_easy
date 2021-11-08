#include "str_easy.h"

/*
Íàïèñàòü ôóíêöèþ double ft_percent_lower_uppercase(string str),
 êîòîðàÿ âîçâðàùàåò âåùåñòâåííîå ÷èñëî ðàâíîå ïðîöåíòíîìó
  ñîîòíîøåíèþ ïðîïèñíûõ è ñòðî÷íûõ áóêâ â ñòðîêå

*/


double itc_percent_lower_uppercase(string str){
    long long big = 0;
    long long small = 0;
    double res;
    int ch;
    for ( int i = 0; i < itc_len(str); i++){
        ch = str[i];
        if ( ch <= 90 && ch >= 65){
            big++;
        }else if(ch <= 122 && ch >= 97){
            small++;
        }

    }
    res = big/ small;
 return res;
}
