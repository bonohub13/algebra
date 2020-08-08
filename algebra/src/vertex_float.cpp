#include "../include/algebra/vertex.hpp"

algebra::Vertex<float>::Vertex(std::vector<float> vertex)
    : _vertex(vertex), _type(VertexType::HORIZONTAL)
{}
algebra::Vertex<float>::Vertex(unsigned int size)
    : _type(VertexType::HORIZONTAL)
{
    for (unsigned int i=0; i<size; i++)
        _vertex.push_back(0);
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
    if (type == "horizontal" && type == "vertical")
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

void algebra::Vertex<float>::operator+=(const Vertex<int> &A)
{
    std::vector<float> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<float>::operator+=(const Vertex<double>& A)
{
    std::vector<float> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<float>::operator+=(const Vertex<float>& A)
{
    std::vector<float> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<float>::operator-=(const Vertex<int>& A)
{
    std::vector<float> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<float>::operator-=(const Vertex<double>& A)
{
    std::vector<float> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<float>::operator-=(const Vertex<float>& A)
{
    std::vector<float> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }

    this->_vertex = vertex;
}
algebra::Vertex<float> algebra::Vertex<float>::operator+(const Vertex<int> &A)
{
    std::vector<float> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<float> algebra::Vertex<float>::operator+(const Vertex<double> &A)
{
    std::vector<float> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<float> algebra::Vertex<float>::operator+(const Vertex<float> &A)
{
    std::vector<float> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(this->get_vertex()[i] + A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<float> algebra::Vertex<float>::operator-(const Vertex<int>& A)
{
    std::vector<float> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<float> algebra::Vertex<float>::operator-(const Vertex<double>& A)
{
    std::vector<float> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
}
algebra::Vertex<float> algebra::Vertex<float>::operator-(const Vertex<float>& A)
{
    std::vector<float> vertex;

    if (this->size() == A.size() && this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<size(); i++)
            vertex.push_back(this->get_vertex()[i] - A.get_vertex()[i]);
    }
    auto output = *this;
    output.set_vertex(vertex);

    return output;
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
algebra::Vertex<float> algebra::operator+(const Vertex<int> &A, const Vertex<float> &B)
{
    std::vector<float> vertex;

    if (A.size() == B.size() && A.get_type() == B.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] + B.get_vertex()[i]);
    }

    Vertex<float> output(vertex);
    output.set_type(A.get_type());

    return output;
}
algebra::Vertex<float> algebra::operator+(const Vertex<double> &A, const Vertex<float> &B)
{
    std::vector<float> vertex;

    if (A.size() == B.size() && A.get_type() == B.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] + B.get_vertex()[i]);
    }

    Vertex<float> output(vertex);
    output.set_type(A.get_type());

    return output;
}
algebra::Vertex<float> algebra::operator-(const Vertex<int> &A, const Vertex<float> &B)
{
    std::vector<float> vertex;

    if (A.size() == B.size() && A.get_type() == B.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
    }

    Vertex<float> output(vertex);
    output.set_type(A.get_type());

    return output;
}
algebra::Vertex<float> algebra::operator-(const Vertex<double> &A, const Vertex<float> &B)
{
    std::vector<float> vertex;

    if (A.size() == B.size() && A.get_type() == B.get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
    }

    Vertex<float> output(vertex);
    output.set_type(A.get_type());

    return output;
}