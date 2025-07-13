#include<iostream>
using namespace std;

int main(){
    int num = 57;

    cout << "The number is : " << num << endl;

    cout <<"After post increment by 1 the nmber is : " << num++ << endl;

    cout <<"After pre increment by 1 the nmber is : " << ++num << endl;
     
    cout <<"After increasing  by 1 the nmber is : " << num + 1 << endl;

    cout <<"After post decrement by 1 the nmber is : " << num-- << endl;

    cout <<"After pre decrement by 1 the nmber is : " << --num << endl;

    cout <<"After decreasing by 1 the nmber is : " << num - 1 << endl;
    
    return 0;

}