#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hour = s.substr(0, 2);
    string rest = s.substr(2, 6);
    string period = s.substr(8);
    int hourNum = stoi(hour);

    if (period == "AM" && hourNum == 12) {
        hourNum = 0;
    } else if (period == "PM" && hourNum != 12) {
        hourNum += 12;
    }
    string padded = (hourNum < 10 ? "0" : "") + to_string(hourNum);

    return padded + rest;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
