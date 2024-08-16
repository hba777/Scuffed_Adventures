#include<iostream>
using namespace std;

class Date{

public: Date(){
        cout<<"Hello";
    }
public: Date(int num){
        cout<<num;
    }
};
int main(){
    Date date,date1(5);


return 0;
}