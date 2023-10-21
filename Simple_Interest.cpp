/* Write an Expression for calculating Simple Interest
parameters are
P -- principle amount
T -- time
R -- rate of interest
just write the formula for simple interest at line
SI=*/
#include <iostream>
#include <math.h>
using namespace std ;
int main(){  
    int r,p,t;
    float si;
    cout<<"Enter p , t ,r";
    cin>>r>>p>>t;
    si=(r*p*t)/100;
    cout<<"Simple Interest "<<si;
    
    return 0;
}
