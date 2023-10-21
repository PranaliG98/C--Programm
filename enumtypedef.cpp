#include <iostream>
using namespace std;
typedef int marks;
int main(){
    enum day {mon=1,tue,wed,thu,fri=16,sat,sun};
    day d;
    d=tue;
    marks m1,m2;
    m1=50;
    m2= 60;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    cout<<m1;
    cout<<m2;
}