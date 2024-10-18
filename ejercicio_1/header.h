#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

int i, k;

typedef struct ficha
{
    char nombre[20];
    int cantidad;
    float precio;
} stock;

stock ingresarProducto()
{
    stock producto;
    printf("Ingrese el nombre del producto: ");
    fflush(stdin);
    gets(producto.nombre);
    do
    {
        printf("Ingrese el stock del producto: ");
        fflush(stdin);
        scanf("%d", &producto.cantidad);
        if(producto.cantidad<0)
        {
            printf("No es posible ingresar una cantidad menor a cero.");
        }
    }
    while(producto.cantidad<0);
    do
    {
        printf("Ingrese el precio del producto: ");
        fflush(stdin);
        scanf("%f", &producto.precio);
        if(producto.precio<0)
        {
            printf("No es posible ingresar un precio menor a cero.");
        }
    }
    while(producto.precio<0);
    printf("\n.......................\n");
    return producto;
}

void mostrarProductos(stock productos[], int numProductos)
{
    for(k=0; k<numProductos; k++)
    {
        printf("\n------------------------------\n");
        printf("Nombre del producto: %s\n", productos[k].nombre);
        printf("Unidades en stock: %d\n", productos[k].cantidad);
        printf("Precio del producto: %.2f\n", productos[k].precio);
    }
}

void mayorMil(stock productos[], int numProductos){
    printf("\nLos productos con un precio superior a mil son:");
    for(i=0; i<numProductos; i++){
        if(productos[i].precio>1000){
            printf("\n------------------------------\nNombre: %s\nPrecio: %.2f\n", productos[i].nombre, productos[i].precio);
        }
    }
}

#endif // HEADER_H_INCLUDED
