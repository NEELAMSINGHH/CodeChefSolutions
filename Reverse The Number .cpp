#include<iostream>
using namespace std;

int main(){
    int T,N;
    cin>>T;
  for(int i=0;i<T;i++){
       cin>>N;
       bool leadingzero=true;
         while(N>0){
          if(N%10==0 && leadingzero){
           N/=10;
           continue;
           }
           leadingzero=false;
           cout<<N%10;
           N/=10;
      }
      cout<<endl;

    }
    return 0;
    
   }
