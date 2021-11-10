#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c1=0,c2=0,leadp=0,max=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        c1+=a;
        c2+=b;
        int lead=0;
        if(c1>c2){

           lead=c1-c2;
           if(lead>max){
               max=lead;
               leadp=1;
           }
        }
else{
    lead=c2-c1;
     if(lead>max){
               max=lead;
               leadp=2;
           }

}
    }


cout<<leadp<<" "<<max;
    return 0;
}
