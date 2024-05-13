#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

class coordenada{
	public:
		double x;
		double y;
};

class camion{
	private:
		coordenada xy, axy;
		double distancia;
		double velocidad;
		
	public:
		camion(coordenada _xy){
			axy = _xy;
		}
		
		void set_coordenada(coordenada _xy){
			xy = _xy;
		}
		
		void set_reemplazo(){
			axy = xy;
		}
		
		double get_velocidad(double _tiempo){
			double _distancia = sqrt(pow((xy.x - axy.x),2) + pow((xy.y - axy.y),2));
			double _velocidad = (_distancia/_tiempo)*3.6;
			
			distancia += _distancia;
			velocidad = _velocidad;
			set_reemplazo();
			
			return _velocidad;
		}
		
		double get_distancia(){
			return distancia;
		}
		
		void get_alerta(){
			if(velocidad>80){
				cout<<"¡Alerta, exceso de velocidad!"<<endl;
			}
		}
};

int main(){
	camion *c1;
	coordenada xy_lectura;
	clock_t tiempo_1, tiempo_2;
	double tiempo;
	
	cout<<"Inserte coordenadas en metros:"<<endl<<endl;
	cout<<"Longitud: ";
	cin>>xy_lectura.x;
	cout<<"Latitud: ";
	cin>>xy_lectura.y;
	
	cout<<endl<<endl; //Espacio
	
	c1 = new camion(xy_lectura);
	tiempo_1 = clock();
	
	while(true){
		cout<<"Siguiente coordenada: "<<endl;
		cout<<"Longitud: ";
		cin>>xy_lectura.x;
		cout<<"Latitud: ";
		cin>>xy_lectura.y;
		c1->set_coordenada(xy_lectura);
		
		tiempo_2 = clock();
		tiempo = (double)(tiempo_2 - tiempo_1)/CLOCKS_PER_SEC;
		
		cout<<"La velocidad es: "<<trunc(c1->get_velocidad(tiempo))<<" km/h"<<endl;
		cout<<"La distancia recorrida es: "<<trunc(c1->get_distancia())<<" m"<<endl<<endl;
		c1->get_alerta();
		
		cout<<endl<<endl; // Espacio
		
		tiempo_1 = tiempo_2;
	}
	
	return 0;
}