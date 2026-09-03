#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 * The function returns nothing - print the staircase with cout, one line per
 * step, each line right-aligned to a width of n characters.
 */

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main() {
    // The test runner reads the program's output from OUTPUT_PATH, so point
    // cout at that file. This keeps staircase itself identical to the version
    // submitted on HackerRank (where it just writes to cout).
    ofstream fout;
    streambuf* cout_buf = cout.rdbuf();
    const char* output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        fout.open(output_path);
        cout.rdbuf(fout.rdbuf());
    }

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    cout.rdbuf(cout_buf);

    if (fout.is_open()) {
        fout.close();
    }

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
