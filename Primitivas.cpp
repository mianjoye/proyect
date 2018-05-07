#include <Iostream> 
#include <string>
#include "actor.h"
#include "cliente.h"
#include "genero.h"
#include "oscar.h"
#include "pelicula.h"
#include "productor.h"

template<class T>
T* Busqueda(int codigo,t* lista){
  	 	If (*lista!=NULL){
	   While(lista->codigo!=codigo){
	   	lista=lista->sig;
	   }
	   return lista;
	} 	
	
}

template<class T>
T* eliminar(int codigo, T*&lista){
    T* aux = lista; 
    T* aux1 = lista; 
    if ( aux!= nullptr ) {
        while( aux1->codigo!=codigo )||( aux1->sig==nullptr ){ 
         aux1=aux;
         aux=aux->sig;
        }
     aux1->sig=aux->sig;
     delete(aux);
    }
	
}

template<class T>
void agrega(T* lista, T nuevo)
{
    T* aux = lista;
    if ( lista != nullptr ) {
        while ( aux!->sig != nullptr ) {
            aux = aux->sig;
        }
        aux->sig = new T;
        aux->(*sig)=nuevo;
    }else {
    	lista= new T*;
    	lista= nuevo; 
	}
}

 agregar_cliente(nodo<clientes>* cliente)
{
    nodo<clientes> temp;
    std::cout << "numero del codigo\n";
    std::cin >> temp.dato.codigo;

    std::cout <<"nombre del Cliente\n";
    std::cin >> temp.dato.nombre;

    std::cout <<"numero de Compras\n";
    std::cin >> temp.dato.num_compras;
    
    if( temp.dato.num_compras<3 ){
      temp.dato.tipo ="esporadico";
    }else if ( temp.dato.num_compras>=3 )&&( temp.dato.num_compras<5 ){
        temp.dato.tipo ="medio";
    }else if (temp.dato.num_compras>=5){
        temp.dato.tipo = "recurrente";
    }
    
    temp.dato.sig = nullptr;
    agregar<cliente>(clientes, temp)
}

agregar_pelicula(nodo<pelicula>* pelicula){
    nodo<pelicula> temp;
    std::cout << "numero del codigo\n";
    std::cin >> temp.dato.codigo;

    std::cout <<"nombre del Titulo\n";
    std::cin >> temp.dato.titulo;

    std::cout <<"numero de lanzamiento\n";
    std::cin >> temp.dato.lanzamiento;

    std::cout << "numero del duracion\n";
    std::cin >> temp.dato.duracion;

    std::cout <<"nombre del costo\n";
    std::cin >> temp.dato.costo;

    temp.dato.sig = nullptr;
    temp.dato.principal = nullptr;
    temp.dato.sec = nullptr;
    temp.dato.prod = nullptr;
    agregar<pelicula>(pelicula, temp);
}

agregar_genero (nodo<genero>* genero){
    nodo<genero> temp;
    std::cout << "Nombre del Genero\n";
    std::cin >> temp.dato.tipo;
    temp.dato.sig = nullptr;
    agregar<genero>(genero, temp);
}

agregar_actor (nodo<actor>* actor){
    nodo<actor> temp;

   std::cout << "Indica el Codigo\n";
   std::cin >> temp.dato.codigo;

   std::cout << "Indica el Nombre del actor\n";
   std::cin >> temp.dato.nombre;
   
   std::cout << "Indica su nacionalidad\n";
   std::cin >> temp.dato.nacionalidad;

   temp.dato.gen= nullptr;
   
   std::cout <<"Indica el Sexo con F/M \n";
   std::cin >>temp.dato.sexo; 

   temp.dato.oscar= nullptr;
}

agregar_productor(nodo<productor>* productor){
    nodo<productor> temp;

    std::cout <<"Indica el codigo\n";
    std::cin >>temp.dato.codigo;

    std::cout <<"Indica el Nombre del Productor\n";
    std::cin >>temp.dato.nombre;

    std::cout <<"Indica la Nacionalidad\n";
    std::cin >>temp.dato.nacionalidad;

    temp.dato.gen =nullptr;
}

agregar_oscar(nodo<oscar>* oscar){
    nodo<oscar> temp;

    std::cout <<"Indica el Codigo\n";
    std::cin >>temp.dato.codigo;

    std::cout <<"Indica la Fecha\n";
    std::cin >>tem.dato.fecha;
    
    std::cout <<"Indica el Lugar\n";
    std::cin >>temp.dato.lugar;

    temp.dato.sig=nullptr;

}



