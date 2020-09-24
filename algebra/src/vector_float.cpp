#include "../include/algebra/vector/vector_float.hpp"

algebra::Vector<float>::Vector(std::vector<float> vector)
    : _vector(vector), _type(VectorType::HORIZONTAL)
{}
algebra::Vector<float>::Vector(unsigned int size)
    : _type(VectorType::HORIZONTAL)
{
    for (unsigned int i=0; i<size; i++)
        _vector.push_back(0);
}

// private functions
void algebra::Vector<float>::transpose()
{
    if (this->_type == VectorType::HORIZONTAL)
        _type = VectorType::VERTICAL;
    else
        _type = VectorType::HORIZONTAL;    
}
// public functions
void algebra::Vector<float>::T()
{
    this->transpose();
}
std::vector<float> algebra::Vector<float>::get_vector() const
{
    return this->_vector;
}
std::string algebra::Vector<float>::get_type() const
{
    if (this->_type == VectorType::HORIZONTAL)
        return "horizontal";
    else
        return "vertical";
}
unsigned int algebra::Vector<float>::size() const
{
    return this->_vector.size();
}
void algebra::Vector<float>::set_vector(std::vector<float> vector)
{
    this->_vector = vector;
}
void algebra::Vector<float>::set_type(std::string type)
{
    if (type == "horizontal" || type == "vertical")
    {
        if (type == "horizontal")
            this->_type = VectorType::HORIZONTAL;
        else
            this->_type = VectorType::VERTICAL;		
    }
    else
    {
        throw std::invalid_argument("Argument \"type\" excepts either \"horizontal\" or \"vertical\"");
    }
}

std::ostream& algebra::operator<<(std::ostream &os, Vector<float> vector)
{
    if (vector.get_type() == "horizontal")
    {
        for (unsigned int i=0; i<vector.size(); i++)
        {
            if (i == 0)
                os << "[" << vector.get_vector()[i] << ", ";
            else if (i+1 == vector.size())
                os << vector.get_vector()[i] << "]";
            else
                os << vector.get_vector()[i] << ", ";			
        }
    }
    else
    {
        for (unsigned int i=0; i<vector.size(); i++)
        {
            if (i == 0)
                os << "[\n " << vector.get_vector()[i] << ",";
            else if (i+1 == vector.size())
                os << " " << vector.get_vector()[i] << "]";
            else
                os << " " << vector.get_vector()[i] << ", ";
        }
    }
    
    return os;
}
float& algebra::Vector<float>::operator[](std::size_t n)
{
    return _vector[n];
}
// vector additions
algebra::Vector<float>& algebra::Vector<float>::operator+=(const Vector<int> &A)
{
    std::vector<float> vector;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vector.push_back(this->get_vector()[i] + A.get_vector()[i]);
        this->_vector = vector;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vector<float>& algebra::Vector<float>::operator+=(const Vector<double> &A)
{
    std::vector<float> vector;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vector.push_back(this->get_vector()[i] + A.get_vector()[i]);
        this->_vector = vector;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vector<float>& algebra::Vector<float>::operator+=(const Vector<float> &A)
{
    std::vector<float> vector;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vector.push_back(this->get_vector()[i] + A.get_vector()[i]);
        this->_vector = vector;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vector<float> algebra::operator+(Vector<float> A, const Vector<int> &B)
{
    A += B;
    return A;
}
algebra::Vector<float> algebra::operator+(Vector<float> A, const Vector<double> &B)
{
    A += B;
    return A;
}
algebra::Vector<float> algebra::operator+(Vector<float> A, const Vector<float> &B)
{
    A += B;
    return A;
}
// vector subtractions
algebra::Vector<float>& algebra::Vector<float>::operator-=(const Vector<int> &A)
{
    std::vector<float> vector;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vector.push_back(this->get_vector()[i] - A.get_vector()[i]);
        this->_vector = vector;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vector<float>& algebra::Vector<float>::operator-=(const Vector<double> &A)
{
    std::vector<float> vector;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vector.push_back(this->get_vector()[i] - A.get_vector()[i]);
        this->_vector = vector;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vector<float>& algebra::Vector<float>::operator-=(const Vector<float> &A)
{
    std::vector<float> vector;
    if (this->get_type() == A.get_type())
    {
        for (unsigned int i=0; i<this->size(); i++)
            vector.push_back(this->get_vector()[i] - A.get_vector()[i]);
        this->_vector = vector;
        return *this;
    }
    else
		throw std::invalid_argument("Size of two vertices must match.");
}
algebra::Vector<float> algebra::operator-(Vector<float> A, const Vector<int> &B)
{
    A -= B;
    return A;
}
algebra::Vector<float> algebra::operator-(Vector<float> A, const Vector<double> &B)
{
    A -= B;
    return A;
}
algebra::Vector<float> algebra::operator-(Vector<float> A, const Vector<float> &B)
{
    A -= B;
    return A;
}
// Scala multiplication
algebra::Vector<float>& algebra::Vector<float>::operator*=(const int &x)
{
    std::vector<float> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<float>& algebra::Vector<float>::operator*=(const double &x)
{
    std::vector<float> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<float>& algebra::Vector<float>::operator*=(const float &x)
{
    std::vector<float> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<float> algebra::operator*(Vector<float> A, const int &x)
{
    A *= x;
    return A;
}
algebra::Vector<float> algebra::operator*(Vector<float> A, const double &x)
{
    A *= x;
    return A;
}
algebra::Vector<float> algebra::operator*(Vector<float> A, const float &x)
{
    A *= x;
    return A;
}