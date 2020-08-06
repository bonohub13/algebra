#include "../include/algebra/vertex.hpp"

/* constructors */
algebra::Vertex<int>::Vertex(std::vector<int> vertex)
	: _vertex(vertex), _type(VertexType::HORIZONTAL)
{}
algebra::Vertex<double>::Vertex(std::vector<double> vertex)
	: _vertex(vertex), _type(VertexType::HORIZONTAL)
{}
algebra::Vertex<float>::Vertex(std::vector<float> vertex)
	: _vertex(vertex), _type(VertexType::HORIZONTAL)
{}
algebra::Vertex<int>::Vertex(unsigned int size)
	: _type(VertexType::HORIZONTAL)
{
	for (unsigned int i=0; i<size; i++)
		_vertex.push_back(0);
}
algebra::Vertex<double>::Vertex(unsigned int size)
	: _type(VertexType::HORIZONTAL)
{
	for (unsigned int i=0; i<size; i++)
		_vertex.push_back(0);
}
algebra::Vertex<float>::Vertex(unsigned int size)
	: _type(VertexType::HORIZONTAL)
{
	for (unsigned int i=0; i<size; i++)
		_vertex.push_back(0);
}
/* private member functions here! */

/* public member functions here! */

std::vector<int> algebra::Vertex<int>::get_vertex() const
{
	return this->_vertex;
}
std::vector<double> algebra::Vertex<double>::get_vertex() const
{
	return this->_vertex;
}
std::vector<float> algebra::Vertex<float>::get_vertex() const
{
	return this->_vertex;
}
std::string algebra::Vertex<int>::get_type() const
{
	if (this->_type == VertexType::HORIZONTAL)
		return "horizontal";
	else
		return "vertical";
}
std::string algebra::Vertex<double>::get_type() const
{
	if (this->_type == VertexType::HORIZONTAL)
		return "horizontal";
	else
		return "vertical";
}
std::string algebra::Vertex<float>::get_type() const
{
	if (this->_type == VertexType::HORIZONTAL)
		return "horizontal";
	else
		return "vertical";
}
unsigned int algebra::Vertex<int>::size() const
{
	return this->_vertex.size();
}
unsigned int algebra::Vertex<double>::size() const
{
	return this->_vertex.size();
}
unsigned int algebra::Vertex<float>::size() const
{
	return this->_vertex.size();
}
void algebra::Vertex<int>::set_vertex(std::vector<int> vertex)
{
	this->_vertex = vertex;
}
void algebra::Vertex<double>::set_vertex(std::vector<double> vertex)
{
	this->_vertex = vertex;
}
void algebra::Vertex<float>::set_vertex(std::vector<float> vertex)
{
	this->_vertex = vertex;
}
void algebra::Vertex<int>::set_type(std::string type)
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
