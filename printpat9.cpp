#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please enter your number here :";
    cin>>n;
 for (int i=1; i<=n; i++){
    for (int j=1; j<=i; j++){
        cout<<"*";
        }
    for (int k=1; k<= 2*n-2*i; k++){
        cout<<" ";
    }
    for (int l=1; l<=i; l++){
        cout<<"*";
    }
    cout<<endl;
 }
 for (int m=n-1; m>=1;m--){
    for (int x=1;x<=m; x++){
        cout<<"*";
    }
    for (int y=1; y<= 2*n-2*m; y++){
        cout<<" ";
    }
    for (int x=1;x<=m; x++){
        cout<<"*";
    }
    cout<<endl;
    
    
 }
  return 0;
}
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *