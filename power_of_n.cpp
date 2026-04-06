//C9 - W.A.P to print the power of N series using Loops


#include<iostream>


using namespace std;

int main(){


int power=1,n,pp;

cout<<"enter the number of terms"<<endl;
cin>>n;
cout<<endl;

cout<<"enter the power"<<endl;
cin>>pp;


for(int i=0;i<n;i++){

    cout<<power;
    power =power*pp;
}




    return 0;
}
