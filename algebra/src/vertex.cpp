#include "../include/algebra/vertex.hpp"

#include "vertex_int.cpp"
#include "vertex_double.cpp"
#include "vertex_float.cpp"

/* ----- Features to add ---------------
* Constructors that takes in different types of Vertex and converts them into a different Vertex
    * ex1) algebra::Vertex<double>(const Vertex<int> &vertex);
    * ex2) algebra::Vertex<float>(const std::vector<double> &vertex);
* Make the same for setters for each Vertex
    * ex) algebra::Vertex<double>::set_vertex(const std::vector<float> &vertex);
*/