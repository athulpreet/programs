//WAP to print the grade for a given percentage


#include<iostream>

using namespace std;

int main(){
int percentage=0;

cout<<"enter the percentage"<<endl;

cin>>percentage;


switch (percentage/10){


case 10:
case 9:
      
        cout<<"GRADE A"<<endl;
        break;

case 8: 
        cout<<"GRADE B"<<endl;
        break;

case 7:
        cout<<"GRADE C"<<endl;
        break;
case 6:
        cout<<"GRADE D"<<endl;
        break;
case 5:
case 4:
        cout<<"GRADE E"<<endl;
        break;

default:

        if(percentage >=0 && percentage<40){
            cout<<"GRADE: F"<<endl;

        }
        else{

            cout<<"invalid input"<<endl;
        }
break;


}



    return 0;
}
