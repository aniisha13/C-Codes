/*An integer x is called achievable if it can become equal to num 
after applying the following operation no more than t times:
Increase or decrease x by 1, and simultaneously increase or decrease num by 1*/

#include<iostream>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
    	cout<<"Enter a number: ";
    	cin>>num;
    	cout<<"Enter no of iteration: ";
    	cin>>t;
        
        /*solution: assume the num on the right line and some x is far on the right line so to 
        make them equal we have to increase the num t times and decrease the x t times*/
         cout<<"Maximum achievable number: "<<num+(2*t);
    }
};

int main()
{
	int num,t;
	Solution s;
	s.theMaximumAchievableX(num,t);
	return 0;
}