#include<iostream>
#include<string>
using namespace std;

class invoice
{  
	public:
	    string part,dp;
	    
	    int qty,price;
	    
	    double VAT,Dis;   
	    
	public:
	    invoice(string P1,string D,int Q,int P,double v1,double d1)
		{
	        part=P1;
	        dp=D;
	        qty=Q;
	        price=P;
	        VAT=v1;
	        Dis=d1;
	        
	        cout<<"|Part no|\t"<<"|Parts Description|\t"<<"|Quantity of item|\t"<<"|Price|\t"<<"|VAT|\t"<<"|Discount|\t"<<endl;
	    }
	    
		public:
	    void getparts ()
	    {
	    	
	        cout<<"\t"<<part<< "\t\t\t" <<dp<< "\t\t\t" <<qty<<"\t\t\t"<<price<<"\t\t"<<VAT<<"\t\t"<<Dis<<"\t"<<endl<<endl;
	    }
	    
		void setpart(string x)
	    
		{
	        
	         part = x;
		}
	};

int main()
{
  
    invoice a("Mobile","Iphone",3,60000,0.2,5);
    
    a.getparts();
    
    
    
    
    
    
    
    
    return 0;
}
