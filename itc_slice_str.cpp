#include "str_easy.h"

string itc_slice_str(string str, int start, int end){
    string res ="";
    if ( end >= itc_len(str)){
        end = itc_len(str);
    }
    for ( int i = start; i < end; i++){
        res += str[i];
    }
    return res;
}

/*
�������� ������� string ft_slice_str(string str, int start, int end),
������� ��������� �� ���� ������,
 ������ ���������� � ������� �����.
������� ���������� ����� ������ �� �������
  � ������� ������� ���������,
  �� ������� � ������� �������� ���������.
  ���� ������ �������� ��������� �������� ���������
  ������� ������, �� ���������� ������� ������
  �� ������� ��������� �� ����� ������.

*/
