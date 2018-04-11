#include <cstdlib>
#include <iostream>
#include "hora.h"
#include "cavion.h"
#include "coordenana.h"
#include "angulo.h"
#include "avionpasajeros.h"
#include "coladeaviones.h"
using namespace std;

int main()
{
    hora h(1,9,17);
    hora i(2,10,18);
    hora j(3,11,19);
    hora k(4,12,20);
    hora l(5,13,21);
    hora m(6,14,22);
    hora n(7,15,23);
    hora o(8,16,24);

   coordenana a(1,9,17,'c',3,1,2,'n');
   coordenana b(2,10,18,'c',3,1,2,'n');
   coordenana c(3,11,19,'c',3,1,2,'n');
   coordenana d(4,12,20,'c',3,1,2,'n');
   coordenana e(5,13,21,'c',3,1,2,'n');
   coordenana f(6,14,22,'c',3,1,2,'n');
   coordenana g(7,15,23,'c',3,1,2,'n');
   coordenana y(8,16,24,'c',3,1,2,'n');



cavion* carga=new avionDcarga("123abc",a,h,10,123,456);
cavion* pasaj=new avionPasajeros("456def",b,i,20,453,677);
cavion* carga2=new avionDcarga("789ghi",c,j,30,790,876);
cavion* bomb=new avionBombero("1011jkl",d,k,40,0756,675);
cavion* carga3=new avionDcarga("1213mno",e,l,50,456,543);
cavion* pasaj2=new avionPasajeros("1415pqr",f,m,60,86,777);
cavion* carga4=new avionDcarga("1617stu",g,n,70,75,655);
cavion* bomb2=new avionBombero("1819vwx",y,o,80,546,778);

cavion**vec;
vec=new cavion*[8];

(*(vec+0))=carga;
(*(vec+1))=pasaj;
(*(vec+2))=carga2;
(*(vec+3))=bomb;
(*(vec+4))=carga3;
(*(vec+5))=pasaj2;
(*(vec+6))=carga4;
(*(vec+7))=bomb2;

angulo u(3,4,5,'n');
angulo s(6,7,9,'o');
cavion av("123abc",a,h,10);
av.CambiarCoordenadasDestino(g);// que cambia las coordenadas de destino.
av.CambiarAnguloLongitud(u); //que cambia el ángulo "longitud" de las coordenadas de destino.
av.CambiarAnguloLatitud(s);
av.mostrar();
cout<<"---------------------------------------------------------"<<endl;

  ColadeAviones z(vec,8);
  z.mostrar();
  int res;
  res=z.eliminar("1415pqr",0);
  z.eliminarSiguienteAvionEnEspera();
  z.mostrar();
  //z.ExtraerSiguienteAvion();
   getch();
}
