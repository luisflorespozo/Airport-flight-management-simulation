// Class automatically generated by Dev-C++ New Class wizard

#include "coordenana.h" // class's header file

// class constructor
coordenana::coordenana(int a, int b, int c, char d, int e, int f, int g, char h)
:longitud(a,b,c,d),latitud(e,f,g,h)
{
}
coordenana::coordenana(angulo x, angulo y)
{longitud=x;
latitud=y;
}
coordenana::coordenana()
{
	// insert your code here
}
// class destructor
coordenana::~coordenana()
{
	// insert your code here
}
angulo coordenana::getlongit()
{return longitud;}
angulo coordenana::getlatit()
{return latitud;}
void coordenana::setLatitud(angulo x)
{latitud=x;
}
void coordenana::setLongitud(angulo y)
{
longitud=y;
}
void coordenana::setcoordenada(int g,int m,int s,char c,int g2,int m2 ,int s2,char c2)
{longitud.setgrado (g);
longitud.setminuto (m);
longitud.setsegundo (s);
longitud.setorient (c);
latitud.setgrado (g2);
latitud.setminuto (m2);
latitud.setsegundo (s2);
latitud.setorient (c2);
}
void coordenana::operator=(coordenana b)
{longitud=b.getlongit();
latitud=b.getlatit();
}
bool coordenana::operator==(coordenana b)
{
if(longitud==b.getlongit()&&latitud==b.getlatit())
return 1;
else
return 0;
}
void coordenana::mostrar()
{cout<<"Latitud-------------        "<<endl;latitud.mostrar();
cout<<endl;
cout<<"Longitud-------------        "<<endl;longitud.mostrar();
}