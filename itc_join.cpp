#include "middle_list.h"

string itc_join(vector<char> lst, string sep){
    string res ="";
    if(lst.size() > 0){
      for(long long i =0; i < lst.size()-1; i++){
        res += lst[i];
        res += sep;
    }
    res += lst[lst.size()-1];

    }

    return res;
}
