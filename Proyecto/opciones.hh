#pragma once
#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
#include <WinUser.h>
#include "personaje.hh"
#include "mapa.hh"
#include "funciones.hh"
#include "caja.hh"
#include "mover.hh"
#include "menu.hh"
#include "caja.hh"

#define ENTER 13

class OPCIONES{
private:
    int x = 14, y = 26;
public:
    int men = 0;

    void quitarletra(){
    gotoxy(16, 26); printf("       ");
    gotoxy(16, 28); printf("        ");
    gotoxy(1, 33); printf("                    ");
    borrar();    }

    void letras(){
        color(15);
    gotoxy(16, 26); printf("JUGAR");
    gotoxy(16, 28); printf("SALIR");
    gotoxy(1, 33); printf("ENTER PARA ELEGIR");}

    void pintar(){
      color(12);
    gotoxy(x,y);   printf("%c", 219);
    }

    void borrar(){
        gotoxy(x,y);   printf(" ");
    }
      void mover(){
    if(kbhit()){
       char tecla = getch();
       borrar();
       if (tecla == ARRIBA && y >= 28) y = y-2;
       if (tecla == ABAJO && y <= 26)  y = y+2;
       if (tecla == ENTER && y == 26){men = 1;}
       if (tecla == ENTER && y == 28){exit(0);}
        pintar();
      }
  }
};
