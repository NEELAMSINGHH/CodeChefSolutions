#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int T,x,y,z;
    cin>>T;
 while(T--){
       cin>>x>>y>>z;
       if(x>y  && x>z){
          if (z>y){
              cout<<z<<endl;
          }
          else{
              cout<<y<<endl;
          }
       }
          if(y>x && y>z){
          if (x>z){
              cout<<x<<endl;
          }
          else{
              cout<<z<<endl;
          }
          }
          if( z>x && z>y){
          if (y>x){
              cout<<y<<endl;
          }
          else{
              cout<<x<<endl;
          }
          }
     
      }
    return 0;
    
   }

