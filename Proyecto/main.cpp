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
#include "opciones.hh"
#include "menu.hh"

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80


using namespace std;


int main(){
char soundfile[] = "Love_dramatic.wav" ;
cout<<PlaySound((LPCSTR)soundfile, NULL, SND_FILENAME | SND_ASYNC );

    PERSONAJE N;
    CAJA caja(7);
    OPCIONES opc;
    OcultarCursor();

 reinicio:

    menu();
    imprimir_menu();
    opc.pintar();
    opc.letras();

while(opc.men !=1){
    opc.mover();
 }
    cleanmenu();
    opc.quitarletra();

    instrucciones();
 	copiar_nivel1();
	imprimir_mapa();

    N.buscar();
    caja.buscar();
    N.pintar();
    caja.pintar();
    N.movimientos(11, 28);

bool game_over = false;

while(!game_over){
    movertodo(N, caja);
        if (mapa[caja.x][caja.y] == 99){
                game_over = true;
        }
    Sleep(30);
}

    clean_map();
    game_over = false;

    copiar_nivel2();
    imprimir_mapa();

    N.buscar();
    caja.buscar();
    N.pintar();
    caja.pintar();
    N.movimientos(11, 28);

while(!game_over){

    movertodo(N, caja);
        if (mapa[caja.x][caja.y] == 99){
            game_over = true;
        }
    Sleep(30);
}

    borrar();//instrucciones
    instrucciones2();
    clean_map();
    youwin();

 while(game_over){
    system("color 0C");
    Sleep(100);
    system("color 0E");
    Sleep(100);

        if(kbhit()){
            char tecla = getch();
                if(tecla == ESC){
                    opc.men = 0;
                    N.mov = 0;
                    system("CLS");
                    goto reinicio;
                }

        }
}
    return 0;
}
