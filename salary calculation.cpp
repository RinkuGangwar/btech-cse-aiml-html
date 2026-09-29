#include<iostream>
using namespace std;
int main (){
    int main() {
        float bs, hra, da, pf, gs, ns;
        cout<<"enter your baisc salary";
        cin>> bs;
        hra=0.25*bs;
        da=0.15*bs;
        gs=bs+hra+da;
        pf=0.1*gs;
        ns=gs-pf;
        cout<<"your hra is: "<<hra<<endl;
        cout<<"your da is: "<<da<<endl;
        cout<<"your pf is: "<<pf<<endl;
        cout<<"your net salary is:"<<ns<<endl;
       

        return 0;
}