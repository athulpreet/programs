
//W.A.P to multiply 2 nos without multiplication operator



#include<iostream>


using namespace std;



int main(){

int result=0,a,b;

cout<<"enter the two numbers to multiply"<<endl;


cin>>a>>b;



    while(b>0){


if(b&1){  //checking if b is odd


    result=result+a;
}



        a=a<<1;//double
        b=b>>1;//half
    }

cout<<result;

    return 0;
}
