/*You are given an integer n, the number of teams in a tournament that has strange rules:

If the current number of teams is even, each team gets paired with another team. 
A total of n / 2 matches are played, and n / 2 teams advance to the next round.
If the current number of teams is odd, one team randomly advances in the tournament, 
and the rest gets paired. A total of (n - 1) / 2 matches are played, and (n - 1) / 2 + 1 teams advance to the next round.
Return the number of matches played in the tournament until a winner is decided.*/

#include<iostream>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        int matches=0;
        //if teams = 1 then no matches will be played 
        if(n==1|| n==0){
            return 0;
        }
        //if there are only 2 teams then only 1 match will be played
        if(n==2){
            return 1;
        }
        while (n > 1) {
            if (n % 2 == 0) {
                matches=n/2;
                sum=sum+matches;
                n=n/2;
            }
            else
            {
                matches=(n-1)/2;
                sum=sum + matches;
                n=((n-1)/2) +1;
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
	int result = s.numberOfMatches(n);
	cout<<result;
	return 0;
}