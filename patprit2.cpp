#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter the number ";
    cin>>n;
    int m=1;
    
    for (int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++)
            cout<<" ";
            for (int k=1; k<=i; k++){
                cout<<m;
               
                 
            }
              m++;
           
            cout<<endl;
        
    }

    return 0;
}