
#ifdef LOCAL
    #define debug_echo(expr) cout << expr;
#else
    #define debug_echo(expr)
#endif

#define rep(i, n) for (int i = 0; i < n; i++)

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

template<class T>
ostream& operator <<(ostream& out, const vector<T>& v) {
    out << "[";
    bool isfirst = false;
    for (const T& e : v) {
        out << (isfirst ? ", " : "") << e;
        isfirst = true;
    }
    out << "]";
    return out;
}
template<class T>
ostream& operator <<(ostream& out, const set<T>& s) {
    out << "{";
    bool isfirst = false;
    for (const T& e : s) {
        out << (isfirst ? ", " : "") << e;
        isfirst = true;
    }
    out << "}";
    return out;
}
template<class A, class B>
ostream& operator <<(ostream& out, const pair<A, B>& p) {
    out << "(" << p.first << ", " << p.second << ")";
    return out;
}
template<class K, class V>
ostream& operator <<(ostream& out, const map<K, V>& s) {
    out << "{";
    bool isfirst = false;
    for (const auto& e : s) {
        out << (isfirst ? ", " : "") << e;
        isfirst = true;
    }
    out << "}";
    return out;
}

//
// Implementation
//

int main() {
}
