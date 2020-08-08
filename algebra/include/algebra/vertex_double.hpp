#pragma once

namespace algebra
{
	template <typename T>
	class Vertex; // not run
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
        void operator+=(const Vertex<int>& A);
        void operator+=(const Vertex<double>& A);
        void operator+=(const Vertex<float>& A);
        friend std::ostream& operator<<(std::ostream &os, Vertex<double> vertex);
        friend Vertex<double> operator+(const Vertex<double> &A, const Vertex<int> &B);
        friend Vertex<double> operator+(const Vertex<double> &A, const Vertex<double> &B);
        friend Vertex<double> operator+(const Vertex<double> &A, const Vertex<float> &B);
	};
    std::ostream& operator<<(std::ostream& os, Vertex<double> vertex);
    Vertex<double> operator+(const Vertex<double> &A, const Vertex<int> &B);
    Vertex<double> operator+(const Vertex<double> &A, const Vertex<double> &B);
    Vertex<double> operator+(const Vertex<double> &A, const Vertex<float> &B);
}