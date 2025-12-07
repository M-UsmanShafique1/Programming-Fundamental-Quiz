/* Write a program for a mobile networkprovider that
calculates a customer's monthly data bill.
Read the data limit in GB, the actual data used in
GB for each of N days, and sum the total usage.
If total usage is within the limit, charge a base fee of 600. 
If usage exceeds the limit, charge 60 per extra GB.
*/


#include <iostream>
using namespace std;
int main()
{
    float dataLimit, dataUsage, daily, total, extraData;
    int days;
    cout<<"Enter data limit in Gb =";
    cin>>dataLimit;

    cout<<"Enter number of days =";
    cin>>days;
    
    dataUsage=0;
    for(int i=1;i<=days;i++){
        cout<<"Enter data used on day "<<i<<"in gb =";
        cin>>daily;
        dataUsage+=daily;
    }
    if(dataUsage<=dataLimit) {
        total=600;
        cout<<"Total Bill is ="<<total<<endl;
    }   
    else{
        extraData= dataUsage - dataLimit;
        total=600 +extraData*60;
        cout<<"Total Bill is ="<<total<<endl;
    }
    cout<<"Total Data use ="<<dataUsage;
    return 0;
}