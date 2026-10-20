#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;cin>>n;
    int lst=n%10;
    while(n>10){
        n/=10;
        
    }
    cout<<n<<" "<<lst<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
