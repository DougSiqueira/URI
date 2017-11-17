#include <iostream>
#include <math.h>

using namespace std;


void guarda (double D, double VF, double VG){
    double h = 0, t1= 0, t2= 0;
    h = sqrt(pow(D,2)+ 144);
    t1 = 12/VF;
    t2 = h/VG;

    if(t1<t2){
        cout << "N"<<endl;
    }
    else{
        cout << "S"<<endl;
    }
}



int main(){
    double D, VF, VG;

    while(cin >> D >> VF >>VG){

        guarda(D, VF, VG);
    }
    return 0;
}
