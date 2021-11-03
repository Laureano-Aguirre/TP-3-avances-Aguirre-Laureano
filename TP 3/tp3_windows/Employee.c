#include <stdio.h>
#include <stdlib.h>
#include <Employee.h>

Employee* employee_new()
{
	Employee* nuevoEmpleado;
	nuevoEmpleado=(Employee*) malloc(sizeof(Employee));

	if(nuevoEmpleado!=NULL)
	{
		nuevoEmpleado->id=0;
		strcpy(nuevoEmpleado->nombre, " ");
		nuevoEmpleado->horasTrabajadas=0;
		nuevoEmpleado->sueldo=0;
	}

	return nuevoEmpleado;
}

Employee* employee_newParametrosString(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{
	Employee* nuevoEmpleado=NULL;
	nuevoEmpleado=(Employee*)malloc(sizeof(Employee));

	if(nuevoEmpleado!=NULL)
	{
		nuevoEmpleado->id=idStr;
		strcpy(nuevoEmpleado->nombre, nombreStr);
		nuevoEmpleado->horasTrabajadas=horasTrabajadasStr;
		nuevoEmpleado->sueldo=sueldoStr;
	}

	return nuevoEmpleado;
}

Employee* employee_newParametros(int idStr,char* nombreStr,int horasTrabajadasStr, int sueldoStr)
{
	Employee* nuevoEmpleado=NULL;
	nuevoEmpleado=(Employee*)malloc(sizeof(Employee));

	if(nuevoEmpleado!=NULL)
	{
		nuevoEmpleado->id=idStr;
		strcpy(nuevoEmpleado->nombre, nombreStr);
		nuevoEmpleado->horasTrabajadas=horasTrabajadasStr;
		nuevoEmpleado->sueldo=sueldoStr;
	}

	return nuevoEmpleado;
}
