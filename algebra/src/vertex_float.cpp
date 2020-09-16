#include "../include/algebra/vertex/vertex_float.hpp"

algebra::Vertex<float>::Vertex(std::vector<float> vertex)
    : _vertex(vertex), _type(VertexType::HORIZONTAL)
{}
algebra::Vertex<float>::Vertex(unsigned int size)
    : _type(VertexType::HORIZONTAL)
{
    for (unsigned int i=0; i<size; i++)
        _vertex.push_back(0);
}

// private functions
void algebra::Vertex<float>::transpose()
{
    if (this->_type == VertexType::HORIZONTAL)
        _type = VertexType::VERTICAL;
    else
        _type = VertexType::HORIZONTAL;    
}
// public functions
void algebra::Vertex<float>::T()
{
    this->transpose();
}
std::vector<float> algebra::Vertex<float>::get_vertex() const
{
    return this->_vertex;
}
std::string algebra::Vertex<float>::get_type() const
{
    if (this->_type == VertexType::HORIZONTAL)
        return "horizontal";
    else
        return "vertical";
}
unsigned int algebra::Vertex<float>::size() const
{
    return this->_vertex.size();
}
void algebra::Vertex<float>::set_vertex(std::vector<float> vertex)
{
    this->_vertex = vertex;
}
void algebra::Vertex<float>::set_type(std::string type)
{
    if (type == "horizontal" || type == "vertical")
    {
        if (type == "horizontal")
            this->_type = VertexType::HORIZONTAL;
        else
            this->_type = VertexType::VERTICAL;		
    }
    else
    {
        throw std::invalid_argument("Argument \"type\" excepts either \"horizontal\" or \"vertical\"");
    }
}

std::ostream& algebra::operator<<(std::ostream &os, Vertex<float> vertex)
{
    if (vertex.get_type() == "horizontal")
    {
        for (unsigned int i=0; i<vertex.size(); i++)
        {
            if (i == 0)
                os << "[" << vertex.get_vertex()[i] << ", ";
            else if (i+1 == vertex.size())
                os << vertex.get_vertex()[i] << "]";
            else
                os << vertex.get_vertex()[i] << ", ";			
        }
    }
    else
    {
        for (unsigned int i=0; i<vertex.size(); i++)
        {
            if (i == 0)
                os << "[\n " << vertex.get_vertex()[i] << ",";
            else if (i+1 == vertex.size())
                os << " " << vertex.get_vertex()[i] << "]";
            else
                os << " " << vertex.get_vertex()[i] << ", ";
        }
    }
    
    return os;
}
float& algebra::Vertex<float>::operator[](std::size_t n)
{
    return _vertex[n];
}
// vertex additions
algebra::Vertex<float>& algebra::Vertex<float>::operator+=(const Vertex<int> &A)
{
    std::vector<float> vertex;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
        this->_vertex = vertex;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vertex<float>& algebra::Vertex<float>::operator+=(const Vertex<double> &A)
{
    std::vector<float> vertex;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
        this->_vertex = vertex;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vertex<float>& algebra::Vertex<float>::operator+=(const Vertex<float> &A)
{
    std::vector<float> vertex;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
        this->_vertex = vertex;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vertex<float> algebra::operator+(Vertex<float> A, const Vertex<int> &B)
{
    A += B;
    return A;
}
algebra::Vertex<float> algebra::operator+(Vertex<float> A, const Vertex<double> &B)
{
    A += B;
    return A;
}
algebra::Vertex<float> algebra::operator+(Vertex<float> A, const Vertex<float> &B)
{
    A += B;
    return A;
}
// vertex subtractions
algebra::Vertex<float>& algebra::Vertex<float>::operator-=(const Vertex<int> &A)
{
    std::vector<float> vertex;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
        this->_vertex = vertex;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vertex<float>& algebra::Vertex<float>::operator-=(const Vertex<double> &A)
{
    std::vector<float> vertex;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
        this->_vertex = vertex;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vertex<float>& algebra::Vertex<float>::operator-=(const Vertex<float> &A)
{
    std::vector<float> vertex;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
        this->_vertex = vertex;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vertex<float> algebra::operator-(Vertex<float> A, const Vertex<int> &B)
{
    A -= B;
    return A;
}
algebra::Vertex<float> algebra::operator-(Vertex<float> A, const Vertex<double> &B)
{
    A -= B;
    return A;
}
algebra::Vertex<float> algebra::operator-(Vertex<float> A, const Vertex<float> &B)
{
    A -= B;
    return A;
}
// Scala multiplication
algebra::Vertex<float>& algebra::Vertex<float>::operator*=(const int &x)
{
    std::vector<float> vertex;

    for (auto& v_n : this->_vertex)
        vertex.push_back(x * v_n);
    this->_vertex = vertex;
    return *this;
}
algebra::Vertex<float>& algebra::Vertex<float>::operator*=(const double &x)
{
    std::vector<float> vertex;

    for (auto& v_n : this->_vertex)
        vertex.push_back(x * v_n);
    this->_vertex = vertex;
    return *this;
}
algebra::Vertex<float>& algebra::Vertex<float>::operator*=(const float &x)
{
    std::vector<float> vertex;

    for (auto& v_n : this->_vertex)
        vertex.push_back(x * v_n);
    this->_vertex = vertex;
    return *this;
}
algebra::Vertex<float> algebra::operator*(Vertex<float> A, const int &x)
{
    A *= x;
    return A;
}
algebra::Vertex<float> algebra::operator*(Vertex<float> A, const double &x)
{
    A *= x;
    return A;
}
algebra::Vertex<float> algebra::operator*(Vertex<float> A, const float &x)
{
    A *= x;
    return A;
}