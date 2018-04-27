/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    int opcion;
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);
    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);



 printf("respuesta: ")
 scanf("")

switch(opcion){
case 1:
{
     mostrarListaSeries(listaDeSeries, TAMSERIE);
     break;
}
case 2:
{
        mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
        break;
}
case 3:
    {
        mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO, listaDeSeries, TAMSERIE);
        break;
    }
case 4:
    {
        mostrarSerieConUsuario(listaDeSeries,TAMUSUARIO,listaDeUsuarios,TAMSERIE);
        break;
    }




}




    return 0;
}
