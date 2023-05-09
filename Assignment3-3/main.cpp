#include <iostream>
#include <fstream>
using namespace std;
#include "LOL.h"

int main() {
	// ¹æ¹ý 3

	// 1) akali
	int N1 = 5, N2 = 10;
	float a = 2, b = 3, x0 = -5, dx = 0.1;
	int m = 10;
	LOL* akali;
	akali = new LOL(N1, N2, a, b, x0, dx, m, "akali.dat");

	delete akali;

	// 2) amumu
	N1 = 7; N2 = 100;
	a = -3.5; b = 4; x0 = 100; dx = 10;
	m = 15;
	LOL* amumu;
	amumu = new LOL(N1, N2, a, b, x0, dx, m, "amumu.dat");

	delete amumu;

	// 3) annie
	N1 = 12; N2 = 17;
	a = 0.01; b = 0.2; x0 = 1.5; dx = 0.08;
	m = 20;
	LOL* annie;
	annie = new LOL(N1, N2, a, b, x0, dx, m, "annie.dat");

	delete annie;

	// 4) ashe
	N1 = 10; N2 = 20;
	a = 4.2; b = -5.3; x0 = 2.1; dx = 0.2;
	m = 5;
	LOL* ashe;
	ashe = new LOL(N1, N2, a, b, x0, dx, m, "ashe.dat");

	delete ashe;
}