#include <iostream>
#include <fstream>
using namespace std;
#include "LOL.h"

void LOL::fn1(int N1, int N2) {
    int N = N2 - N1 + 1;
    nn = new int[N2 - N1 + 1];
    for (int i = 0, k = N1; i < N, k <= N2; i++, k++) {
        nn[i] = 0;
        for (int j = 0; j <= k; j++) {
            nn[i] += j;
        }
    }
}

void LOL::fn2(float a, float b, float x0, float dx, int m) {
    mm = new float[m];
    for (float x = x0, i = 0; x < x0 + dx * m, i < m; x += dx, i++) {
        mm[(int)i] = a * x + b;
    }
}

void LOL::fileopen(int N1, int N2, float a, float b, float x0, float dx, int m, string ss) {
    ofstream xx(ss, ios::binary | ios::out);
    xx.write((char*)&N1, 4);
    xx.write((char*)&N2, 4);
    xx.write((char*)&a, 4);
    xx.write((char*)&b, 4);
    xx.write((char*)&x0, 4);
    xx.write((char*)&dx, 4);
    xx.write((char*)&m, 4);
    xx.write((char*)nn, 4 * (N2 - N1 + 1));
    xx.write((char*)mm, 4 * m);
    xx.close();
}