 #include <iostream>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int x=n; x>=1; x--){
        for(int a=1; a<=n-x; a++){
            cout<<" ";
        }
        for(int b=1; b<=x; b++){
            cout<<"* ";
        }
        cout<<endl;
        }
    }

//    * 
//   * * 
//  * * * 
// * * * * 
// * * * * 
//  * * * 
//   * * 
//    * 