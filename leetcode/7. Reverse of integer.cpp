#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long reverse(long long x) {

        long long r = 0;
        long long t = abs(x);

        while(t >0)
        {
            int a = t%10;
            r = r*10 + (a);

            t = t/10;
        }

        if(r > INT_MAX || r< INT_MIN)
            return 0;

        if(x <0)
            return -1*r;
        else
            return r;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);

        int ret = Solution().reverse(x);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}
