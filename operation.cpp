#include<iostream>
#include "operation_trois.h"

void afficher_trois(float mat[3][3])
{
    for(int i=0; i<3; i++)
    {
        for (int j=0; j< 3; j++)
        {
            std::cout << mat[i][j] << "   ";
            if(j == 1)
            {
                std::cout << std::endl << std::endl;
            }
        }
    }
}

void init_trois(float mat[3][3])
{
    for(int i=0; i<3; i++)
    {
        if (i == 0){
            std::cout << "Entrer les valeurs de la premiere ligne " << std::endl;
        }
        else if(i == 1){
            std::cout << "seconde ligne" << std::endl;
        }
        else{
            std::cout << "derniere ligne" << std::endl;
        }
        for(int j = 0; j < 3; j++){
            if(j == 0){
                std::cout << "Entrer la premiere valeur" << std::endl;
            }
            else if (j == 1)
            {
                std::cout << "seconde valeur";
            }
            else{
                std::cout << "derniere valeur " << std::endl;
            }
            std::cin >> mat[i][j];
        }
    }
    afficher_trois(mat);
}


void addition_trois(float mat1[3][3],float mat2[3][3], float result[3][3] = {}){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    
}

void produit_trois(float mat1[3][3],float mat2[3][3], float result[3][3] = {}){
    int x=0, y=0;
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[x][y] += mat1[0][j]=mat2[j][i];
        }
    }
}

void soustract_trois(float mat1[3][3],float mat2[3][3], float result[3][3] = {}){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i][j]= mat1[i][j] - mat2[i][j];
        }
    }
 
}

float determinant_trois(float mat[3][3]) {
    float det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
    return det;
}

void transpo_trois(float mat[3][3], float result[3][3] = {}){
   
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            result[i][j] = mat[j][i];
        }
    }
}

float trace_trois(float mat[3][3])
{
    float trace = 0;
    for(int i=0; i<3; i++)
    {
        trace += mat[i][i];
    }
    return trace;
}
