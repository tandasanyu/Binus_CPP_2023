#include <iostream>
#include "OtherFile.cpp"
using namespace std;
int main(){
    outside_function();
    int number = -4, num2;
        cout << "number before passing into the function = " << number <<"\n" << endl;
        number = absolute(number);
        cout << "Enter your Number:";
        cin >> num2;
        number = num2+number;
        cout << "Final Number : " << number << endl ;
    return 0;
}
