#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number here : ";
    cin>>n;
    for (int i=1; i<=n; i++){
        int mum=1;
        for (int j=1; j<=n-i; j++){
            cout<<" ";
        
        }for (int k=1; k<=i; k++){
            cout<<mum;
            mum++;
        }
        cout<< endl;
    }
    return 0;
}
 