/*You are given positive integers n and m.
Define two integers, num1 and num2, as follows:

num1: The sum of all integers in the range [1, n] that are not divisible by m.
num2: The sum of all integers in the range [1, n] that are divisible by m.
Return the integer num1 - num2*/

#include<iostream>
using namespace std;

/*Solution: two for loops, one to calculate the sum of non divisible values and one to calculate sum of divisible values
then store the values of both sum in num1 and num2 and return the difference*/
class Solution {
public:
int num1=0;
int num2=0;
    int differenceOfSums(int n, int m) {
        for(int i=1;i<=n;i++)
        {
            if(i%m!=0)
            {
                num1=num1+i;
            }
	    else
	    {
                num2=num2+i;
            }
	}
        return (num1-num2);
    }
};

int main()
{
	int n,m;
	int num1,num2;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter m: ";
	cin>>m;
	Solution s;
	int result=s.differenceOfSums(n,m);
	cout<<result;
	return 0;
}
