// Class automatically generated by Dev-C++ New Class wizard

#include "angulo.h" // class's header file

// class constructor
angulo::angulo(int a, int b, int c, char d)
{
	grado=a;
	minuto=b;
    segundo=c;
    orientacion=d;
}
angulo::angulo()
{
	// insert your code here
}
// class destructor
angulo::~angulo()
{
	// insert your code here
}


int angulo::getgrado()
{return grado;}
int angulo::getminuto()
{return minuto;}
int angulo::getsegundo()
{return segundo;}
char angulo::getorient()
{return orientacion;}
void angulo::setgrado(int a)
{ grado=a;}
void angulo::setminuto(int b)
{minuto=b;}
void angulo::setsegundo(int c)
{ segundo=c;}
void angulo::setorient(char d)
{ orientacion=d;}
void angulo::operator=(angulo x)
{grado=x.getgrado();
minuto=x.getminuto();
segundo=x.getsegundo();
orientacion=x.getorient();
}
bool angulo::operator==(angulo x)
{
if(grado==x.getgrado()&&minuto==x.getminuto()&&segundo==x.getsegundo()&&orientacion==x.getorient())
return 1;
else
return 0;
}
void angulo::mostrar()
{cout<<"Grado:          "<<grado<<endl;
cout<<"Minuto:         "<<minuto<<endl;
cout<<"Segundo:        "<<segundo<<endl;
cout<<"Orientacion:    "<<orientacion<<endl;
}