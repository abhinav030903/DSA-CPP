#include <bits/stdc++.h>
using namespace std;

void pattern1(int N) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < N-i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    pattern6(N);
    return 0;
}
