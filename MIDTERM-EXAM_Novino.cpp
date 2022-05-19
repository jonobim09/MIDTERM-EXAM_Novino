//Programmed by: Jolly Novino
//Date Accomplished: May 19, 2022
#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    const float costPerkWh = 11.55;
    const float month = 30.42;
    const int day =24; //24hours per day
    const float year = 12;
    char ans = 'y';
    string appliance = " ";
    int app = 0;
    float powCons = 0; //power consumption in watts
    float hrs = 0; //hours appliance is used
    float E = 0; //kWh/day
    float costPH = 0; //cost per Hour
    float costPD = 0; //per day
    float costPM = 0; //per month
    float costPY = 0; //per year
    float totalPM =0; //total per month
    
    //header
    cout << "=====================================================" << endl;    
    cout << "          BILL AND CONSUMPTION CALCULATOR" << endl;
    cout << "=====================================================" << endl;
    
    //get input
    do
    {
        app++;
        
        cout << "Appliance Type: ";
        cin >> appliance;
        cout << "Power consumption of " << appliance << " in watts(W): ";
        cin >> powCons;
        cout << "Hours of used per day: ";
        cin >> hrs;
        
        E = (powCons * hrs)/1000;
        cout << "kWh Per Day: " << E <<endl;
        
        costPH = (E/hrs) * costPerkWh;
        cout << "Cost Per Hour: " <<costPH <<endl;
        
        costPD = costPH * hrs;
        cout << "Cost Per Day: " << costPD <<endl;
        
        costPM = costPD * month;
        cout << "Cost Per Month: " << costPM << endl;
        
        costPY = costPM * year;
        cout << setprecision(2) << fixed;
        cout << "Cost Per Year: " << costPY << endl;
        
        totalPM += costPM;
        cout << endl;
        cout << "Would you like to try  another? [Y/N]: ";
        cin >> ans;
        cout << endl;
        
    }
    while (ans == 'y' || ans == 'Y');
    
    //summary
    cout << "=====================================================" << endl;    
    cout << "                   SUMMARY" << endl;
    cout << "=====================================================" << endl;
    cout << "TOTAL APPLIANCE: " << app << endl;
    
    
    cout << "TOTAL COST PER MONTH: " << totalPM << endl;
    cout << "Thank you!" << endl;
    
    return 0;
}