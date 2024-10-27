#include <iostream>
#include "operation_2.h"
#include "operation_trois.h"

int main() {
    float mat1[2][2], mat2[2][2], resultat[2][2];
    float mat_1[3][3], mat_2[3][3], result[3][3];
    float det, tra_ce;
    int choix, operation;

    std::cout << "Vous voulez utiliser quelle matrice ?\n";
    std::cout << "1- M2*2\n" << "2- M3*3\n";
    std::cin >> choix;

    if (choix == 1) {  
        std::cout << "Quelle operation voulez-vous realiser ?\n";
        std::cout << "1- Addition\n" << "2- Soustraction\n" << "3- Multiplication\n";
        std::cout << "4- Inverse\n" << "5- Determinant\n" << "6- Transposee\n" << "7- Trace\n";
        std::cin >> operation;

        switch (operation) {
            case 1:
                std::cout << "Entrer la premiere matrice\n";
                init_2(mat1);
                std::cout << "Entrer la seconde matrice\n";
                init_2(mat2);
                addition_2(mat1, mat2, resultat);
                std::cout << "Le resultat est:\n";
                afficher_2(resultat);
                break;

            case 2:
                std::cout << "Entrer la premiere matrice\n";
                init_2(mat1);
                std::cout << "Entrer la seconde matrice\n";
                init_2(mat2);
                soustract_2(mat1, mat2, resultat);
                std::cout << "Le resultat est:\n";
                afficher_2(resultat);
                break;

            case 3:
                std::cout << "Entrer la premiere matrice\n";
                init_2(mat1);
                std::cout << "Entrer la seconde matrice\n";
                init_2(mat2);
                produit_2(mat1, mat2, resultat);
                std::cout << "Le resultat est:\n";
                afficher_2(resultat);
                break;

            case 4:
                std::cout << "Entrer la matrice\n";
                init_2(mat1);
                inverse_2(mat1, resultat);
                std::cout << "L'inverse est:\n";
                afficher_2(resultat);
                break;

            case 5:
                std::cout << "Entrer la matrice\n";
                init_2(mat1);
                det = determinant_2(mat1);
                std::cout << "Le determinant est: " << det << "\n";
                break;

            case 6:
                std::cout << "Entrer la matrice\n";
                init_2(mat1);
                transpo_2(mat1, resultat);
                std::cout << "La transposee est:\n";
                afficher_2(resultat);
                break;

            case 7:
                std::cout << "Entrer la matrice\n";
                init_2(mat1);
                tra_ce = trace_2(mat1);
                std::cout << "La trace est: " << tra_ce << "\n";
                break;

            default:
                std::cout << "Operation non reconnue.\n";
                break;
        } 
      }else if (choix == 2) {
        std::cout << "Quelle opération voulez-vous réaliser ?\n";
        std::cout << "1- Addition\n" << "2- Soustraction\n" << "3- Multiplication\n";
        std::cout << "4- Determinant\n" << "5- Transposée\n" << "6- Trace\n";
        std::cin >> operation;

        switch (operation) {
            case 1:
                std::cout << "Entrez la première matrice\n";
                init_trois(mat_1);
                std::cout << "Entrez la seconde matrice\n";
                init_trois(mat_2);
                addition_trois(mat_1, mat_2, result);
                std::cout << "Le résultat de l'addition est:\n";
                afficher_trois(result);
                break;

            case 2:
                std::cout << "Entrez la première matrice\n";
                init_trois(mat_1);
                std::cout << "Entrez la seconde matrice\n";
                init_trois(mat_2);
                soustract_trois(mat_1, mat_2, result);
                std::cout << "Le résultat de la soustraction est:\n";
                afficher_trois(result);
                break;

            case 3:
                std::cout << "Entrez la première matrice\n";
                init_trois(mat_1);
                std::cout << "Entrez la seconde matrice\n";
                init_trois(mat_2);
                produit_trois(mat_1, mat_2, result);
                std::cout << "Le résultat de la multiplication est:\n";
                afficher_trois(result);
                break;

            case 4:
                std::cout << "Entrez la matrice\n";
                init_trois(mat_1);
                det = determinant_trois(mat_1);
                std::cout << "Le déterminant est: " << det << "\n";
                break;

            case 5:
                std::cout << "Entrez la matrice\n";
                init_trois(mat_1);
                transpo_trois(mat_1, result);
                std::cout << "La transposée est:\n";
                afficher_trois(result);
                break;

            case 6:
                std::cout << "Entrez la matrice\n";
                init_trois(mat_1);
                tra_ce = trace_trois(mat_1);
                std::cout << "La trace est: " << tra_ce << "\n";
                break;

            default:
                std::cout << "Opération non reconnue.\n";
                break;
        }
    }else {
        std::cout << "Choix non supporté.\n";
    } 

    return 0;
}
