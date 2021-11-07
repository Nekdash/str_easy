#include "str_easy.h"

string itc_slice_str(string str, int start, int endd){
    string res ="";
    if ( endd >= itc_len(str)){
        endd = itc_len(str);
    }else if(start >= endd){
        return str;
    }else if(start == (itc_len(str) - 1)){
        return str[itc_len(str) - 1];
    }else{
        for ( long long i = start; i <= endd; i++){
        res += str[i];
    }
    return res;
    }


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
