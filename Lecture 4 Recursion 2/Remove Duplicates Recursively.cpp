/*
Remove Duplicates Recursively

Given a string S, remove consecutive duplicates from it recursively.

Input Format :
	String S
Output Format :
	Output string

Constraints :
	1 <= |S| <= 10^3
	where |S| represents the length of string

Sample Input 1 :
	aabccba
Sample Output 1 :
	abcba

Sample Input 2 :
	xxxyyyzwwzzz
Sample Output 2 :
	xyzwz

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

void removeConsecutiveDuplicates(char *input)
{

	// base case
	if (*input == '\0')
	{
		return;
	}

	//nth step  and hypothesis
	if (*input == *(input + 1))
	{
		int i;
		for (i = 1; input[i] != '\0'; i++)
		{
			input[i - 1] = input[i];
		}

		input[i - 1] = input[i];
		removeConsecutiveDuplicates(input);
	}
	else
	{
		removeConsecutiveDuplicates(input + 1);
	}

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

	char s[100000];
	cin >> s;
	removeConsecutiveDuplicates(s);
	cout << s << endl;

}