#include "middle_list.h"

long itc_sum_even_part_lst(const vector <int> &lst){
    long res =0;
    if(lst.size() > 0){
        for(long long i =0; i < lst.size(); i++){
        if(lst[i] % 2 == 0){
            res += lst[i];
        }
    }
    }

    return res;
}
