#include <iostream>
using namespace std;
int main(){
    int age = 18;
    cout<<age<<" "<<sizeof(age)<<endl;
    char grade = 'A';
    cout<<grade <<" "<<sizeof(grade)<<"\n";
    float PI = 3.14f;
    cout<<PI<<" "<<sizeof(PI)<<'\n';

    char _grade = 'A';
    int value = _grade;
    cout<< value <<endl;


    double price = 100.99;
    int newPrice = (int)price;
    cout<<newPrice<<endl;


    int yourAge;
    cout<<"Enter the age: ";
    cin>>yourAge;

    cout<<"your age is: "<<yourAge <<"\n";

    return 0;
}