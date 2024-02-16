//count the number of digits that divides the original number
#include<iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) 
	{
		//num=121
        int count=0;
        int originalnum=num; //originalnum=121
        while(num>0)
        {
            int a=num%10; //a=121%10=1
            if(originalnum % a==0) //121%1==0
            {
                count++; //count=1
            }
            num=num/10; //num=121/10=12
        }
        return count;
    }
};

int main()
{
	int n;
	cout<<"Enter a number: ";
    cin>>n;
	Solution s;
	int result = s.countDigits(n);
	cout<<result;
	return 0;
}