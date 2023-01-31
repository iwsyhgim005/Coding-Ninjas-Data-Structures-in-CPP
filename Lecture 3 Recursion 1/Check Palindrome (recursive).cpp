/*
Check Palindrome (recursive)

Check whether a given String S is a palindrome using recursion. Return true or false.

Input Format :
	String S
Output Format :
	'true' or 'false'

Constraints :
	0 <= |S| <= 1000
	where |S| represents length of string S.

Sample Input 1 :
	racecar
Sample Output 1:
	true

Sample Input 2 :
	ninja
Sample Output 2:
	false

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int length (char input[])
{
	int len = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		len++;
	}
	return len;
}

int checkPalindrome_helper(char input[], int start, int end)
{
	if (input[0] == '\0' || input[1] == '\0')
	{
		return 1;
	}

	if (start >= end)
	{
		return 1;
	}

	if (input[start] == input[end])
	{
		return checkPalindrome_helper(input, start + 1, end - 1);
	}
	else
	{
		return 0;
	}
}

int checkPalindrome(char input[])
{
	int len = length(input);
	return checkPalindrome_helper(input, 0, len - 1);

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

	char input[50];
	cin >> input;

	if (checkPalindrome(input))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

}