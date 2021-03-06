// Cavity Map solution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<string> grid(n);
	for (int grid_i = 0; grid_i < n; grid_i++) {
		cin >> grid[grid_i];
	}
	int x[] = { -1,0,1,0 }, y[] = { 0,1,0, -1 };
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			if (grid[i][j] > grid[i + x[0]][j + y[0]] &&
				grid[i][j] > grid[i + x[1]][j + y[1]] &&
				grid[i][j] > grid[i + x[2]][j + y[2]] &&
				grid[i][j] > grid[i + x[3]][j + y[3]])
					grid[i][j] = 'X';
		}
	}
	for (int grid_i = 0; grid_i < n; grid_i++) {
		cout << grid[grid_i] << endl;
	}
    return 0;
}

