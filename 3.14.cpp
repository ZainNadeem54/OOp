#include <iostream>
#include <string>

using namespace std;
class list{
	
  unsigned int account_number;
  
    string FN,LN;
    
    double balance;
public:
	
    list(int a,string f,string l,double b ){
    	
        
        account_number=a;
        
        FN=f;
        
        LN=l;
        balance=b;
    }
    void getpart()
		{
			
			
        	cout<<"Account Number:"<<account_number<<"\nFirst Name:"<<FN<<"\nLast Name:"<<LN<<"\nBalance:"<<balance<<"\n";
        }
    	void setpart(int a)
		{
        	account_number=a;
        }
};
int main()
{
    list liist(001,"Muhammad","Usama",700000);
    
    liist.getpart();
    
    
    
    
    
    
    
    
    return 0;
}
