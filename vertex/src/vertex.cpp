#include <iostream>
#include <vector>
#include <string>

#include "../include/vertex.hpp"

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

std::ostream& algebra::operator<<(std::ostream& os, algebra::Vertex<int>& vertex)
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
std::ostream& algebra::operator<<(std::ostream& os, algebra::Vertex<double>& vertex)
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
std::ostream& algebra::operator<<(std::ostream& os, algebra::Vertex<float>& vertex)
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
algebra::Vertex<int> algebra::operator+(algebra::Vertex<int>& A, algebra::Vertex<int>& B)
{
	std::vector<int> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] + B.get_vertex()[i]);
	}

	algebra::Vertex<int> output(output_vertex);
	
	return output;
}
algebra::Vertex<double> algebra::operator+(algebra::Vertex<double>& A, algebra::Vertex<double>& B)
{
	std::vector<double> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] + B.get_vertex()[i]);
	}

	algebra::Vertex<double> output(output_vertex);
	
	return output;
}
algebra::Vertex<float> algebra::operator+(algebra::Vertex<float>& A, algebra::Vertex<float>& B)
{
	std::vector<float> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] + B.get_vertex()[i]);
	}

	algebra::Vertex<float> output(output_vertex);
	
	return output;
}
algebra::Vertex<int> algebra::operator-(algebra::Vertex<int>& A, algebra::Vertex<int>& B)
{
	std::vector<int> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
	}

	Vertex<int> output(output_vertex);

	return output;
}
algebra::Vertex<double> algebra::operator-(algebra::Vertex<double>& A, algebra::Vertex<double>& B)
{
	std::vector<double> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
	}

	Vertex<double> output(output_vertex);

	return output;

}
algebra::Vertex<float> algebra::operator-(algebra::Vertex<float>& A, algebra::Vertex<float>& B)
{
	std::vector<float> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
	}

	Vertex<float> output(output_vertex);

	return output;
}
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
