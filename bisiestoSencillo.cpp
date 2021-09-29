#include <iostream>
using namespace std;

int main() {
    cout<<"Ingresa el a;o: ";
    int n;
    cin>>n;
    if(n>1600&&n<3000){
        if(n%4&&n%100&&n%400){
            cout<<"N";
        }else{
            cout<<"S";
        }
    }else{
        exit(-1);
    }
    return 0;
}
