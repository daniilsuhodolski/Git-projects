#include <iostream>
using namespace std;
int main() {
    int N=10;
    int a[10]={4,5,0,2,6,1,7,9,0,1};
    bool p=true;
    for (int j=0; j<10-2; j++) {
        if(A[j] > A[j + 1]) {
            int buf = a [j];
            a[j] = a[j + 1];
            a[j + 1] = buf;
            p=false;
        }
    }
    N = N - 1;