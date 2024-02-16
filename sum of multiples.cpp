//sum of multiples that lie b/w 1 to n and are divisible by 3,5 and 7
#include<iostream>
using namespace std;

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 || i%5==0 || i%7==0)
            {
                sum=sum+i;
            }
        }
        return sum;
    }
};

int main()
{
	int n;
	cout<<"Enter a number: ";
    cin>>n;
	Solution s;
	int result = s.sumOfMultiples(n);
	cout<<result;
	return 0;
}