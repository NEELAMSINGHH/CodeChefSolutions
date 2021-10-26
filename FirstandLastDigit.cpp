#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int ans=0;
        int first=0;
        ans+=m%10;
        while(m>0)
        {
            first=m%10;
            m/=10;
        }
        ans+=first;
        cout<<ans<<endl;
    }
    return 0;
}
