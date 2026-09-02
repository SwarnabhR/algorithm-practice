#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 * The function returns nothing - print the three ratios with cout,
 * each on its own line, with 6 digits after the decimal point.
 */

void plusMinus(vector<int> arr) {
    int count = arr.size();
    double i = 0, j = 0, k = 0;
    for (int a = 0; a < count; a++) {
        if (arr[a] > 0) {
            i++;
        } else if (arr[a] < 0) {
            j++;
        } else {
            k++;
        }
    }
    cout << fixed << setprecision(6);
    cout << i / count << "\n" << j / count << "\n" << k / count << "\n";
}

int main() {
    // The test runner reads the program's output from OUTPUT_PATH, so point
    // cout at that file. This keeps plusMinus itself identical to the version
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

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

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

vector<string> split(const string& str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
