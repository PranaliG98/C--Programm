#include <iostream>
using namespace std;
int main(){
    float basic_salary;
  float  pallowance;
float pdeduction ;
    float net_salary;

    /*net_salary = basic_salary *pallowance-basic_salary *pdeduction*/
    cout<<"basic_salary";
    cin>>basic_salary;
    cout<<"pallowance";
    cin>>pallowance;
    cout<<"pdeduction";
    cin>>pdeduction;

   net_salary = basic_salary +basic_salary*pallowance/100-basic_salary * pdeduction/100;
  cout<<net_salary;

}