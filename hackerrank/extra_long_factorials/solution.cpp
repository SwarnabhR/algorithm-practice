#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 * The function returns nothing - print the factorial of n with cout.
 */

void extraLongFactorials(int n) {
    // Store the factorial as digits in little-endian order (digits[0] is
    // the ones place) so it can grow arbitrarily large.
    vector<int> digits = {1};

    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int& digit : digits) {
            int product = digit * i + carry;
            digit = product % 10;
            carry = product / 10;
        }
        while (carry > 0) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }

    for (auto it = digits.rbegin(); it != digits.rend(); it++) {
        cout << *it;
    }
}

int main() {
    // The test runner reads the program's output from OUTPUT_PATH, so point
    // cout at that file. This keeps extraLongFactorials itself identical to
    // the version submitted on HackerRank (where it just writes to cout).
    ofstream fout;
    streambuf* cout_buf = cout.rdbuf();
    const char* output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        fout.open(output_path);
        cout.rdbuf(fout.rdbuf());
    }

    int n;
    cin >> n;

    extraLongFactorials(n);

    cout.rdbuf(cout_buf);

    if (fout.is_open()) {
        fout.close();
    }

    return 0;
}
