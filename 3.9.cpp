#include<iostream>
using namespace std;
class Account
{  
private:
    int x,y,z;
public:   
    void Input_Amount()
     
	{
    	cout<<"Enter the deposite amount:";
    	
    	cin>>x;
    }
    void Output_Amount()
    
	{
    	cout<<"Enter the withdraw account:";
    	
        cin>>y;
    }
   void condition()
   
   {
    if(y>x)
     {
        cout<<"====>Error<===="<<"\n \n";
        
        cout<<"Withdraw amount exceeded: "<<"\n";
        
        cout<<"You enter the correct amount."<<"\n";
        
        cout<<"Your remaining amount is: "<<x<<"\n"<<"\n"<<"\n";
    }
    else
        z=x-y;
        
        cout<<"\n Your remaining amount is "<<z<<endl<<endl;
        
        cout<<" Thanks for using  Bank "<<endl<<endl;
        
        }
};
int main()
{
    cout<<"Welcome to the Bank"<<"\n"<<"\n";
    
    Account acc;
    acc.Input_Amount();
    
    acc.Output_Amount();
    
    acc.condition();
    
    return 0;
}
