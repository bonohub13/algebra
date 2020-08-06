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
		void set_vertex(std::vector<int> vertex);
		void set_type(std::string type);
	public: // operators
        friend std::ostream& operator<<(std::ostream &os, Vertex<int> vertex);
		friend Vertex<int> operator+(Vertex<int> A, Vertex<int> B);
        friend Vertex<int> operator-(Vertex<int> A, Vertex<int> B);
		friend Vertex<int> operator*(Vertex<int> vertex, int x);
		friend Vertex<int> operator*(Vertex<int> vertex, double x);
		friend Vertex<int> operator*(Vertex<int> vertex, float x);
		friend Vertex<int> operator*(int x, Vertex<int> vertex);
		friend Vertex<int> operator*(double x, Vertex<int> vertex);
		friend Vertex<int> operator*(float x, Vertex<int> vertex);
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
		void set_vertex(std::vector<double> vertex);
		void set_type(std::string type);
	public: // operators
        friend std::ostream& operator<<(std::ostream &os, Vertex<double> vertex);
		friend Vertex<double> operator+(Vertex<double> A, Vertex<double> B);
        friend Vertex<double> operator-(Vertex<double> A, Vertex<double> B);
		friend Vertex<double> operator*(Vertex<double> vertex, int x);
		friend Vertex<double> operator*(Vertex<double> vertex, double x);
		friend Vertex<double> operator*(Vertex<double> vertex, float x);
		friend Vertex<double> operator*(int x, Vertex<double> vertex);
		friend Vertex<double> operator*(double x, Vertex<double> vertex);
		friend Vertex<double> operator*(float x, Vertex<double> vertex);
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
		void set_vertex(std::vector<float> vertex);
		void set_type(std::string type);
	public: // operators
        friend std::ostream& operator<<(std::ostream &os, Vertex<float> vertex);
		friend Vertex<float> operator+(Vertex<float> A, Vertex<float> B);
        friend Vertex<float> operator-(Vertex<float> A, Vertex<float> B);
		friend Vertex<float> operator*(Vertex<float> vertex, int x);
		friend Vertex<float> operator*(Vertex<float> vertex, double x);
		friend Vertex<float> operator*(Vertex<float> vertex, float x);
		friend Vertex<float> operator*(int x, Vertex<float> vertex);
		friend Vertex<float> operator*(double x, Vertex<float> vertex);
		friend Vertex<float> operator*(float x, Vertex<float> vertex);
	};
    template<typename T>
    std::ostream& operator<<(std::ostream& os, Vertex<T> vertex);
    std::ostream& operator<<(std::ostream& os, Vertex<int> vertex);
    std::ostream& operator<<(std::ostream& os, Vertex<double> vertex);
    std::ostream& operator<<(std::ostream& os, Vertex<float> vertex);
    template<typename T>
    Vertex<T> operator+(Vertex<T> A, Vertex<T> B);
    Vertex<int> operator+(Vertex<int> A, Vertex<int> B);
    Vertex<double> operator+(Vertex<double> A, Vertex<double> B);
    Vertex<float> operator+(Vertex<float> A, Vertex<float> B);
    template<typename T>
    Vertex<T> operator-(Vertex<T> A, Vertex<T> B);
    Vertex<int> operator-(Vertex<int> A, Vertex<int> B);
    Vertex<double> operator-(Vertex<double> A, Vertex<double> B);
    Vertex<float> operator-(Vertex<float> A, Vertex<float> B);
	template<typename T>
	Vertex<T> operator*(Vertex<T> vertex, int x);
	Vertex<int> operator*(Vertex<int> vertex, int x);
	Vertex<double> operator*(Vertex<double> vertex, int x);
	Vertex<float> operator*(Vertex<float> vertex, int x);
	template<typename T>
	Vertex<T> operator*(int x, Vertex<T> vertex);
	Vertex<int> operator*(int x, Vertex<int> vertex);
	Vertex<double> operator*(int x, Vertex<double> vertex);
	Vertex<float> operator*(int x, Vertex<float> vertex);
	template<typename T>
	Vertex<T> operator*(double x, Vertex<T> vertex);
	Vertex<int> operator*(double x, Vertex<int> vertex);
	Vertex<double> operator*(double x, Vertex<double> vertex);
	Vertex<float> operator*(double x, Vertex<float> vertex);
	template<typename T>
	Vertex<T> operator*(float x, Vertex<T> vertex);
	Vertex<int> operator*(float x, Vertex<int> vertex);
	Vertex<double> operator*(float x, Vertex<double> vertex);
	Vertex<float> operator*(float x, Vertex<float> vertex);
	template<typename T>
	Vertex<T> operator*(Vertex<T> vertex, double x);
	Vertex<int> operator*(Vertex<int> vertex, double x);
	Vertex<double> operator*(Vertex<double> vertex, double x);
	Vertex<float> operator*(Vertex<float> vertex, double x);
	template<typename T>
	Vertex<T> operator*(Vertex<T> vertex, float x);
	Vertex<int> operator*(Vertex<int> vertex, float x);
	Vertex<double> operator*(Vertex<double> vertex, float x);
	Vertex<float> operator*(Vertex<float> vertex, float x);
}
