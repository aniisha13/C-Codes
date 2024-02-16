/*no. of steps required to make a number zero
1.if number is even then reduce it by dividing by 2
2.if number is odd then reduce it be decreasing by 1*/

#include<iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num>0)
        {
            if(num%2==0)
            {
                num=num/2;
                count++;
            }
            else
            {
                num=num-1;
                count++;
            }
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
	int result = s.numberOfSteps(n);
	cout<<"no. of iteration: "<<result;
	return 0;
}