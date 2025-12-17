/*
//Calculator for switch case
#include <iostream>
using namespace std;
int main(){
      
  char operators;
  float x,y;
    cout<<"Please enter operator(+,-,*,/)="; cin>>operators;
    cout<<"Please enter x="; cin>>x;
    cout<<"Please enter y="; cin>>y;

    switch(operators){
      
       case '+' : cout<<"Process result="<<x+y<<endl;
           break;
       case '-': cout<<"Process results="<<x-y<<endl;
           break;
       case '*': cout<<"Process results="<<x*y<<endl;
           break;
       case '/': if(y!=0){
           cout<<"Process results="<<x/y<<endl;  //The output "inf" is infinity.
     }
                 else {
          cout<<"Process results="<<x/y<<endl;
      }
           break;
     default : cout<<"Your entered operator is false.Please enter true operator..."<<endl;
    }
  system ("pause");
return 0;
}
*/

