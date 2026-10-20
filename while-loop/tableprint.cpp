#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number :-";
    cin>>n;
    int a=1;
    while (a<=10){
        cout<<n<<"*"<<a<<" "<<"="<<n*a<<endl;
        a++;
    }
    cout<<endl;

    return 0;

}