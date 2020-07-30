#include <iostream>
#include <vector>
#include <string>

namespace algebra
{
	template <typename T>
	class Vertex;
	template <>
	class Vertex<int>
	{
	public:
		Vertex(std::vector<int> vertex);
		Vertex(unsigned int size);
	private:
		std::vector<int> vertex;
		unsigned int size;
	public: // setters and getters
		std::vector<int> get_vertex() const;
	};
	template <>
	class Vertex<double>
	{
	public:
		Vertex(std::vector<double> vertex);
		Vertex(unsigned int size);
	private:
		std::vector<double> vertex;
		unsigned int size;
	public: // setters and getters
		std::vector<double> get_vertex() const;
	};
	template <>
	class Vertex<float>
	{
	public:
		Vertex(std::vector<float> vertex);
		Vertex(unsigned int size);
	private:
		std::vector<float> vertex;
		unsigned int size;
	public: // setters and getters
		std::vector<float> get_vertex() const;
	};
}
/* overwrites Vertex<int> */
algebra::Vertex<int>::Vertex(std::vector<int> vertex)
	: vertex(vertex), size(vertex.size())
{}
algebra::Vertex<int>::Vertex(unsigned int size)
	: size(size)
{
	for (unsigned int i=0; i<size; i++)
		vertex.push_back(0);
}
std::vector<int> algebra::Vertex<int>::get_vertex() const
{
	return this->vertex;
}
/* overwrites Vertex<double> */
algebra::Vertex<double>::Vertex(std::vector<double> vertex)
	: vertex(vertex), size(vertex.size())
{}
algebra::Vertex<double>::Vertex(unsigned int size)
	: size(size)
{
	for (unsigned int i=0; i<size; i++)
		vertex.push_back(0);
}
std::vector<double> algebra::Vertex<double>::get_vertex() const
{
	return this->vertex;
}
/* overwrites Vertex<float> */
algebra::Vertex<float>::Vertex(std::vector<float> vertex)
	: vertex(vertex), size(vertex.size())
{}
algebra::Vertex<float>::Vertex(unsigned int size)
	: size(size)
{
	for (unsigned int i=0; i<size; i++)
		vertex.push_back(0);
}
std::vector<float> algebra::Vertex<float>::get_vertex() const
{
	return this->vertex;
}