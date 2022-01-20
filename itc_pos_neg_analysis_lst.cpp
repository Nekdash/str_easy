#include "middle_list.h"



 void itc_pos_neg_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus");
    vector <int> neg, zero, pos;
    itc_pos_neg_separator_lst(lst, neg, zero, pos);
    cout << "Положительные:" << '\t' << '\t' << "Отрицательные:" << endl;
    cout << "Количество чисел: " << pos.size() << "," << '\t' << '\t' << "Количество чисел: " << neg.size() << "," << endl;
    cout << "Максимальная цифра: " << itc_max_lst(pos) << "," << '\t' << '\t' << "Максимальная цифра: " << itc_max_lst(neg) <<  "," << endl;
    cout << "Минимальная цифра: " << itc_min_lst(pos) << "," << '\t' << '\t' << "Минимальная цифра: " << itc_min_lst(neg) << "," << endl;
    cout << "Сумма чисел: "<< itc_sumlst(pos) << "," << '\t'	<< '\t' << "Сумма чисел: "<< itc_sumlst(neg) <<"," << endl;
    cout << "Среднее значение: "<< itc_sumlst(pos) / pos.size()<< '\t'	<< '\t' << "Среднее значение: " << itc_sumlst(neg) / neg.size() << endl;
cout << endl;
   cout << "Количество нулей: " << zero.size() << endl;
}
