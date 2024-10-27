#include<iostream>
#include "operation_2.h"

void afficher_2(float mat[2][2])
{
    for(int i=0; i<2; i++)
    {
        for (int j=0; j< 2; j++)
        {
            std::cout << mat[i][j] << "   ";
            if(j == 1)
            {
                std::cout << std::endl << std::endl;
            }
        }
    }
}

void init_2(float mat[2][2])
{
    for(int i=0; i<2; i++)
    {
        if (i == 0){
            std::cout << "Entrer les valeurs de la premiere ligne " << std::endl;
        }
        else{
            std::cout << "seconde ligne" << std::endl;
        }
        for(int j = 0; j < 2; j++){
            if(j == 0){
                std::cout << "Entrer la premiere valeur" << std::endl;
            }
            else{
                std::cout << "la seconde " << std::endl;
            }
            std::cin >> mat[i][j];
        }
    }
    afficher_2(mat);
}


void addition_2(float mat1[2][2],float mat2[2][2], float result[2][2] = {}){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    
}

void produit_2(float mat1[2][2],float mat2[2][2], float result[2][2] = {}){
    int x=0, y=0;
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[x][y] += mat1[0][j]=mat2[j][i];
        }
    }
}

void soustract_2(float mat1[2][2],float mat2[2][2], float result[2][2] = {}){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[i][j]= mat1[i][j] - mat2[i][j];
        }
    }
 
}

float determinant_2( float mat[2][2]) {
    float result ; 
    result = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    return result;
}

void transpo_2(float mat[2][2], float result[2][2] = {}){
   
    for(int i=0; i<2; i++)
    {
        for(int j=0; j< 2; j++)
        {
            result[i][j] = mat[j][i];
        }
    }
}

float trace_2(float mat[2][2])
{
    float trace = 0;
    for(int i=0; i<2; i++)
    {
        trace += mat[i][i];
    }
    return trace;
}

void inverse_2(float mat[2][2], float inversemat[2][2]={}){
    float det = determinant_2(mat);
     if (det == 0) {
        std::cout << "La matrice n'est pas inversible (determinant = 0).";
    }

    inversemat[0][0] = mat[1][1] / det;
    inversemat[0][1] = -mat[0][1] / det;
    inversemat[1][0] = -mat[1][0] / det;
    inversemat[1][1] = mat[0][0] / det;

  }