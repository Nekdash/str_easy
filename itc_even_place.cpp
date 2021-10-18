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
    for (int i = 1; i < itc_len(str); i+=2){
        res += str[i];
    }
    return res;
}
