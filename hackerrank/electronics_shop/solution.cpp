#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'getMoneySpent' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY keyboards
 *  2. INTEGER_ARRAY drives
 *  3. INTEGER b
 */

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max = b;
    int maxSum = -1;
    for (int i = 0; i < keyboards.size(); i++) {
        for (int j = 0; j < drives.size(); j++) {
            int sum = keyboards[i] + drives[j];
            if (sum > maxSum && sum <= max) {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input =
        split(rtrim(first_multiple_input_temp));

    int b = stoi(first_multiple_input[0]);

    int n = stoi(first_multiple_input[1]);

    int m = stoi(first_multiple_input[2]);

    string keyboards_temp_temp;
    getline(cin, keyboards_temp_temp);

    vector<string> keyboards_temp = split(rtrim(keyboards_temp_temp));

    vector<int> keyboards(n);

    for (int i = 0; i < n; i++) {
        int keyboards_item = stoi(keyboards_temp[i]);

        keyboards[i] = keyboards_item;
    }

    string drives_temp_temp;
    getline(cin, drives_temp_temp);

    vector<string> drives_temp = split(rtrim(drives_temp_temp));

    vector<int> drives(m);

    for (int i = 0; i < m; i++) {
        int drives_item = stoi(drives_temp[i]);

        drives[i] = drives_item;
    }

    int moneySpent = getMoneySpent(keyboards, drives, b);

    fout << moneySpent << "\n";

    fout.close();

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
