#include <iostream>
using namespace std;

int main(){
    //	٩(◕‿◕｡)۶ This are the variables to be used in the program
    int num, input, range, prod;

    // program is asking you to enter an integer, it can be anynumber
    cout << "Enter an Integer: ";
    cin >> input;
    // the integer will be multiplied on repeat till it reaches its range number
    cout << "Enter Range: ";
    cin >> range;
    cout << "\n";

    // the program will loop until the num counter will reach the range number
    for(num=1; num<=range; num++){
        prod = num * input;
        cout << input << "*" << num << "=" << prod << "\n";
    }

    return 0;
}

/*	٩(◕‿◕｡)۶ oh hello there, welcome to my code (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧

    This code is made by

    Roanne Zoe M. Cayanan

    please do not steal my code (´｡• ᵕ •｡`) ♡

    Thank you	♡ ～('▽^人)
*/
