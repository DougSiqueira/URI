#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

int n;
int tam;
cin >> n;

getchar();
string v;

while (n--){


getline(cin,v);
tam = v.length();

for(int i=0; i<tam ; i++){
        if(v[i]>='a'&& v[i] <= 'z' || v[i]>='A' && v[i]<='Z'){
            v[i]=v[i]+3;
        }
}
char aux;
for(int i=0; i<tam/2 ; i++){
    aux = v[i];
    v[i]=v[tam-1-i];
    v[tam-1-i] = aux;
}
for(int i=tam/2; i<tam ; i++){
        v[i]=v[i]-1;
}

cout << v<<endl;
}
return 0;
}
