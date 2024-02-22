//to convert decimal to binary
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n; //n=5
int sum=0;
int power=1;
while(n>0)
{
    int a=n%2; //5%2==1
    sum=sum+(a*power); //sum=0+(1*1)=1
    power=power*10; //power=10
    n=n/2; //n=2
    //repeat
}
cout<<"The binary number: "<<sum;
    return 0;
}