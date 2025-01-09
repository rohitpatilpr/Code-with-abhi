#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout<<"Enter a no. to calculate sum between 1 to that number"<<endl;
    cin>>num;
    
    int sum=0;
    
    for(int i=1 ; i<=num; i++){
        sum=sum+i;
    }
    
    cout<<sum;

    return 0;
}
