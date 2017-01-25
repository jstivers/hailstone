#include <iostream>
using namespace std;
int main() {
    //variables
    int input;
    //io
    cout<<("Enter a number: ");
    cin>>input;
    //algorithm
    if(input % 2 == 0){
        input = input /2;
        cout<<input;
    }else{
        input = (input * 3)+1;
        cout<<input;
    }
    return 0;
}