#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3){
    long long i =0;
    while (itc_find_str(itc_slice_str(str1, i , itc_len(str1)), str2) != -1){
            long long start = itc_find_str(itc_slice_str(str1, i , itc_len(str1)), str2);
            str1 = itc_slice_str(str1, 0, start) + str3 + itc_slice_str(str1, start + itc_len(str2), itc_len(str1));
        }
        return str1;
    }


/*
�������� ������� string itc_three_str(string str1, string str2, string str3),
������� ��������� �� ���� ��� ������ � ���������� ������,
������� �������� ������ �������,
�� � ������� ��������� ������ ������� ���������
������� �������� �� ������ �������� � �������.

*/
