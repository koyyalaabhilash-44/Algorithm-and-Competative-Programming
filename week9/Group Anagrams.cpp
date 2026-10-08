#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> group(vector<string> &words) {
    unordered_map<string, vector<string>> map;   
    for (string &word : words) {
        string key = word;
        sort(key.begin(), key.end());   
        map[key].push_back(word);
    }
    vector<vector<string>> result;
    for (auto &pair : map) {
        result.push_back(pair.second);
    }
    return result;
}
int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    vector<string> words(n);
    cout << "Enter " << n << " words: ";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    vector<vector<string>> groups = group(words);
    cout << "Anagram groups:\n";
    for (auto &group : groups) {
        cout << "[ ";
        for (string &w : group) cout << w << " ";
        cout << "]\n";
    }
    return 0;
}
/*Enter number of words: 6
Enter 6 words: eat
tea
tan
ate
nat
bat
Anagram groups:
[ bat ]
[ tan nat ]
[ eat tea ate ]*/
