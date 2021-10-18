#include "str_easy.h"

/*

Íàïèñàòü ôóíêöèþ string ft_even_place(string str),
 êîòîðàÿ ïðèíèìàåò íà âõîä ñòðîêó,
 âîçâðàùàåò íîâóþ ñòðîêó ñîñòîÿùóþ
 òîëüêî èç ñèìâîëîâ ïåðâîé ñòðîêè,
 êîòîðûå èìåþò ÷åòíûå íîìåðà

*/
string itc_even_place(string str){
    string res = "";
 if (itc_len(str) == 0 || itc_len(str) == 1)
        return "-1";
    for (int i = 1; i < itc_len(str); i+=2){
        res += str[i];
    }
    return res;
}
