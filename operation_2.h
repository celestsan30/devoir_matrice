#ifndef OPP_H_
#define OPP_H_

void addition_2(float mat1[2][2],float mat2[2][2],float result[2][2]);
void afficher_2(float mat[2][2]);
void init_2(float mat[2][2]);
void produit_2(float mat1[2][2],float mat2[2][2],float result[2][2]);
void soustract_2(float mat1[2][2],float mat2[2][2],float result[2][2]);
float determinant_2( float mat[2][2]);
void transpo_2(float mat[2][2],float result[2][2]);
float trace_2(float mat[2][2]);
void inverse_2(float mat[2][2],float inversemat[2][2]);
#endif