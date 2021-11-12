/**
 * @file Grafo.h
 * @version 5.0
 * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
 * @brief Contiene diversas funciones para el manejo de grafos, en la que especialmente se utiliza
 * "PrimeroMejor" la cual proporciona la ruta mas corta a seguir el costo total de la ruta y el costo minimo de la misma
 */
#ifndef GRAFO_H
#define GRAFO_H
#include <iostream>

using namespace std;

class Arista;

class Vertice{
    Vertice *sig;
    Arista *ady;
    string nombre;
    friend class Grafo;
};

class Arista{
    Arista *sig;
    Vertice *ady;
    int peso;
    friend class Grafo;
};

class Grafo
{
    Vertice *h;
public:
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Inicializa el grafo
     */
    void Inicializa();
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Dice si el grafo se encuentra vacio
     */
    bool Vacio();
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Proporciona el tamaño del grafo
     */
    int Tamano();
    Vertice *GetVertice(string nombre);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Inserta una Arista al grafo
     * @param origen Origen de la arista
     * @param destino Destino de la arista
     * @param int Costo de la arista
     */
    void InsertaArista(Vertice *origen, Vertice *destino, int peso);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Inserta un vertice al grafo
     * @param nombre Nombre que se le quiere dar al vertice
     */
    void InsertaVertice(string nombre);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Proporciona una lista de Adyacencia (Lista de las aristas del grafo)
     */
    void ListaAdyacencia();
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Elimina una arista del grafo
     * @param origen Origen de la arista que desea eliminar
     * @param destino Destino de la arista que desea eliminar
     */
    void EliminarArista(Vertice *origen, Vertice *destino);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Anula o elimina el grafo
     */
    void Anular();
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Elimina un vertice del grafo
     * @param vert Nombre del vertice que se desea eliminar
     */
    void EliminarVertice(Vertice *vert);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Realiza un recorrido en anchura del grafo
     * @param origen Vertice desde donde inicia
     */
    void RecorridoAnchura(Vertice *origen);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Realiza un recorrido en profundidad del grafo
     * @param origen Vertice desde donde inicia
     */
    void RecorridoProfundidad(Vertice *origen);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Proporciona la mejor ruta en anchura entres dos vertices
     * @param origen Vertice desde donde inicia
     * @param destino Vertice desde donde finaliza
     */
    void PrimeroAnchura(Vertice *origen, Vertice *destino);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Proporciona la mejor ruta en profundida entres dos vertices
     * @param origen Vertice desde donde inicia
     * @param destino Vertice desde donde finaliza
     */
    void PrimeroProfundidad(Vertice *origen, Vertice *destino);
    /**
     * @authors Garzona Moya Irene, Rodriguez Hernández Olman Isaac
     * @brief Proporciona la mejor ruta entres dos vertices, ademas de
     * dar el costo total de la ruta y el costo minimo de la misma
     * @param origen Vertice desde donde inicia
     * @param destino Vertice desde donde finaliza
     */
    void PrimeroMejor(Vertice *origen, Vertice *destino);



};
#endif // GRAFO_H
