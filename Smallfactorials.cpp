#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int fact=1;
        {   int size=1000;
            int fact[size],carry=0,j=size-1;
            fact[size-1]=1;
            while(m>1)
            {
                int x;
                for(int k=size-1;k>=j;k--)
                {
                    x=fact[k]*m+carry;
                    fact[k]=x%10;
                    carry=x/10;
                }
                while(carry>0){
                    fact[--j]=carry%10;
                    carry/=10;
                }
                m--;
            }
            for(int k=j;k<size;k++){
                cout<<fact[k];
            }
          
        }
         cout<<endl;
    }
    return 0;
}
