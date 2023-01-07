#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int line = 1;
    vector<int> ans;
    while (getline(cin, str)) {
        auto pos = str.find("int");
        if (pos != string::npos) {
            ans.push_back(line);
            break;
        }
        line++;
    }
    getline(cin, str);
    auto pos = str.find("int");
    if (pos != string::npos) {
        ans.push_back(line);
    }
    if (ans.size()) {
        cout << "YES\n";
        for (int i = 0; i < (int) ans.size(); i++) {
            cout << ans[i] << " \n"[i == (int) ans.size() - 1];
        }
    } else {
        cout << "NO\n";
    }
    return 0;
}
