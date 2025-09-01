#include <bits/stdc++.h>
using namespace std;

int main() {
    string text, pattern;
    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern to delete: ";
    getline(cin, pattern);

    size_t pos;
    while ((pos = text.find(pattern)) != string::npos) {
        text.erase(pos, pattern.size());
    }
    /// 

    cout << "After deletion: " << text << "\n";
    return 0;
}
