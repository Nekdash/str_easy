#include <iostream>
#include "str_easy.h"

using namespace std;

int main()
{
    string str = "nekrasova";
    cout << itc_hello_str(str) << endl;
    cout << itc_len(str) << endl;
    itc_print_copy_str(str, 3);
    itc_first_end_three(str);
    cout << endl;
    cout << itc_count_char_in_str('a', str) << endl;
    cout << itc_even_place(str) << endl;
    cout << itc_percent_lower_uppercase(str) << endl;
    cout << itc_reverse_str(str) << endl;
    cout << itc_slice_str(str, 1, 5) << endl;
    cout << itc_equal_reverse(str) << endl;
    cout << itc_cmp_str(str, "dash", 4) << endl;
    return 0;
}
