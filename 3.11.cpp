#include <iostream>
#include<string>
using namespace std;
class MotorVehicle
{
    private:
        string motor_vehicle,FuelType,color;
        int yearOfManuFacture,engineCapacity;

    public:
        MotorVehicle(string m,string f,string c){
            motor_vehicle=m;
            FuelType=f;
            color=c;
            }
        
        void getpart(){
            cout<<"Motor Vehicle:"<<motor_vehicle<<"\n"<<"Fuel Type:"<<FuelType<<"\n"<<"Color:"<<color<<"\n"<<"Engine Capacity:"<<"1.5"<<"\n""Year of Manufacture:"<<"2018"<<"\n";
            }
        void setpart(string a){
            motor_vehicle=a;
            }
        void cardetail(){
            getpart();
        }
};
    
int main()
{
    MotorVehicle a("TOYOTA","High Obtained","White");
    a.displaycardetail();
    a.getpart();
    return 0;
}
