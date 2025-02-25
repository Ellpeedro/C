#include <stdio.h>
#include <stdlib.h>
#define max 10
typedef struct Element {
    int priorite;
    struct Element *suivant;
}Element;
typedef struct pile{
    int sommet;
    Element *suivant;
}pile;
void Init(pile *P){
    P->sommet = NULL;
}
void ajouter(pile *p,int priorite){
     if(p->sommet == NULL || priorite)

}