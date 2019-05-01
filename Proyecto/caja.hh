#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
#include "mapa.hh"
#include "funciones.hh"

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define FIL 34
#define COL 34

class CAJA{
    public:
        int x = 0,y = 0, lugar;
    CAJA(int l) : lugar(l){}

void buscar(){
      for (int f = 0; f < FIL; f++) {
		for (int c = 0; c < COL; c++) {
			if(mapa[f][c] == lugar){
                x = f;
                y = c;

			}
		}}
  }

  void pintar(){
      color(14);
    gotoxy(x,y);   printf("%c%c%c%c", 201, 203, 203, 187);
    gotoxy(x,y+1);   printf("%c%c%c%c", 200, 202, 202, 188);
    }

  void borrar(){
    color(1);
    gotoxy(x,y); printf ("%c", 219); gotoxy(x+1,y); printf ("%c", 219);
    gotoxy(x+2,y+1); printf ("%c", 219); gotoxy(x+3,y+1); printf ("%c", 219);
    color(9);
    gotoxy(x+2,y); printf ("%c", 219); gotoxy(x+3,y); printf ("%c", 219);
    gotoxy(x,y+1); printf ("%c", 219); gotoxy(x+1,y+1); printf ("%c", 219);
  }

};
