/*Autor: Oscar Eduardo Fletes Ixta, 31/03/22
	Hacer Un programa que utilice la libreria string para usar cadenas de caracteres 
	y sus funciones mas comunes
	
	Programa en lenguaje c que muestra el uso de la libreria string.h para usas las funciones de cadenas de caracteres, 
	con el uso de fgets, y condiciones  
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo char*mensaje
		* Operaciones aritmeticas  
		* Uso del fgets para leer cadenas de caracteres
		* Uso de condiciones
		* uso de la libreria String.h
		* Funciones para cadenas de caractres 
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables char*mensaje, condiciones, uso de la libreria string, funciones para cadenas de caracteres, 
	uso del fgets para leer cadenas de caracteres, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:

	El programa  pide como entrada 1 variable del tipo char(Nombre)
	El programa utiliza la libreria string para usar cadenas de caracteres y sus funciones mas comunes
	*/
	
#include<stdio.h>//libreria para el cuerpo de c
#include<string.h>//libreria para uso de funciones para cadenas de crarcteres 

int main(){
	//Declaracion de cadenas
	char nombre[]="Oscar Eduardo Fletes Ixta";//Variable de cadenas
	char *carrera="Ing: En sistemas Computacionales";//Variable de cadenas
	char nombre2[30];//Variable de cadenas
	int longitud;//Variable de enteros
	//Entrada por teclado de cadenas, y con scanf no lee espacios
	//scanf("%s",&nombre2);
	
	//Usando gets, funciona, pero no verifica el tamaño de la cadena 
	//gets(nombre2);
	printf("Introduce el nombre: ");//Imprime mensaje
	fgets(nombre2,30,stdin); //Lee bien la cadena y solamente lo que cabe en la cadena
	
	printf("Nombre2 = [%s]\n",nombre2);//Imprime el nombre 2
	printf("Nombre: [%s]\n",nombre);//Imprime el nombre
	printf("Carrera: [%s]\n",carrera);//Imprime la carrera
	longitud=strlen(nombre2);//uso de la funcion strlen para usar cadenas de caracteres de la libreria string
	//strlen calcula la longitud de la caderna
	printf("La longitud de nombre2 es %d\n",longitud);//imprime la longitud del nombre 2
	if(strlen(nombre)>strlen(nombre2)){//condicion que si nombre es mayor que nombre 2
		printf("Nombre tiene mas caracteres\n");//Imprime mensaje
	}else{//y si no se cumple la primera condicion...
		printf("Nombre2 tiene mas caracteres\n");//Imprime mensaje
	}
	strcpy(nombre2,"Hola mundo!!!");//funcion strcpy de la libreria string, copia una cadena en otra
	printf("Nombre2=[%s]\n",nombre2);//Imprime el nombre 2
	
	return 0;
}
