#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3){
    long long i =0;
    for ( i; i < itc_len(str1); i++){
        long long start = itc_find_str(itc_slice_str(str1, i , itc_len(str1)), str2);
        if ( start == -1){
            return str1;
        }else{

        }
    }
}

/*
�������� ������� string itc_three_str(string str1, string str2, string str3),
������� ��������� �� ���� ��� ������ � ���������� ������,
������� �������� ������ �������,
�� � ������� ��������� ������ ������� ���������
������� �������� �� ������ �������� � �������.

*/
