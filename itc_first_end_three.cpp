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
        for (int i =0 , i< 3, i++){
            cout << str[i];
        }
        for (int k = 0, k < 3, k++){
            cout << str[itc_len(str)-1-k];
        }
    }else{
        for (int j = 0, j < itc_len(str), j++){
            cout << str[j];
        }
    }
}
