/*
Replace pi (recursive)

Given a string, compute recursively a new string where all appearances of "pi" have been replaced
by "3.14".

Constraints :
	1 <= |S| <= 50
	where |S| represents the length of string S.

Sample Input 1 :
	xpix
Sample Output :
	x3.14x

Sample Input 2 :
	pipi
Sample Output :
	3.143.14

Sample Input 3 :
	pip
Sample Output :
	3.14p

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int length(char input[])
{
	int len = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		len++;
	}
	return len;
}

void replacePi(char input[], int start)
{
	//base case
	if (input[start] == '\0' || input[start + 1] == '\0')
	{
		return;
	}
	replacePi(input, start + 1);
	if (input[start] == 'p' && input[start + 1] == 'i')
	{
		int len = length(input);
		input[len + 2] = '\0';
		for (int i = len - 1; i >= start + 2; i--)
		{
			input[i + 2] = input[i];
		}

		input[start] = '3';
		input[start + 1] = '.';
		input[start + 2] = '1';
		input[start + 3] = '4';
	}
}

void replacePi(char input[])
{
	replacePi(input, 0);
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

	char input[10000];
	cin.getline(input, 10000);
	replacePi(input);
	cout << input << endl;

}