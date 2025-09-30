#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
#define wtf ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	wtf
	ll num,place,score,counter=0;
	vector <ll> s;
	cin >> num >> place;
	for(ll i=0;i<num;i++)
	{
			cin >> score;
			s.push_back(score);
	}
	if(s[place-1]>0)
	{
		for(ll i=place;i<num;i++)
		{
			if(s[i]>=s[place-1])
			{
				counter+=1;
			}
		}
		cout << (place+counter);
	}
	else
	{
		cout << 0;
	}
}

int main()
{
	solve();
}
