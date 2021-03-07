#include<iostream> //Biblioteca estándar de entrada y salida de datos
#include<string.h> //Librería para macros, constantes y operaciones en memoria
#include<locale.h> //Librería estándar de regionalización
#define max 5 //Definimos la macro

using namespace std; //Acceso al espacio de nombres

int push(char stack[max][80], int *top, char data[80])
{
      if(*top == max -1)
            return(-1);
      else
      {
            *top = *top + 1;
            strcpy(stack[*top], data);
            return(1);
      }
}
int pop(char stack[max][80], int *top, char data[80])
{
      if(*top == -1)
            return(-1);
      else
      {
            strcpy(data, stack[*top]);
            *top = *top - 1;
            return(1);
      }
}


int main()
{
	  setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería estándar y le asignamos el valor: "español" 
      char stack[max][80], nombres_pila[80];
      int top,ch,reply;
      int i;
      top = -1;  	// Iniciamos la pila
      cout<<"\tMENU"; //Imprimimos en pantalla
      cout<<"\n******************************************\n"; //Imprimimos en pantalla
      cout<<"      1. Extraer un nombre\n"; //Imprimimos en pantalla
      cout<<"      2. Agregar 4 nombres\n"; //Imprimimos en pantalla
      cout<<"      3. Extraer 2 nombres\n"; //Imprimimos en pantalla
      cout<<"      4. Extraer 3 nombres \n"; //Imprimimos en pantalla
      cout<<"      5. Salir\n"; //Imprimimos en pantalla
      cout<<"*********************************************\n"; //Imprimimos en pantalla
      while(1)
      {
            printf("Elige una opcion : ");
            scanf("%d", &ch); //Contador de número
            switch (ch)
            {
                  case 1 : // pop para extraer 1 nombre
                        reply = pop(stack,  &top,nombres_pila);
                        if(reply == -1)
                              printf("\n La pila esta vacia \n"); //Imprimimos en pantalla
                        else
                              printf("La cadena extraida es : %s\n",nombres_pila);
                              printf("\n");
                  break;
                  case 2 : // push para insertar 4 nombres
                   i=1;
                  	while(i<5){
                        printf("\nIngresa %d nombre : ",i);
                        scanf("%s",nombres_pila); //Cadena de caracteres
                        reply = push(stack,&top,nombres_pila);
                        if(reply == -1)
                              printf("\n La pila está llena.\n"); //Imprimimos en pantalla
                        else
                              printf("'%s' se almacenó en la pila.\n\n",nombres_pila); //Imprimir en pantalla el valor almecanado
                		i++; //Operador de incremento
						}
                  break;
                  case 3: // pop para extraer 2 nombres
                    i=1;
                  	while(i<3){
                        reply = pop(stack,  &top,nombres_pila);
                        if(reply == -1)
                              printf("\n La pila esta vacia \n");
                        else
                              printf("La cadena extraída es : %s\n",nombres_pila);
                              printf("\n");
                      i++;  //Operador de incremento     
                          }
                  break;
                  case 4 : // pop para extraer 3 nombres
                    i=1;
                  	while(i<4){
                        reply = pop(stack,  &top,nombres_pila);
                        if(reply == -1)
                              printf("\n La pila esta vacia \n");
                        else
                              printf("La cadena extraída es : %s\n",nombres_pila);
                              printf("\n");
                    	i++; //Operador de incremento
                          }
                  break;
                  case 5 : //Salir del programa
                        exit(0); //Indicamos la finalización del programa exitosa
                  break;      
                  default: 
                        printf("Operacion no valida \n"); //Imprimimos en pantalla
            } 
      }
      return 0;
}

