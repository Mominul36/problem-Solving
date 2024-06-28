#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'counterGame' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts LONG_INTEGER n as parameter.
 */
bool isEven(int n)
{
    return !(n & 1);
}
string fun(long n, string name)
{
    if (isEven(log2(n)))
    {
        if (name == "Louise")
            name = "Richard ";
        else
            name = "Louise";
    }
    return name;
}
string counterGame(long n)
{
    string name = "Louise";
    while (1)
    {
        if ((n & (n - 1)))
        {
            n = n - (1 << ((int)log2(n)));
        }
        else
        {
            return fun(n, name);
        }
        if (n == 1)
            return name;

        if (name == "Louise")
            name = "Richard ";
        else
            name = "Louise";
    }
    return name;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string n_temp;
        getline(cin, n_temp);

        long n = stol(ltrim(rtrim(n_temp)));

        string result = counterGame(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}