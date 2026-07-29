#include<iostream>
using namespace std;

void changeValue(int num){
    num=50;
}

int main(){
    int value =10;
    changeValue(value);

    cout<<value <<endl;
    cout<<"this is the value" <<value<<endl
    
    return 0;
}
