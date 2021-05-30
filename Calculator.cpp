#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Enter operation which you want to perform: "<<endl;
    cin>>op;

    switch(op)
    {
    case '+':
        cout<<"Addition is: "<<n1+n2<<endl;
        break;
    case '-':
        cout<<"Subtraction is: "<<n1-n2<<endl;
        break;
    case '*':
        cout<<"Multiplication is: "<<n1*n2<<endl;
        break;
    case '/':
        cout<<"Division is: "<<n1/n2<<endl;
        break;
    
    default:
        cout<<"Invalid operator";
        break;
    }
}