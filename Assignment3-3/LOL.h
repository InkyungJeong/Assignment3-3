#pragma once
class LOL {
public:
	//constructor
	LOL() {};

	LOL(int N1, int N2, float a, float b, float x0, float dx, int m, string ss) {
		fn1(N1, N2);
		fn2(a, b, x0, dx, m);
		fileopen(N1, N2, a, b, x0, dx, m, ss);
	}

	//member data
	int* nn;
	float* mm;

	//member function
	void fn1(int, int);
	void fn2(float, float, float, float, int);
	void fileopen(int, int, float, float, float, float, int, string);
};

