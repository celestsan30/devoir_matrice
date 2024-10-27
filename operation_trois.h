#ifndef OPPE_H_
#define OPPE_H_

void afficher_trois(float mat[3][3]);
void init_trois(float mat[3][3]);
void addition_trois(float mat1[3][3],float mat2[3][3], float result[3][3]);
void produit_trois(float mat1[3][3],float mat2[3][3], float result[3][3]);
void soustract_trois(float mat1[3][3],float mat2[3][3], float result[3][3]);
float determinant_trois(float mat[3][3]);
void transpo_trois(float mat[3][3], float result[3][3]);
float trace_trois(float mat[3][3]);

#endif 