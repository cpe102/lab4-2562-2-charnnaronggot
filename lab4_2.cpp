#include<iostream>
#include<cmath>

using namespace std;


double FindDistance (double u , double a , double t ) 
{
  double s ;
  s = u * t + 0.5 * a * pow(t,2);
 
}

int main(){
  double s = FindDistance(0 , 0.5 , 1 ) ;
  cout << s ;
  return 0 ;
}
