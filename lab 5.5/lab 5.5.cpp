#include <iostream>
using namespace std;

int S(int n, int& depth, int& d, int& r) {
    depth++; //глибина рекурсії

    if (n == 0) {
        return 0;
    }

    d = n % 10;
    r = n / 10;

    int s = d + S(r, depth, d, r); //решта числа n та остання цифра числа n

    return s;
}

int main() {
    int n;
    cout << "n = ";
    if (cin >> n) {
        int depth = 0; 
        int d = 0, r = 0; 
        int sum = S(n, depth, d, r);
        cout << "sum = " << sum << endl;
        cout << "recursion depth = " << depth << endl;
    }
    else {
        cout << "incorrect entry!" << endl;
    }

    return 0;
}
