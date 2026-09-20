#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'squares' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER b
 */

int squares(int a, int b) {
    long long lo = sqrtl(a);
    while (lo * lo < a) lo++;
    while (lo > 0 && (lo - 1) * (lo - 1) >= a) lo--;
    long long hi = sqrtl(b);
    while (hi * hi > b) hi--;
    while ((hi + 1) * (hi + 1) <= b) hi++;
    return hi - lo + 1;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int a;
        int b;
        cin >> a >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = squares(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
