#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int counter=0;
        while(m>0)
        {   
            int digit=m%10;
            if (digit==4)
            {
                counter++;
                  
            }
             m/=10;
          
        }
         cout<<counter<<endl;
    }
    return 0;
}
