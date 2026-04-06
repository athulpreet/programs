//WAP to check whether character is Upper Case, Lower Case or Digit




#include<iostream>

using namespace std;

int main(){

char charr;
cout<<"enter the char"<<endl;

cin>>charr;

if(charr >='A' && charr <='Z'){

    cout<<"the charecter is a uppser case"<<endl;
}
else if(charr >= 'a'&& charr <='z'){

    cout<<"the charecter is a lower case"<<endl;

}

else if(charr>='0'&& charr<='9'){

    cout<<"charecter is a number"<<endl;
}



    return 0;
}
