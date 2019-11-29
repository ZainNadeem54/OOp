#include <iostream>
#include <string>
using namespace std;
class Date
{
	public:
	int day,month,year;
	Date(int d, int m, int y)
	{
		day =d;
		year =y;
		if(m>12 && m<1)
		{
			month=1;
		}
		else
		{
			month =m;
		}
	}
	int getday()
	{
		return day;
	}
	int getmonth()
	{
		return month;
	}
	int getyear()
	{
		return year;
	}
	void displaydate()
	{
		int day =getday();
		int month = getmonth();
		int year= getyear();
		cout<<"Date "<<day<<"\\"<<month<<"\\"<<year<<"\n";
	}
	void setday(int a)
	{
		day =a;
	}
	void setmonth(int a)
	{
		month = a;
	}
	void setyear(int a)
	{
		year= a;
	}
};
int main()
{
	Date d(11,26,2019) ;
	d.displaydate();
	d.setday(15);
	d.setmonth(12);
	d.displaydate();
	return 0;	
}
