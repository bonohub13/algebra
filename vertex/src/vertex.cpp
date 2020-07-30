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
		std::vector<int> get_vertex();
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
		std::vector<double> get_vertex();
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
		std::vector<float> get_vertex();
	};
}
/* overwrites Vertex<int> */
typename <>
algebra::Vertex<int>::Vertex(std::vector<int> vertex)
	: vertex(vertex), size(vertex.size())
{}
typename <>
algebra::Vertex<int>::Vertex(unsigned int size)
	: size(size)
{
	for (unsigned int i=0; i<size; i++)
		vertex.push_back(0);
}
/* overwrites Vertex<double> */
typename <>
algebra::Vertex<double>::Vertex(std::vector<double> vertex)
	: vertex(vertex), size(vertex.size())
{}
typename <>
algebra::Vertex<double>::Vertex(unsigned int size)
	: size(size)
{
	for (unsigned int i=0; i<size; i++)
		vertex.push_back(0);
}
/* overwrites Vertex<float> */
typename <>
algebra::Vertex<float>::Vertex(std::vector<float> vertex)
	: vertex(vertex), size(vertex.size())
{}
typename <>
algebra::Vertex<float>::Vertex(unsigned int size)
	: size(size)
{
	for (unsigned int i=0; i<size; i++)
		vertex.push_back(0);
}