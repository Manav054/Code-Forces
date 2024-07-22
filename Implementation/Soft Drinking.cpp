#include <bits/stdc++.h>
using namespace std;

int main() {
    int friends, bottles, ml, nlemons, slices, salt, nl, np;
    cin >> friends >> bottles >> ml >> nlemons >> slices >> salt >> nl >> np;

    cout << min(min((bottles * ml) / nl, nlemons * slices), salt/np)/friends << endl;

    return 0;
}