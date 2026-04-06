//WAP to find the middle number (by value) of given 3 numbers


#include<iostream>


using namespace std;



int main(){

int a,b,c;


cout<<"enter three number:"<<endl;


cin>>a>>b>>c;



if((a>=b &&a<=c)||(a<=b && a>=c)){

    cout<<"a is the middle number"<<endl;
}


else if((b>=a&&b<=c)||(b<=a && b>=c)){

cout<<"b is the middle number"<<endl;

}

else{

cout<<"c is the middle number"<<endl;

}


    return 0;
}
