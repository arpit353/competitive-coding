#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

    if(x<0|| (x!=0 &&x%10==0)) return false;

    int t = x;
    int r = 0;

    while(t>r)
    {
        int a = t%10;
        r = r*10 + a;
        t = t/10;
    }

    if(r == t || t==r/10)
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
