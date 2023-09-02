#include <iostream>
#include "OtherFile.cpp"
//#using namespace std;

namespace a
{
    void printX(){
        outside_function();
        int number = -4, num2;
        cout << "number before passing into the function = " << number <<"\n" << endl;
                number = absolute(number);
        cout << "Enter your Number:";
        cin >> num2;
                number = num2+number;
        cout << "Final Number : " << number << endl ;
    }
}

namespace b
{
    void displayN(){
        //char name1; only work for 1 char
        string name1; //only work for no space value
        cout << "Type your full name: ";
        getline (cin, name1);
        //cin >> name1;
        cout << "Your Name : " << name1 << endl ;
    }
}

namespace c {
    void nameD(){
    char name1 = 'H';

    std::cout << "Your Name : " << name1 << std::endl; // using this code then #using namespace std; should be comment
    }
}

int main(){
 //   a::printX();
 //   b::displayN();
c::nameD();
    return 0;
}
