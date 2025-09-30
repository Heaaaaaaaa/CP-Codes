#include <iostream>
using namespace std;

typedef long long ll;
#define wtf ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	wtf
	ll test;
	cin >> test;
	string s1[test];
	for(ll i=0;i<test;i++)
	{
		string s,temp,a,b;
		cin >> s;
		if(s.size()>=10)
		{
			a=s[0];
			b=s[s.size()-1];
			temp=a+to_string(s.size()-2)+b;
			s1[i]=temp;
		}
		else
		{
			s1[i]=s;
		}
	}
	for(auto i:s1)
	{
		cout << i << endl;
	}
}

int main()
{
	solve();
}

/*
Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and 
the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words 
that are not too long should not undergo any changes.

Example:
Input:
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output:
word
l10n
i18n
p43s

*/
