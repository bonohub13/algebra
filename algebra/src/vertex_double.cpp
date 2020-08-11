#include "../include/algebra/vertex/vertex.hpp"

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
void algebra::Vertex<double>::operator+=(const Vertex<int> &A)
{
    std::vector<double> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<double>::operator+=(const Vertex<double>& A)
{
    std::vector<double> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<double>::operator+=(const Vertex<float>& A)
{
    std::vector<double> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
algebra::Vertex<double> algebra::Vertex<double>::operator+(const Vertex<int>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::Vertex<double>::operator+(const Vertex<double>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::Vertex<double>::operator+(const Vertex<float>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::operator+(const Vertex<int> &A, const Vertex<double> &B)
{
    std::vector<double> vertex;

    if (A.size() == B.size() && A.get_type() == B.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i]+B.get_vertex()[i]);
    }

    Vertex<double> output(vertex);
    output.set_type(A.get_type());

    return output;
}
algebra::Vertex<double> algebra::operator+(const Vertex<float> &A, const Vertex<double> &B)
{
    std::vector<double> vertex;

    if (A.size() == B.size() && A.get_type() == B.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i]+B.get_vertex()[i]);
    }

    Vertex<double> output(vertex);
    output.set_type(A.get_type());

    return output;
}
// vertex subtractions
void algebra::Vertex<double>::operator-=(const Vertex<int>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<double>::operator-=(const Vertex<double>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<double>::operator-=(const Vertex<float>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
algebra::Vertex<double> algebra::Vertex<double>::operator-(const Vertex<int>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::Vertex<double>::operator-(const Vertex<double>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::Vertex<double>::operator-(const Vertex<float>& A)
{
    std::vector<double> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::operator-(const Vertex<int> &A, const Vertex<double> &B)
{
    std::vector<double> vertex;
    
    if (A.size() == B.size() && A.get_type() == B.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
    }

    Vertex<double> output(vertex);
    output.set_type(A.get_type());

    return output;
}
algebra::Vertex<double> algebra::operator-(const Vertex<float> &A, const Vertex<double> &B)
{
    std::vector<double> vertex;
    
    if (A.size() == B.size() && A.get_type() == B.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
    }

    Vertex<double> output(vertex);
    output.set_type(A.get_type());

    return output;
}
// Scala multiplications
void algebra::Vertex<double>::operator*=(const int &x)
{
    std::vector<double> vertex;

    for (const auto& a : this->get_vertex())
        vertex.push_back(x * a);

    this->_vertex = vertex;
}
void algebra::Vertex<double>::operator*=(const double &x)
{
    std::vector<double> vertex;

    for (const auto& a : this->get_vertex())
        vertex.push_back(x * a);

    this->_vertex = vertex;
}
void algebra::Vertex<double>::operator*=(const float &x)
{
    std::vector<double> vertex;

    for (const auto& a : this->get_vertex())
        vertex.push_back(x * a);

    this->_vertex = vertex;
}
algebra::Vertex<double> algebra::Vertex<double>::operator*(const int &x)
{
    std::vector<double> vertex;

    for (const auto &a : this->get_vertex())
        vertex.push_back(x * a);

    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::Vertex<double>::operator*(const double &x)
{
    std::vector<double> vertex;

    for (const auto &a : this->get_vertex())
        vertex.push_back(x * a);

    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::Vertex<double>::operator*(const float &x)
{
    std::vector<double> vertex;

    for (const auto &a : this->get_vertex())
        vertex.push_back(x * a);

    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::operator*(const int &x, const Vertex<double> &A)
{
    std::vector<double> vertex;

    for (const auto &a : A.get_vertex())
        vertex.push_back(x * a);

    auto output = A;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::operator*(const double &x, const Vertex<double> &A)
{
    std::vector<double> vertex;

    for (const auto &a : A.get_vertex())
        vertex.push_back(x * a);

    auto output = A;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<double> algebra::operator*(const float &x, const Vertex<double> &A)
{
    std::vector<double> vertex;

    for (const auto &a : A.get_vertex())
        vertex.push_back(x * a);

    auto output = A;
    output.set_vertex(vertex);

    return output;
}