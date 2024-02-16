#include<iostream>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n%2==0) ? n : n*2;
    }
};

int main()
{
	int n;
	cout<<"Enter a number: ";
    cin>>n;
	Solution s;
	int result = s.smallestEvenMultiple(n);
	cout<<result;
	return 0;
}