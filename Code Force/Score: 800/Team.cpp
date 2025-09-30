#include <iostream>
using namespace std;

typedef long long ll;
#define wtf ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	ll test,known,sum,counter=0;
	cin >> test;
	while(test--)
	{
		sum=0;
		for(ll i=0;i<3;i++)
		{
			cin >> known;
			sum+=known;
		}
		if(sum>=2)
		{
			counter+=1;
		}
	}
	cout << counter;
}

int main()
{
	solve();
}

/*
One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems 
during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. 
Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems 
for which they will write a solution.

Example:
Input:
3
1 1 0
1 1 1
1 0 0

Output:
2

Note
In the first sample Petya and Vasya are sure that they know how to solve the first problem and all three of them know how to solve the second problem. That means that 
they will write solutions for these problems. Only Petya is sure about the solution for the third problem, but that isn't enough, so the friends won't take it.
*/
