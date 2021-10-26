#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k%m==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
