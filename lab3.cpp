#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
		int cowNums=0;
		int weight=0;
		vector<int> cows;

		ifstream inFile("file.in", ios::in);
		if(!inFile)
			{
				cerr<<"Failed Opening!!! D:"<<endl;
				exit(1);
			}

		inFile>>cowNums;

		for(int i=0;i<cowNums;i++)
		{
			inFile>>weight;
			cows.push_back(weight);
		}

		sort(cows.begin(),cows.end());

		weight=0;
		for(int i=cowNums-1;i>cowNums-6;i--)
		{
			weight=weight+cows[i];
		}

		cout<<weight<<endl;

}