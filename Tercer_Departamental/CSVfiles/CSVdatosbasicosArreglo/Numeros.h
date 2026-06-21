#ifndef NUMEROS_H
#define NUMEROS_H

class Numeros{
	public:
		float promedio (int numeros[]); //En la clase de declaro como int pero en el archivo de implementacion se estaba usando float por lo que no compilaba
		int suma (int numeros[]);
		int max (int numeros[]);
		int min (int numeros[]);

};

#endif