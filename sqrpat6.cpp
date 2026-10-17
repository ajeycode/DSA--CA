// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
    
//     for (int i=1; i<=n; i++){
//         char ch='a';
//         for (int j=1; j<=n; j++){
//             cout<<ch;
//             ch++;
//         }
//         cout <<endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(char ch='a'; ch<='e'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}