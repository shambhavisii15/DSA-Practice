#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    char op;
    cout<<"enter the operator"<<endl;
    cin>>op;
    
    if(!cin){
        cout<<"please enter something";
        
    }
    
    
    switch(op){
        
        case '+':
            cout<<a+b;
            break;
        
        case '-':
            cout<<a-b;
            break;
            
        case '*':
            cout<<a*b;
            break;
            
        case '/':
            cout<<a/b;
            break;
    }
}