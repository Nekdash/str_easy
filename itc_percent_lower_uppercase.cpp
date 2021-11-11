#include "str_easy.h"

/*
Íàïèñàòü ôóíêöèþ double ft_percent_lower_uppercase(string str),
 êîòîðàÿ âîçâðàùàåò âåùåñòâåííîå ÷èñëî ðàâíîå ïðîöåíòíîìó
  ñîîòíîøåíèþ ïðîïèñíûõ è ñòðî÷íûõ áóêâ â ñòðîêå

*/


double itc_percent_lower_uppercase(string str){
    double big = 0;
    double small = 0;
    double res = 0;
    char ch;
    for ( int i = 0; i < itc_len(str); i++){
        ch = str[i];
        if ( ch <= 'Z' && ch >= 'A'){
            big++;
        }else if(ch <= 'z' && ch >= 'a'){
            small++;
        }

    }
 if ( big == 0 || small == 0){
  return -1.0;}
   res = big/ small;
 return res;
 return -1.0;
}
