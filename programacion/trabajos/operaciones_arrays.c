#include <stdio.h>

/*agregar 2 nuevas funciones al programa 'operaciones_array.c':
int eliminar_x_valor(....)  
  buscar valor dentro del array y quitarlo.
int eliminar_x_indice(....)
  eliminar registro del array segun su indice. */

int Eliminar_indice (int vec[], int n,int indice)
{     
  

}


int Eliminar_x_valor (int vec[], int n,int valor)
{     
    int posicionDeIndice = buscar(vec,n,valor);

    if(posicionDeIndice != -1){
        vec[posicionDeIndice] = 0;
    }
           
    return posicionDeIndice;
}

// agregar - Permite agregar un elemento al final del array.
int agregar(int a[], int *pos, int valor)
{
  a[*pos] = valor; 
  *pos += 1;  // 
} 


// buscar - Permite determinar si un array contiene un determinado elemento.
// devolver la posicion donde lo encontro o -1 si no lo encuentra
int buscar(int a[], int cant, int valor)
{
  int i = 0; 

  while( i<cant ) {
    if (a[i] == valor ) {
      return i;
    } 
    i++;
  }
  // cond ? sent_V : sent_F;

  return -1; 
}


// buscar y agregar si no encuentra , y devuelva posicion en el array 
int buscar_y_agregar(int a[], int *pos, int valor) 
{
  int posicion = 0; 

  posicion = buscar(a, *pos, valor); 

  if (posicion == -1) {
    agregar(a, pos, valor);
    posicion = *pos - 1 ; 
  }

  return posicion; 

}


// insertar - Permite insertar un elemento en una determinada posicion del array.
// int a = { 23, 4, 6, 8, 42 } ; 
//           0   1  2  3   4
// agregar nro 10 en pos= 3
// { 23, 4, 6, 10, 8, 42 } ; 
//   0   1  2   3  4   5 
int insertar(int a[], int *pos, int valor, int pos_a_insertar) 
{
  for (int i = *pos-1; i >= pos_a_insertar; i--)
  {
    a[i+1] = a[i];
  }
  a[pos_a_insertar] = valor; 
  *pos += 1;
  
} 

void imprimir(int a[], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("Posicion %d = %d \n", i+1, a[i]); 
  }

}


int main(int argc, char const *argv[])
{
  int numeros[50] ; // capacidad (50)
  int longitud = 0; // lengh : longitud 

  // - Ejemplo 1
  agregar(numeros, &longitud, 35); 
  agregar(numeros, &longitud, 45); 
  agregar(numeros, &longitud, 65); 
  agregar(numeros, &longitud, 32); 
  agregar(numeros, &longitud, 17); 
  agregar(numeros, &longitud, 88); 

  // mostramos contenido del array en pantalla 
  imprimir(numeros, longitud);

  // - ejemplo 2
  int pos_encontrado = 0; 
  int valor_a_buscar = 0; 
  int valor = 0;
  int indice = 0;

  printf("Ingrese valor a buscar: ");
  scanf("%d", &valor_a_buscar); 
  pos_encontrado = buscar(numeros, longitud, valor_a_buscar);
  if (pos_encontrado == -1) {
    printf("Valor NO encontrado"); 
  } else {
    printf("Valor encontrado en posicion: %d", pos_encontrado+1); 
  }

  // - ejemplo 3 : buscar y agregar si no lo encontro 
  //printf("\nIngrese valor a buscar y quitar: \n");
  //scanf("%d", &valor_a_buscar); 

   printf("\n Ingrese el valor a eliminar: \n");
    scanf("%d", &valor);
  pos_encontrado= Eliminar_x_valor(numeros,longitud,valor);
 

if (pos_encontrado == -1) {
   printf("\n El elemento no existe \n");
}else{
   printf("\n El elemento fue eliminado de la posicion %i \n", pos_encontrado + 1);
}

 printf("\n Ingrese el indice a eliminar: \n");
  scanf("%d", &indice);

  //pos_encontrado = Eliminar_indice(numeros,longitud,indice);

 // pos_encontrado = buscar_y_quitar(numeros, &longitud, valor_a_buscar); 

  //printf("Valor encontrado y quitado en posicion: %d\n\n", pos_encontrado); 
 
  // - ejemplo 4: 
  //insertar(numeros, &longitud, 99, 2); 
  printf("\n\n"); 


  // mostramos contenido del array en pantalla 
  imprimir(numeros, longitud);
  
 
  return 0;
}
