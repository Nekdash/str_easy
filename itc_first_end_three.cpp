#include "str_easy.h"

/*
�������� ������� void ft_first_end_three(string str),
������� ������� ������ ��� ������� � ��������� ��� �������,
���� ����� ������ ������ 5.
����� ������� ������ ������ ������� ���,
������ ����� ������.

*/
void itc_first_end_three(string str){
    if (itc_len(str) > 5){
        for (int i =0 ; i< 3; i++){
            cout << str[i];
        }
        for (int k = 3; k > 0; k--){
            cout << str[itc_len(str)-k];
        }
    }else{
        for (int j = 0; j < itc_len(str); j++){
            cout << str[j];
        }
    }
}
