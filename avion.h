// Class automatically generated by Dev-C++ New Class wizard

#ifndef AVION_H
#define AVION_H
#include <cstdlib>
#include <iostream>
#include <string.h>
#include "hora.h"
#include "coordenana.h"
using namespace std;
// No description
class avion
{protected:
string codigo;
coordenana c();
hora horasalida();
long minutosDemora;

	public:
		// class constructor
		avion(string,coordenana n,hora h,long);
		avion();
		// class destructor
		~avion();
	void mostrar();// que muestra toda la informaci�n del avi�n.
	/*hora CalcularHoraLlegada();// que calcula la hora de llegada.
	void CambiarCoordenadasDestino(coordenana, coordenana);// que cambia las coordenadas de destino.
	void CambiarAnguloLongitud(angulo); //que cambia el �ngulo "longitud" de las coordenadas de destino.
	void CambiarAnguloLatitud(angulo);
*/};

#endif // AVION_H