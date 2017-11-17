#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;


int main() {
    int c, n, m, tempo = 0;
    int v[10000];

    cin >> n >> m;

    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    priority_queue < pair < int, int > > fila;

    for(int i = 1; i<=n; i++){
        fila.push(make_pair(0, -i));
    }
    while(m--){
       cin >> c;
       int id = -fila.top().second;
       int l = -fila.top().first;
       fila.pop();
       fila.push(make_pair( -(l+v[id]*c), -id) );
       tempo = max(tempo, l+v[id]*c);
    }
    cout << tempo <<endl;

    return 0;
}

