#include <iostream>
using namespace std ;

int findDivisor(int x ){
    int i=2 ;
    while (i > 1)
    {
            if (x%i == 0 ){
            return i ;
            }
            else{
            i++ ;
            }
    }
}
int main (){
    cout << "Divisor = " << findDivisor(97) ;
    return 0 ;
}
        