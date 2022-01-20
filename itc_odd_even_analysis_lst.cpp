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
    cout << "Анализ списка:" << endl;
    cout << "Количество четных чисел: " << lst1.size() << "," << '\t'    << '\t' << "Количество нечетных чисел: " << lst2.size() << endl;
    cout << "Максимальная четная цифра: " << itc_max_lst(lst1) << "," << '\t' << '\t' << "Максимальная нечетная цифра: " << itc_max_lst(lst2) <<"," << endl;
    cout << "Минимальная четная цифра: " << itc_min_lst(lst1) << "," << '\t' <<'\t' << "Минимальная нечетная цифра: " << itc_min_lst(lst2)<<"," << endl;
    cout << "Сумма четных чисел: " << itc_sumlst(lst1) << "," << '\t' <<'\t' << "Сумма нечетных чисел: "  << itc_sumlst(lst2)<<"," << endl;
}
