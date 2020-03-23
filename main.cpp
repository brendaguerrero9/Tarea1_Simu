#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void){

    Matrix A, Result,Transpuesta,Inversa;
    zeroes(A,3);

    //Ingresando matriz
    A.at(0).at(0)=2;  A.at(0).at(1)=2;  A.at(0).at(2)=3;
    A.at(1).at(0)=4;  A.at(1).at(1)=5;  A.at(1).at(2)=6;
    A.at(2).at(0)=7;  A.at(2).at(1)=8;  A.at(2).at(2)=9;

    //Determinante
    determinant(A);

    //Matriz cofactores
    cofactors(A, Result);

    //Matriz cofactores transpuesta
    transpose(Result,Transpuesta);

    //Matriz inversa
    inverse(Transpuesta,Inversa,-3);

    showMatrix(Inversa);

    return 0;
}