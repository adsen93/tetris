#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Array2D {
public:
	vector<int> v;
	int nc;
	Array2D(int NR, int NC) : v(NR*NC), nc(NC) {}
	int* operator[](int r) { return &v[r*nc]; }
};
