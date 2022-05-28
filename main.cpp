#include "miniwin.h"
#include <iostream>

using namespace miniwin;

int main(){
    
	/*
	vredimensiona(400,400);
	color_rgb(102,175,35);
	rectangulo_lleno(0,0,400,400);
	
	color_rgb(121,70,147);
	rectangulo_lleno(0,0,400,200);
	
	color_rgb(252,180,4);//Triangulo izquierdo grande
	for(int i = 0; i <= 200; i++){
		linea(200-i,200-i,200-i,200+i);
	}
	
	color_rgb(193,162,202);//Triangulo superior
	for(int i = 0; i <= 200; i++){
		linea(200-i,200-i,200+i,200-i);
	}
	
	color_rgb(193,51,30);//Paralelogramo
	for(int i = 0; i <= 100; i++){
		linea(i,400-i,200+i,400-i);
	}
	
    color_rgb(19,167,192);//Rombo
	for(int i = 0; i <= 100; i++){
		linea(200+i,200-i,200+i,200+i);
		linea(400-i,200-i,400-i,200+i);
	}
	
	color_rgb(246,234,68);//Triangulo inferior der
	for(int i = 0; i <= 200; i++){
		linea(200+i,400-i,400,400-i);
	}*/
	
	//------------------------------------------------------------------------------------------
	//FORMA CORRECTA - Programado en base 400x400
	float tamVentana = 400;//Tamaño de ventanas //400 -> 400
	//Variables estimadas
	float mitadVentana = tamVentana/2; //400 -> 200
	float cuartaVentana = tamVentana/4; //400 -> 100
	float terceraVentana = mitadVentana + cuartaVentana; //400 -> 300
	
	//Tamaño ventana
	vredimensiona(tamVentana,tamVentana);
	
	//rectangulo_lleno(0,0,tamVentana,tamVentana); //En el caso no se requiera realizar todas las figuras
	
	color_rgb(193,162,202);//Triangulo superior
	for(int i = 0; i <= mitadVentana; i++){
		linea(
		mitadVentana-i,
		mitadVentana-i,
		mitadVentana+i,
		mitadVentana-i);
	}
	
    color_rgb(252,180,4); //Triangulo izquierdo
	for(int i = 0; i <= mitadVentana; i++){
		linea(
		mitadVentana-i,
		mitadVentana-i,
		mitadVentana-i,
		mitadVentana+i);
	}
	
	color_rgb(246,234,68);//Triangulo Inferior derecho
	for(int i = 0; i <= mitadVentana; i++){
		linea(
		mitadVentana+i,
		tamVentana-i,
		tamVentana,
		tamVentana-i);
	}
	
	color_rgb(193,51,30);//Paralelogramo
	for(int i = 0; i <= mitadVentana; i++){
		linea(
		tamVentana,
		0+i,
		terceraVentana,
		cuartaVentana+i);
	}
	
	color_rgb(102,175,35);//Triangulo Inferior Izquierdo
	for(int i = 0; i <= cuartaVentana; i++){
		linea(cuartaVentana-i,
		terceraVentana+i,
		cuartaVentana-i,
		tamVentana);
		linea(cuartaVentana+i,
		terceraVentana+i,
		cuartaVentana+i,
		tamVentana);
	}
	
	color_rgb(19,167,192);//Rombo
	for(int i = 0; i <= cuartaVentana; i++){
		linea(
		cuartaVentana+i,
		terceraVentana-i,
		cuartaVentana+i,
		terceraVentana+i);//Izq
		linea(
		terceraVentana-i,
		terceraVentana-i,
		terceraVentana-i,
		terceraVentana+i);//Der
	}
	
	color_rgb(121,70,147);//Triangulo Der al lado superior del rombo
	for(int i = 0; i <= cuartaVentana; i++){
		linea(
		mitadVentana+i,
		mitadVentana-i,
		mitadVentana+i,
		mitadVentana+i);
	}
	refresca();
	return 0;
}

//@WillCD

