#pragma once
#include "string"
#include "string.h"
#include "iostream"
using namespace std;

struct persona
{
	char codigos[10];
	char nombres[50];
	char apellidos[50];
	int edad;

};
void ingresoP(persona &p) {

	cout << "codigo: "; cin >> p.codigos;

	cout << "codigo: "; cin >> p.nombres;

	cout << "codigo: "; cin >> p.apellidos;

	cout << "codigo: "; cin >> p.edad;
}

class estudiante
{
private:
	persona datos;
	int notas[4], asiste[5];
public:
	estudiante() {
		strcpy(datos.codigos, "000");
		strcpy(datos.nombres, "000");
		strcpy(datos.apellidos, "000");
		datos.edad = 0;
		for (int i = 0; i < 4; i++)notas[i] = 0;
		for (int i = 0; i < 5; i++)asiste[i] = 0;
	}
	~estudiante() {}

	void ingroE() {
		ingresoP(datos);
	}
	void ingroN(int N[]) {
		for (int i = 0; i < 4; i++)
		{
			notas[i] = N[i];
		}
	}
	void ingroA(int N[]) {
		for (int i = 0; i < 5; i++)
		{
			asiste[i] = N[i];
		}
	}
	int masBaja() {
		

		int x = notas[0];

		for (int i = 0; i < 4; i++)
		{
			
				if (notas[i] < x)x= notas[i];
		
		}
		return x;
	}
	int masBaja(estudiante x[],int N) {
		int x1 = x[0].notas[0];
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (x[i].notas[j] < x1)x1 = x[i].notas[j];
			}
		}
		return x1;
	}
	int masAlta() {
		int x = notas[0];

		for (int i = 0; i < 4; i++)
		{

			if (notas[i] > x)x = notas[i];

		}
		return x;
	
	}
	

	
	int masAlta(estudiante x[], int N) {
	
		int x1 = x[0].notas[0];
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (x[i].notas[j] > x1)x1 = x[i].notas[j];
			}
		}
		return x1;
	}
	double promedio() {
	
		double x = 0;

		for (int i = 0; i < 4; i++)
		{
			x += notas[i];
		}
		return x/4;
	}
	double promedio(estudiante x[], int N) {
	
		int x1 = x[0].promedio();
		for (int i = 0; i < N; i++)
		{
			x1 += x[i].promedio();
		}
		return x1;
	}
	void reporteasiste() {}
	void reportenotas() {}
	void reporteprom() {}
	void listado(estudiante x[], int N) {}
	void guardarA() {}
	void cargara() {}
	void  setDatos(persona p) {}
	bool buscar(char c[],estudiante x[] ,int N){}
	int buscarp(char c[], estudiante x[], int N) {}
	persona getdatos() {
		return datos;
	}

};

