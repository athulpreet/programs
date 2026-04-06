//WAP to find the greatest of given 3 numbers


#include<iostream>


using namespace std;


int main(){

int a=10,b=20,c=30;


    if(a>b &&a >c){

        cout<<"a is greater"<<endl;

    }

    else if(b>a && b>c){

        cout<<"b is greater"<< endl;
    }

    else if(c>a &&c>b){

        cout<<"c is greater"<<endl;    }

else{

    cout<<"two or more numbers are equal"<<endl;
}

        return 0;
}
