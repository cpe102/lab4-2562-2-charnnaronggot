#include <iostream>
#include <cmath>
using namespace std ;
 
    double e = 2.71828 ;
    int x ;
    double y ; 

double FindY ( int x ){
     y = 3*pow(x,3) + 2*e + pow(2,2*x+1) + sqrt((pow(x,2))+1) ;
     return y ;
}

int main (){
    cout << "Enter x : " ; 
    cin >> x ; 
    double y = FindY(x) ;
    cout << "result y = " << y ; 
    
    return 0 ;
}
