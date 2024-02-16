//Given an integer number n, return the difference between the product of its digits and the sum of its digits.

#include<iostream>
using namespace std;

class Solution {
public:
int sum=0;
int product=1;
    int subtractProductAndSum(int n) {
        while(n>0)
        {
            int a=n%10; //gives remainder of n i.e the last digit , 234%10=4
            sum=sum+a;  //add the digits
            product=product*a; //multiply the digits
            n=n/10;  //gives the integer value only 234/10=23
        }
        return product-sum;
    }
};

int main()
{
	int n;
	cout<<"Enter a number: ";
    cin>>n;
	Solution s;
	int result = s.subtractProductAndSum(n);
	cout<<result;
	return 0;
}