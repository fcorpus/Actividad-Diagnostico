#include <stdio.h>
#include <stdlib.h>
void AddAtTail(int **array, int number, int sizeOfArray){
    int size, *aux, i;
    size=Size(*array);
    if(size==sizeOfArray){
        aux=(int*)malloc(sizeof(int)*(size*2));
        for(i=0;i<size;i++){
            *(aux+i)=*(*array+i);
        }
        *array=aux;
    }
    *(*array+size)=number;
}
void AddAtFront(int **array, int number, int sizeOfArray){
    int size, *aux, i;
    size=Size(*array);
    if(size==sizeOfArray){
        aux=(int*)malloc(sizeof(int)*(size*2));
    }
    *(aux)=number;
     for(i=0;i<size;i++){
            *(aux+(i+1))=*(*array+i);
        }
        *array=aux;
}
int Size(int *array){
    int i, *aux;
    aux=array
    for(i=0;aux!=NULL;i++){
        aux+=i;
    }
    return i;
}
void RemoveAll(int **array){
    int size, i;
    size=Size(*array);
    for(i=size-1;i>=0;i++){
        *array+i=NULL;
    }
    free(array);
}
int GetAt(int index, int *array){
    int i, num;
    for(i=0;i!=index;i++){
        array+=i;
    }
    num=*array;
    return num;
}