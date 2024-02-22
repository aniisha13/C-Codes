//to convert binary to decimal
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a binary number: ";
    cin>>n; //n=10
int sum=0;
int power=1;
while(n>0)
{
    int a=n%10; //a=10%10=0
    sum=sum+(a*power); //sum=0+(0*1)
    power=power*2; //power = 1*2=2
    n=n/10; //n=1
    //repeat
}
cout<<"The decimal number: "<<sum;
    return 0;
}