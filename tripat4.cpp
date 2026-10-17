#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"PLease enter the num: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=i; j>=1; j--){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
} 
