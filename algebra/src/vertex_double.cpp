#include "../include/algebra/vertex/vertex_double.hpp"

algebra::Vertex<double>::Vertex(std::vector<double> vertex)
    : _vertex(vertex), _type(VertexType::HORIZONTAL)
{}
algebra::Vertex<double>::Vertex(unsigned int size)
    : _type(VertexType::HORIZONTAL)
{
    for (unsigned int i=0; i<size; i++)
        _vertex.push_back(0);
}

// private functions
void algebra::Vertex<double>::transpose()
{
    if (this->_type == VertexType::HORIZONTAL)
        _type = VertexType::VERTICAL;
    else
        _type = VertexType::HORIZONTAL;    
}
// public functions
void algebra::Vertex<double>::T()
{
    this->transpose();
}
std::vector<double> algebra::Vertex<double>::get_vertex() const
{
    return this->_vertex;
}
std::string algebra::Vertex<double>::get_type() const
{
    if (this->_type == VertexType::HORIZONTAL)
        return "horizontal";
    else
        return "vertical";
}
unsigned int algebra::Vertex<double>::size() const
{
    return this->_vertex.size();
}
void algebra::Vertex<double>::set_vertex(std::vector<double> vertex)
{
    this->_vertex = vertex;
}
void algebra::Vertex<double>::set_type(std::string type)
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

std::ostream& algebra::operator<<(std::ostream &os, Vertex<double> vertex)
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
// vertex additions
algebra::Vertex<double>& algebra::Vertex<double>::operator+=(const Vertex<int> &A)
{
    std::vector<double> vertex;
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
algebra::Vertex<double>& algebra::Vertex<double>::operator+=(const Vertex<double> &A)
{
    std::vector<double> vertex;
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
algebra::Vertex<double>& algebra::Vertex<double>::operator+=(const Vertex<float> &A)
{
    std::vector<double> vertex;
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
algebra::Vertex<double> algebra::operator+(Vertex<double> A, const Vertex<int> &B)
{
    A += B;
    return A;
}
algebra::Vertex<double> algebra::operator+(Vertex<double> A, const Vertex<double> &B)
{
    A += B;
    return A;
}
algebra::Vertex<double> algebra::operator+(Vertex<double> A, const Vertex<float> &B)
{
    A += B;
    return A;
}
// vertex subtractions
algebra::Vertex<double>& algebra::Vertex<double>::operator-=(const Vertex<int> &A)
{
    std::vector<double> vertex;
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
algebra::Vertex<double>& algebra::Vertex<double>::operator-=(const Vertex<double> &A)
{
    std::vector<double> vertex;
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
algebra::Vertex<double>& algebra::Vertex<double>::operator-=(const Vertex<float> &A)
{
    std::vector<double> vertex;
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
algebra::Vertex<double> algebra::operator-(Vertex<double> A, const Vertex<int> &B)
{
    A -= B;
    return A;
}
algebra::Vertex<double> algebra::operator-(Vertex<double> A, const Vertex<double> &B)
{
    A -= B;
    return A;
}
algebra::Vertex<double> algebra::operator-(Vertex<double> A, const Vertex<float> &B)
{
    A -= B;
    return A;
}
// Scala multiplication
algebra::Vertex<double>& algebra::Vertex<double>::operator*=(const int &x)
{
    std::vector<double> vertex;

    for (auto& v_n : this->_vertex)
        vertex.push_back(x * v_n);
    this->_vertex = vertex;
    return *this;
}
algebra::Vertex<double>& algebra::Vertex<double>::operator*=(const double &x)
{
    std::vector<double> vertex;

    for (auto& v_n : this->_vertex)
        vertex.push_back(x * v_n);
    this->_vertex = vertex;
    return *this;
}
algebra::Vertex<double>& algebra::Vertex<double>::operator*=(const float &x)
{
    std::vector<double> vertex;

    for (auto& v_n : this->_vertex)
        vertex.push_back(x * v_n);
    this->_vertex = vertex;
    return *this;
}
algebra::Vertex<double> algebra::operator*(Vertex<double> A, const int &x)
{
    A *= x;
    return A;
}
algebra::Vertex<double> algebra::operator*(Vertex<double> A, const double &x)
{
    A *= x;
    return A;
}
algebra::Vertex<double> algebra::operator*(Vertex<double> A, const float &x)
{
    A *= x;
    return A;
}