#include <iostream>
using namespace std;
class Thermostat
{
    private:
        double temperature=20.8;
    public:
        void setTempearture(double temp)
        {
            if(temp>15.0 && temp<30.0)
            {
                temperature=temp;
            }
            else
            {
                cout<<"Warning: Temperature out of safe bounds!\n";
            }
        }
        double getTemperature()
        {
            return temperature;
        }
};
int main()
{
    Thermostat t1;
    t1.setTempearture(12.0);
    cout<<"Current Temperature Level is "<<t1.getTemperature()<<" Celsius\n";
    Thermostat t2;
    t2.setTempearture(34.0);
    Thermostat t3;
    t3.setTempearture(17.9);
    cout<<"Current Temperature Level is "<<t3.getTemperature()<<" Celsius\n";
    return 0;
}