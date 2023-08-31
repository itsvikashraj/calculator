#include <iostream>
using namespace std;

int main() {

    int m,n;
    char o;

    cout<<"enter 1st number:-  ";
    cin>>n;

    cout<<"enter operator +,-,*,/ :-  ";
    cin>>o;

    cout<<"enter 2nd number:-   ";
    cin>>m;

    if(o == '+') {
        cout<<"sum is:-  "<<m+n;
    }
    else if (o == '-') {
        cout<<"subtraction is:-  "<<m-n;
    }
    else if(o == '*') {
        cout<<"multiplication is:-  "<<m * n;
    }
    else {
        cout<<"answer is:-  "<<m/n;
    }
    return 0;
}