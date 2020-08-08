#include "../include/algebra/vertex.hpp"

algebra::Vertex<double>::Vertex(std::vector<double> vertex)
	: _vertex(vertex), _type(VertexType::HORIZONTAL)
{}
algebra::Vertex<double>::Vertex(unsigned int size)
	: _type(VertexType::HORIZONTAL)
{
	for (unsigned int i=0; i<size; i++)
		_vertex.push_back(0);
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

void algebra::Vertex<double>::operator+=(const Vertex<int> &A)
{
    std::vector<double> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] + this->get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<double>::operator+=(const Vertex<double>& A)
{
    std::vector<double> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] + this->get_vertex()[i]);
    }

    this->_vertex = vertex;
}
void algebra::Vertex<double>::operator+=(const Vertex<float>& A)
{
    std::vector<double> vertex;
    if (A.size() == this->size() && A.get_type() == this->get_type())
    {
        for (unsigned int i=0; i<A.size(); i++)
            vertex.push_back(A.get_vertex()[i] + this->get_vertex()[i]);
    }

    this->_vertex = vertex;
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
algebra::Vertex<double> algebra::operator+(const Vertex<double> &A, const Vertex<int> &B)
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
algebra::Vertex<double> algebra::operator+(const Vertex<double> &A, const Vertex<double> &B)
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
algebra::Vertex<double> algebra::operator+(const Vertex<double> &A, const Vertex<float> &B)
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