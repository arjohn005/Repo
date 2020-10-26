#include <iostream>
using namespace std;
	int main()
	
{

		
	float x;
	float y;
	float Addition,Subtraction,Multiplacation,Division;

	char select;
	

		
	
cout<<"Enter First Number:";
	 cin>>x;
	 
cout<<"Enter Second Number:";
	 cin>>y;
	 
	 	cout<<"\n";
	    cout<<"1.Addition\n";
		cout<<"2.Subtraction\n";
		cout<<"3.Multiplication\n";
		cout<<"4.Division\n";
		cout<<"5.Exit\n\n";
	 
	 cout<<"Select Procedure:";
	 cin>>select;
			 
		switch(select)
		{
				case '1':
				Addition=x+y;
				cout<<"Result = "<<Addition;
				break;
			
		}
	 	switch(select)
		{
				case '2':
				Subtraction=x-y;
				cout<<"Result = "<<Subtraction;
				break;
			
		}
		switch(select)
		{
				case '3':
				Multiplacation=x*y;
				cout<<"Result = "<<Multiplacation;
				break;
			
		}
	 switch(select)
		{
				case '4':
				Division=x/y;
				cout<<"Result = "<<Division;
				break;
			
		}
	 switch(select)
		{
			case '5':
				exit;
			
		}
	 
	 
	 
	 return 0;
	
	
	
}
