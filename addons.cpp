
#include "middle_list.h"

long long itc_len(string str) {
    long long res = 0;
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

string itc_slice_str(string str, int start, int endd) {
    string res = "";
    if (endd >= itc_len(str)) {
        endd = itc_len(str) - 1;
    }
    if (start > endd) {
        return str;
    }
    else if (start == (itc_len(str) - 1)) {
        res += str[itc_len(str) - 1];
        return res;
    }
    else {
        for (long long i = start; i <= endd; i++) {
            res += str[i];
        }
        return res;
    }

    return "-1";
}




void print(vector<char> &vec){
    for(long long i =0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}
void enter_vector(vector<int> mass, int n){
    char a;
    for(long long i =0 ;i < n; i++){
            cin >> a;
        mass.push_back(a);
    }
}
