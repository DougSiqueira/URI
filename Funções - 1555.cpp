#include <iostream>

using namespace std;

int rafael(int x, int y){
 return ((3*x)*(3*x)) +(y*y);
}

int beto(int x, int y){
 return (2*(x*x)) + ((5*y)*(5*y));
}
int carlos(int x, int y){
 return -100*x +(y*y*y);
}



int main()
{
    int x, y, n;


cin >> n;


for(int i=0; i<n ;i++){

cin >> x;
cin >> y;


    if (rafael (x, y) > beto (x,y) ){
    if (rafael (x, y) > carlos (x,y) ){
            cout << "Rafael ganhou"<<endl;
    }
    else {
        cout << "Carlos ganhou"<<endl;
    }
    }
    else{
        if (beto (x, y) > carlos (x,y) ){
             cout << "Beto ganhou"<<endl;
        }
        else {
            cout << "Carlos ganhou"<<endl;

        }

    }
}


    return 0;
}
