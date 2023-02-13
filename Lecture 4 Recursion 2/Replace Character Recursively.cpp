/*
Replace Character Recursively

Given an input string S and two characters c1 and c2, you need to replace every occurrence
of character c1 with character c2 in the given string.
Do this recursively.

Input Format :
	Line 1 : Input String S
	Line 2 : Character c1 and c2 (separated by space)
Output Format :
	Updated string

Constraints :
	1 <= Length of String S <= 10^6

Sample Input :
	abacd
	a x
Sample Output :
	xbxcd

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

void replaceCharacter(char input[], char ch1, char ch2)
{
	//base case
	if (input[0] == '\0')
	{
		return;
	}

	if (input[0] == ch1)
	{
		input[0] = ch2;
	}

	replaceCharacter(input + 1, ch1, ch2);
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	char input[1000000];
	char c1, c2;
	cin >> input;
	cin >> c1 >> c2;
	replaceCharacter(input, c1, c2);
	cout << input << endl;

}