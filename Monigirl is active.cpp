// This is my banking deposit app
//
//

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	//declare variable used in the program
	int checking;
	int savings;
	string username;
	string password;
	int getac;
	double dchecking;
	double dsavings;
	
	int r;
	int t;
	
	dchecking = r;
	dsavings = t;
	
	checking = 35;
	savings = 2500;
	
	// The math of the program top add to the balance and throw out incorrect input
	
	cout <<"registered Customer please enter your username and password " <<endl;
	cin >>username;
	   if (username=="rbrown")	{
	   	cout <<"good job"<<endl;
		   cout <<"Now, Can you please enter your password for me " << endl;
		   cin >>password;
	         if (password=="blue123")  {
	   	      cout <<"nice work" <<endl;
				 	cout <<"Now in order to make your deposit will you please press 1 for savings and 2 for checking "<<endl;
	                 cin >>getac;
	                   if (getac==1)  {
	   	                cout<<"How much cash would you like to deposit dear customer our machine accepts only solid dollar integers"<<endl;
		                cin >>dsavings;
		                // The next line throws out change
						if (dsavings !=t) {
		                	cout<<"Once again No pennies" <<endl;
						}
						else {
						
		                savings += dsavings;
			            cout<<"Your New balance is"<<endl; //display balance 
	   	                cout<<"Savings: " <<savings<<endl;
			            cout<<"Checking: " <<checking<<endl;    }}
	                   else if (getac==2) {
	   	                      cout<<"how much cash mr brown" <<endl;
	   	                      cin >>dchecking;
	   	                      if (dchecking !=r) {
	   	                      	//The next line throws out change
	   	                      	cout <<"no pennies sir" <<endl;
								 }
								else {
								 
	   	                        checking += dchecking;
	   	                      cout<<"Your New balance is"<<endl;  //display balance
	   	                      cout<<"Checking: " <<checking<<endl;
	   	                      cout<<"Savings: "<<savings<<endl;
	   }	 }
	   	     else {
	   	     cout<< "Incorrect password"<<endl;	
		   }
	         }
	    else  {
	    cout<< "wrong username buddy"<<endl;
		   }
	       
	

	   
	 
	
	
	
	
	
	
	
	
	

return 0;
}
}
