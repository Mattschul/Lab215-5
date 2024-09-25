// Lab215-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//CGT 215-5, practice with vectors and string, Matt Schuler Fall 2024

#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
	vector<int> intVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
	cout << "Please enter a sentence: ";
	string text;
	getline(cin, text);
	for (int idx = 0; idx < text.length(); idx++) 
	{
		char c = text[idx];
		if ((c >= 65) && (c <= 90))
		{
			cout << char(intVector[c - 65]);
		}
		else if ((c >= 97) && (c <= 122))
		{
			int upperCaseLetter = (c - 32);
			char upperCaseCode = char(intVector[upperCaseLetter - 65]);
			//ensure upperCaseCode type remains as char
			upperCaseCode += 32;
			cout << upperCaseCode;
		}
		else
		{
			cout << char(c);
		}

	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
