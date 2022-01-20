#include "middle_list.h"

long itc_sum_even_lst(const vector <int> &lst){
    long res =0;
    if(lst.size() > 0){
        for(long long i =0; i < lst.size(); i+=2){
        res += lst[i];
    }
    }

    return res;
}
