#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
#include "personaje.hh"
#include "mapa.hh"
#include "funciones.hh"
#include "caja.hh"

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define REINICIAR 114
#define ESC 27



void movertodo(PERSONAJE& N, CAJA& C){
    if(kbhit()){
       char tecla = getch();
       N.borrar();

       switch (tecla){
           case IZQUIERDA:
               if (N.x == C.x+4 && N.y == C.y && (mapa[N.x-5][N.y] == 3 || mapa[N.x-5][N.y] == 4 || mapa[N.x-5][N.y] == 5)){
                N.mov++;
                break;
            }
        if (mapa[N.x-1][N.y] != 3 && mapa[N.x-1][N.y] != 4 && mapa[N.x-1][N.y] != 5
           && mapa[N.x-4][N.y+1] != 3 && mapa[N.x-4][N.y+1] != 4 && mapa[N.x-4][N.y+1] != 5){
                if (N.x == C.x+4 && N.y == C.y){
                    if (mapa[C.x-1][C.y] != 3 && mapa[C.x-1][C.y] != 4 && mapa[C.x-1][C.y] != 5
                        && mapa[C.x-1][C.y+1] != 3 && mapa[C.x-1][C.y+1] != 4 && mapa[C.x-1][C.y+1] != 5){
                        C.borrar();
                        C.x = C.x -4;
                        C.pintar();}
                }

            N.x = N.x - 4;N.pintar();N.mov++;}
            break;
        case DERECHA:
            if (N.x == C.x-4 && N.y == C.y && (mapa[N.x+8][N.y] == 3 || mapa[N.x+8][N.y] == 4 || mapa[N.x+8][N.y] == 5)){
                N.mov++;
                break;
            }
        if (mapa[N.x+4][N.y] != 3 && mapa[N.x+4][N.y] != 4 && mapa[N.x+4][N.y] != 5 && mapa[N.x+4][N.y] != 99
           && mapa[N.x+4][N.y+1] != 3 && mapa[N.x+4][N.y+1] != 4 && mapa[N.x+4][N.y+1] != 5 ){
                if (N.x == C.x-4 && N.y == C.y){
                    if (mapa[C.x+4][C.y] != 3 && mapa[C.x+4][C.y] != 4 && mapa[C.x+4][C.y] != 5
                        && mapa[C.x+4][C.y+1] != 3 && mapa[C.x+4][C.y+1] != 4 && mapa[C.x+4][C.y+1] != 5){
                        C.borrar();
                        C.x = C.x +4;
                        C.pintar();}
                }

           N.x = N.x + 4;N.pintar();N.mov++;}
           break;
        case ARRIBA:
            if(N.y == C.y +2 && N.x == C.x && (mapa[N.x][N.y-3] == 3 || mapa[N.x][N.y-3] == 4 || mapa[N.x][N.y-3] == 5)){
                N.mov++;
                break;
            }
        if (mapa[N.x][N.y-2] != 3 && mapa[N.x][N.y-2] != 4 && mapa[N.x][N.y-2] != 5
           && mapa[N.x+3][N.y-1] != 3 && mapa[N.x+3][N.y-1] != 4 && mapa[N.x+3][N.y-1] != 5){
                if (N.y == C.y+2 && N.x == C.x){
                    if (mapa[C.x][C.y-1] != 3 && mapa[C.x][C.y-1] != 4 && mapa[C.x][C.y-1] != 5
                        && mapa[C.x+3][C.y-1] != 3 && mapa[C.x+3][C.y-1] != 4 && mapa[C.x+3][C.y-1] != 5){
                        C.borrar();
                        C.y = C.y -2;
                        C.pintar();N.mov++;}
                }

           N.y = N.y -2;N.pintar();N.mov++;}
           break;

        case ABAJO:
            if(N.y == C.y -2 && N.x == C.x && (mapa[N.x][N.y+4] == 3 || mapa[N.x][N.y+4] == 4 || mapa[N.x][N.y+4] == 5)){
                N.mov++;
                break;
            }
        if (mapa[N.x][N.y+2] != 3 && mapa[N.x][N.y+2] != 4 && mapa[N.x][N.y+2] != 5){
                if (N.y == C.y-2 && N.x == C.x){
                    if (mapa[C.x][C.y+2] != 3 && mapa[C.x][C.y+2] != 4 && mapa[C.x][C.y+2] != 5){
                        C.borrar();
                        C.y = C.y +2;
                        C.pintar();}
                }

           N.y = N.y +2;N.pintar();N.mov++;}
           break;
        case ESC:
            exit(0);
        break;

        case REINICIAR:
            N.buscar();
            C.borrar();
            C.buscar();
            C.pintar();
        break;
       }
       N.pintar();

       N.movimientos(11, 28);

}

      }
