#include<bits/stdc++>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

    int t = abs(x);
    int r = 0;

    while(t>0)
    {
        int a = t%10;
        r = r*10 + a;
        t = t/10;
    }

    if(x<0)
        r = r*(-1);

    if(r == x)
        return true;
    else
        return false;

    }
};

int stringToInteger(string input) {
    return stoi(input);
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);

        bool ret = Solution().isPalindrome(x);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}
