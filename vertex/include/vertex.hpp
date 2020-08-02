#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace algebra
{
	template <typename T>
	class Vertex; // not run
	template <>
	class Vertex<int>
	{
	public:
		Vertex(std::vector<int> vertex);
		Vertex(unsigned int size);
    private: // constant values!
        enum class VertexType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vertex
	private:
		std::vector<int> _vertex;
		VertexType _type; // for identifying horizontal vertex and vertical vertex
	private: // functions
	public: // setters and getters
		std::vector<int> get_vertex() const;
		std::string get_type() const;
		unsigned int size() const;
	public: // operators
        friend std::ostream& operator<<(std::ostream& os, Vertex<int>& vertex);
		friend Vertex<int> operator+(Vertex<int>& A, Vertex<int>& B);
        friend Vertex<int> operator-(Vertex<int>& A, Vertex<int>& B);
	};
	template <>
	class Vertex<double>
	{
	public:
		Vertex(std::vector<double> vertex);
		Vertex(unsigned int size);
    private: // constant values!
        enum class VertexType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vertex
	private:
		std::vector<double> _vertex;
		VertexType _type;  // for identifying horizontal vertex and vertical vertex
	private: // functions
	public: // setters and getters
		std::vector<double> get_vertex() const;
		std::string get_type() const;
		unsigned int size() const;
	public: // operators
        friend std::ostream& operator<<(std::ostream& os, Vertex<double>& vertex);
		friend Vertex<double> operator+(Vertex<double>& A, Vertex<double>& B);
        friend Vertex<double> operator-(Vertex<double>& A, Vertex<double>& B);
	};
	template <>
	class Vertex<float>
	{
	public:
		Vertex(std::vector<float> vertex);
		Vertex(unsigned int size);
    private: // constant values!
        enum class VertexType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vertex
	private:
		std::vector<float> _vertex;
		unsigned int _size;
		VertexType _type;  // for identifying horizontal vertex and vertical vertex
	public: // setters and getters
		std::vector<float> get_vertex() const;
		std::string get_type() const;
		unsigned int size() const;
	public: // operators
        friend std::ostream& operator<<(std::ostream& os, Vertex<float>& vertex);
		friend Vertex<float> operator+(Vertex<float>& A, Vertex<float>& B);
		friend Vertex<float> operator-(Vertex<float>& A, Vertex<float>& B);
	};
    template<typename T>
    std::ostream& operator<<(std::ostream& os, Vertex<T>& vertex);
    std::ostream& operator<<(std::ostream& os, Vertex<int>& vertex);
    std::ostream& operator<<(std::ostream& os, Vertex<double>& vertex);
    std::ostream& operator<<(std::ostream& os, Vertex<float>& vertex);
    template<typename T>
    Vertex<T> operator+(Vertex<T>& A, Vertex<T>& B);
    Vertex<int> operator+(Vertex<int>& A, Vertex<int>& B);
    Vertex<double> operator+(Vertex<double>& A, Vertex<double>& B);
    Vertex<float> operator+(Vertex<float>& A, Vertex<float>& B);
    template<typename T>
    Vertex<T> operator-(Vertex<T>& A, Vertex<T>& B);
    Vertex<int> operator-(Vertex<int>& A, Vertex<int>& B);
    Vertex<double> operator-(Vertex<double>& A, Vertex<double>& B);
    Vertex<float> operator-(Vertex<float>& A, Vertex<float>& B);
}