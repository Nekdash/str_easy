#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

int main(){

    string str1;
    getline(cin, str1);
    //getline(cin, str2);
    //getline(cin, str3);
    cout << itc_max_char_on_end(str1) << endl;
    return 0;
    }
