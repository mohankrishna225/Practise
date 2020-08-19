#include <iostream>
using namespace std;

int power(int a, int N) {
        if (N == 0) 
        {
            return 1;
        } 
        else 
        {
            int R = power(a, N / 2);
            if (N % 2 == 0) {
                return R * R;
            } else {
                return R * R * a;
            }
        }
    }