//output first n last occurence of a character in string
#include <iostream>
using namespace std;
void index(string s,char ch, int *first,int *last)
{
	//to know the first index
    for(int i=0;i<s.size();i++)
    {
        *first=i;
        if(s[i]==ch)
        break;
    }
    //to know the last index
    for(int i=s.size()-1;i>=0;i--)
    {
        *last=i;
        if(s[i]==ch)
        break;
    }
}
int main()
{
    string s="aabacdbaa";
    char ch='b';
    //initial
    int first=-1;
    int last=-1;
    //pointer to store address of first n last
    int *pf=&first;
    int *pl=&last;
    index(s,ch,pf,pl);
    //dereference operator
    cout<<*pf<<" "<<*pl;
}