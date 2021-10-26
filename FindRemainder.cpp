#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int m,k;
     int div = 0;
    for(int i=0;i<n;i++){
        cin>>m>>k;
        div = m%k;
         cout<<div<<endl;
    }
    return 0;
}
