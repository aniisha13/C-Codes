/*Reversing an integer means to reverse all its digits.

For example, reversing 2021 gives 1202. Reversing 12300 gives 321 as the leading zeros are not retained.
Given an integer num, reverse num to get reversed1, then reverse reversed1 to get reversed2. 
Return true if reversed2 equals num. Otherwise return false*/

#include<iostream>
using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reversed1=0; //stores the number after one reversing
        int n=num; //stores the actual number
        while(num>0)
        {
            int a=num%10;
            reversed1=(reversed1*10)+a;
            num=num/10;
        }
        int reversed2=0; //stores the number after double reversing
        while(reversed1>0)
        {
            int b=reversed1%10;
            reversed2=(reversed2*10)+b;
            reversed1=reversed1/10;
        }
        if(n==reversed2){
        return true;
        }
        return false;
    }
};

int main()
{
	int num;
	cout<<"Enter a number: ";
    cin>>num;
	Solution s;
	int result = s.isSameAfterReversals(num);
	cout<<result;
	return 0;
}