/*Write an Expression for calculating Volume of a Cylinder
parameters
radius -- radius of Cylinder
height -- height of Cylinder
take pi=3.14
write expression at line
volume=
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float r,h,vol;
    
    cout<<"Enter radius & height of cylinder";
    cin>>r>>h;
    vol = 3.14*r*r*h;
    cout<<"Volume of cylinder";
    cout<<vol;
    return 0;
}
