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

void merge(int input1[], int size1, int input2[], int size2, int output[])
{
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2)
	{
		if (input1[i] < input2[j])
		{
			output[k] = input1[i];
			k++;
			i++;
		}
		else
		{
			output[k] = input2[j];
			j++;
			k++;
		}
	}
	while (i < size1)
	{
		output[k] = input1[i];
		k++;
		i++;
	}
	while (j < size2)
	{
		output[k] = input2[j];
		j++;
		k++;
	}
}
void mergeSort(int input[], int size)
{
	if (size <= 1)
	{
		return;
	}
	int mid = size / 2;
	int part1[500], part2[500];
	int size1 = mid, size2 = size - mid;
	for (int i = 0; i < mid; i++)
	{
		part1[i] = input[i];
	}
	int k = 0;
	for (int i = mid; i < size; i++)
	{
		part2[k] = input[i];
		k++;
	}
	mergeSort(part1, size1);
	mergeSort(part2, size2);
	merge(part1, size1, part2, size2, input);
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

	int length;
	cin >> length;
	int* input = new int[length];

	for (int i = 0; i < length; i++)
	{
		cin >> input[i];
	}

	mergeSort(input, length);

	for (int i = 0; i < length; i++)
	{
		cout << input[i] << " ";
	}

}