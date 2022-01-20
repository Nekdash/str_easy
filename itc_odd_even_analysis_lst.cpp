#include "middle_list.h"

int itc_max_lst(const vector <int> &lst){
    int max_num = -2147483648;
    if (lst.size() > 0){
        for(int i =0; i < lst.size(); i++){
            if (lst[i] > max_num)
                max_num = lst[i];
        }
    }
    return max_num;
}

int itc_min_lst(const vector <int> &lst){
    int min_num = 2147483648;
    if (lst.size() > 0){
        for(int i =0; i < lst.size(); i++){
            if (lst[i] < min_num)
                min_num = lst[i];
        }
    }
    return min_num;

}


void itc_odd_even_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus");
    vector<int> lst1, lst2;
    itc_odd_even_separator_lst(lst, lst1, lst2);
    cout << "������ ������:" << endl;
    cout << "���������� ������ �����: " << lst1.size() << "," << '\t'    << '\t' << "���������� �������� �����: " << lst2.size() << endl;
    cout << "������������ ������ �����: " << itc_max_lst(lst1) << "," << '\t' << '\t' << "������������ �������� �����: " << itc_max_lst(lst2) <<"," << endl;
    cout << "����������� ������ �����: " << itc_min_lst(lst1) << "," << '\t' <<'\t' << "����������� �������� �����: " << itc_min_lst(lst2)<<"," << endl;
    cout << "����� ������ �����: " << itc_sumlst(lst1) << "," << '\t' <<'\t' << "����� �������� �����: "  << itc_sumlst(lst2)<<"," << endl;
}
