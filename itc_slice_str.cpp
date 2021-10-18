#include "str_easy.h"

string itc_slice_str(string str, int start, int end){
    string res ="";
    if ( end >= itc_len(str)){
        end = itc_len(str);
    }
    for ( int i = start; i < end + 1; i++){
        res += str[i];
    }
    return res;

}

/*
Íàïèñàòü ôóíêöèþ string ft_slice_str(string str, int start, int end),
êîòîðàÿ ïðèíèìàåò íà âõîä ñòðîêó,
 âòîðûì àðãóìåíòîì è òðåòüèì ÷èñëî.
Ôóíêöèÿ âîçâðàùàåò ÷àñòü ñòðîêè îò ñèìâîëà
  ñ íîìåðîì âòîðîãî àðãóìåíòà,
  äî ñèìâîëà ñ íîìåðîì òðåòüåãî àðãóìåíòà.
  Åñëè òðåòèé àðãóìåíò ïðåâûøàåò çíà÷åíèå êîíå÷íîãî
  ñèìâîëà ñòðîêè, òî íåîáõîäèìî âåðíóòü ñòðîêó
  îò âòîðîãî àðãóìåíòà äî êîíöà ñòðîêè.

*/
