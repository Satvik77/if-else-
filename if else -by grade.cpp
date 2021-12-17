#include "exercise.h"

string check(int marks) {
	int marks=0;
	cout<<"ENTER YOUR MARKS;";
	cin>>marks;
	if(marks>=0 && marks<60)
	{
	    cout<<"C"<<endl;
	}
	else if(marks>=60 and marks<80){
	    cout<<"B"<<endl;
	}
	else if(marks>=80 and marks<=100)
	{
	    cout<<"A"<<endl;
	}
	else{
	    cout<<"inavalid input"<<endl;
	}
}