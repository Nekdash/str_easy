#include "str_easy.h"

/*
�������� ������� double ft_percent_lower_uppercase(string str),
 ������� ���������� ������������ ����� ������ �����������
  ����������� ��������� � �������� ���� � ������

*/


double itc_percent_lower_uppercase(string str){
    long long big = 0;
    long long small = 0;
    for ( int i = 0, i < itC_len(str), i++){
        int ch = str[i];
        if ( ch <= 90 && ch >= 65){
            big++;
        }else if(ch <= 122 && ch >= 97){
            small++;
        }
        return big/small * 100;
    }
}
