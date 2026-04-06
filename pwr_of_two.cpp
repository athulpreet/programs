//W.A.P to print the power of two series using for loop



#include<iostream>


using namespace std;

int main(){


int power=1,n;

cout<<"enter the number of terms"<<endl;
cin>>n;

for(int i=0;i<n;i++){

    cout<<power;
    power =power*2;
}




    return 0;
}
