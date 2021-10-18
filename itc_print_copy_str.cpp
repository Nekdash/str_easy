#include "str_easy.h"
/*
Íàïèñàòü ôóíêöèþ void ft_print_copy_str(string str, int number),
 êîòîðàÿ ïðèíèìàåò íà âõîä ñòðîêó è öåëîå ÷èñëî
  è âûâîäèò íà ýêðàí ñòðîêó ñòîëüêî ðàç,
   ÷åìó ðàâåí âòîðîé àðãóìåíò ôóíêöèè.

*/
void itc_print_copy_str(string str, int number){
    for (int i = 0; i < number; i++){
        cout << str;
    }
}
