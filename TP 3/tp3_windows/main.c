#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Aguirre.h"
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/



int main()
{
    int option = 0;

    LinkedList* listaEmpleados = ll_newLinkedList();
    do{

    	getInt(" \n  Menu de opciones: "
    			"\n 1. Cargar los datos de los empleados desde el archivo data.csv (modo texto)."
    			"\n 2. Cargar los datos de los empleados desde el archivo data.csv (modo binario)."
    			"\n 3. Alta de empleado."
    			"\n 4. Modificar datos de empleado."
    			"\n 5. Baja de empleado."
    			"\n 6. Listar empleados."
    			"\n 7. Ordenar empleados."
    			"\n 8. Guardar los datos de los empleados en el archivo data.csv (modo texto)."
    			"\n 9. Guardar los datos de los empleados en el archivo data.csv (modo binario)."
    			"\n 10. Salir."
    			"\n Ingresar la operacion que desea ejecutar: ", &option);

        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
            case 2:
            	puts("\nUsted ha elegido la opcion cargar los datos de los empleados desde el archivo data.csv (en modo binario).");
            	break;
            case 3:
            	puts("\nUsted ha seleccionado la opcion Alta empleado.");
            	break;
            case 4:
            	puts("\nUsted ha elegido la opcion modificar datos de empleado.");
            	break;
            case 5:
            	puts("\nUsted ha seleccionado la opcion baja de empleado.");
            	break;
            case 6:
            	puts("\nUsted ha seleccionado la opcion listar empleados.");
            	break;
            case 7:
            	puts("\nUsted ha seleccionado la opcion ordenar empleados.");
            	break;
            case 8:
            	puts("\nUsted ha seleccionado la opcion Guardar los datos de los empleados en el archivo data.csv (modo texto).");
            	break;
            case 9:
            	puts("\nUsted ha seleccionado la opcion Guardar los datos de los empleados en el archivo data.csv (modo binario).");
            	break;
            case 10:
            	puts("\nSaliendo del programa...");
            	break;
        }
        if(option<1 || option>10)
        {
        	puts("\nOpcion incorrecta, por favor, intente nuevamente.");
        }
        fflush(stdin);
        getchar();
        system("cls");
    }while(option != 10);
    return 0;
}

