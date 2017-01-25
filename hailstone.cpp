#include <iostream>
using namespace std;
int main() {
    //variables
    int input;
    int counter = 0;
    //io
    cout<<("Enter a number: ");
    cin>>input;
    //algorithm
    if(input != 1) {
        do {
            input = input % 2 == 0 ? input / 2 : (input * 3) + 1;
            cout<<input<<(" ");
            counter++;
        } while (input != 1);
    }else{
        cout<<(" ");
    }
    cout<<("\nLength: ")<<counter;
    return 0;
}