#include "str_easy.h"

/*

�������� ������� string ft_even_place(string str),
 ������� ��������� �� ���� ������,
 ���������� ����� ������ ���������
 ������ �� �������� ������ ������,
 ������� ����� ������ ������

*/
string itc_even_place(string str){
    string res = "";
    for (int i = 0; i < itc_len(str); i+=2){
        res += str[i];
    }
    return res;
}
