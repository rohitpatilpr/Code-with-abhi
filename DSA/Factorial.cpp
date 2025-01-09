// factorial Logic 1
#include <iostream>
using namespace std;

int factorial(int n){      
    if (n == 0)      
    return 1;      
    else      
    return(n * factorial(n-1));      
}

int main() {
     int n=5;
     int fact1=1;          
     fact1 = factorial(n); 
	 cout<<fact1;
}

// factorial Logic 2
#include <iostream>
using namespace std;

int main() {
     int n=5;
     int fact=1;          
     
     for(int i=n; i>0; i--)
     {
         fact= fact*i;
     }
         
	 cout<<fact;
}
