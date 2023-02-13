/*
String to Integer

Write a recursive function to convert a given string into the number it represents.
That is input will be a numeric string that contains only numbers, you need to convert the string
into corresponding integer and return the answer.

Input format :
	Numeric string S (string, Eg. "1234")
Output format :
	Corresponding integer N (int, Eg. 1234)

Constraints :
	0 < |S| <= 9
	where |S| represents length of string S.

Sample Input 1 :
	00001231
Sample Output 1 :
	1231

Sample Input 2 :
	12567
Sample Output 2 :
	12567

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

int stringToNumber (char input[], int last)
{
	//base case
	if (last == 0)
	{
		return input[last] - '0';
	}

	int smallAns = stringToNumber(input, last - 1);
	int a = input[last] - '0';
	return smallAns * 10 + a;
}

int stringToNumber(char input[])
{
	int len = length(input);
	return stringToNumber(input, len - 1);
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
	cout << stringToNumber(input) << endl;

}