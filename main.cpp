#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

int main(){

    string str1, str2, str3;
    getline(cin, str1);
    getline(cin, str2);
    getline(cin, str3);
    cout << itc_three_str(str1, str2, str3) << endl;
    return 0;
    }
