#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int n;
    float b;
    cin>>n>>b;
    if(n%5==0 && b>=(n+0.5)){
      b-=(n+0.50);
      }   
   
   cout<<fixed<<setprecision(2)<<b;
   return 0;
}
