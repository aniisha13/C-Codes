#include<iostream>
using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int c=0;
            for(int i=1;i<=min(a,b);i++)
            {
                if(a%i==0 && b%i==0)
                {
                    c++;
                }
            }
        return c;
    }
};

int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
    cin>>a>>b;
	Solution s;
	int result = s.commonFactors(a,b);
	cout<<"Common Factors: "<<result;
	return 0;
}