#include<iostream>

using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	if (age>0 && age==10)
	{
		cout<<"your age is "<<age <<" which less than 18. So we can't invite you.\nSorry!!!!!";
	}
	if (age<1)
	{
		cout<<"your age is "<<age <<" which is not Possible.\nSorry!!!!!\t Type Your age again";
	}
	
	else if (age==18)
	{
		cout<<"your age is 18. We invite you in our Patry.";
	}
	
	else if (age>18 && age<=50)
	{
		cout<<"your age is "<<age <<". We invite you in our Patry.\nWellcome to our Party";
	}
	
	else
	{
		cout<<"your age is "<<age <<" which greater than 50. So we can't invite you.\nSorry!!!!!";
	}
}
