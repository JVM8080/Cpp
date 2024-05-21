#include <iostream>
#include <math.h>

using namespace std;

float mAsim=0, timeAsim=0;
float RPML, RPMR;
float difRPM;
float sum;
int cont=0;

int main(){
    cout<<"inserte el numero de RPM motor del izquierdo: ";
    cin>>RPML;
    RPML=abs(RPML);
    cout<<"inserte el numero de RPM motor del derecho: ";
    cin>>RPMR;
    RPMR=abs(RPMR);
    cont=cont+1;
    sum=RPML+RPMR;
    difRPM=abs(RPML-RPMR);
    if(difRPM>300){
    mAsim=difRPM;
    timeAsim=cont;
    }
    
    while(sum>0){
    cout<<"inserte el numero de RPM motor del izquierdo: ";
    cin>>RPML;
    RPML=abs(RPML);
    cout<<"inserte el numero de RPM motor del derecho: ";
    cin>>RPMR;
    RPMR=abs(RPMR);
    sum=RPML+RPMR;
    cont=cont+1;
    difRPM=abs(RPML-RPMR);
    if(difRPM>300){
        if(difRPM>mAsim){
            mAsim=difRPM;
            timeAsim=cont;
        }
    }
    }
    if(mAsim>300){
    cout<<"La mayor asimetria fue de ";
    cout<<mAsim;
    cout<<" RPM, a los ";
    cout<<timeAsim;
    cout<<" minutos."<<endl;
} else{
	cout<<"No hubo asimetria durante el vuelo."<<endl;
}
system("PAUSE");
return 0;
}