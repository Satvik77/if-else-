#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks>=60 and marks<=100){
        cout<<"you are pass!!"<<endl;
    }
    else if(marks >=0 && marks<60){
        cout<<"You are Failed!!"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}