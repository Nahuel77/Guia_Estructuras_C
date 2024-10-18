#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int i, numProductos = 2;

    stock productos[numProductos];

    for(i=0; i<numProductos; i++){
        productos[i]=ingresarProducto();
    }

    mostrarProductos(productos, numProductos);
    mayorMil(productos, numProductos);

    return 0;
}
