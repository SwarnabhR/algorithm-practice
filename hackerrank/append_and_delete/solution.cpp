#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string appendAndDelete(string s, string t, int k) {
    int common = 0;
    int minLen = min(s.size(), t.size());
    while (common < minLen && s[common] == t[common]) {
        common++;
    }

    int ops = (s.size() - common) + (t.size() - common);

    if (k >= ops && (k - ops) % 2 == 0) {
        return "Yes";
    }
    if (k >= (int)(s.size() + t.size())) {
        return "Yes";
    }
    return "No";
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
