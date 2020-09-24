#include "../include/algebra/vector/vector_int.hpp"

algebra::Vector<int>::Vector(std::vector<int> vector)
    : _vector(vector), _type(VectorType::HORIZONTAL)
{}
algebra::Vector<int>::Vector(unsigned int size)
    : _type(VectorType::HORIZONTAL)
{
    for (unsigned int i=0; i<size; i++)
        _vector.push_back(0);
}

// private functions
void algebra::Vector<int>::transpose()
{
    if (this->_type == VectorType::HORIZONTAL)
        _type = VectorType::VERTICAL;
    else
        _type = VectorType::HORIZONTAL;    
}
// public functions
void algebra::Vector<int>::T()
{
    this->transpose();
}
// setters and getters
std::vector<int> algebra::Vector<int>::get_vector() const
{
    return this->_vector;
}
std::string algebra::Vector<int>::get_type() const
{
    if (this->_type == VectorType::HORIZONTAL)
        return "horizontal";
    else
        return "vertical";
}
unsigned int algebra::Vector<int>::size() const
{
    return this->_vector.size();
}
void algebra::Vector<int>::set_vector(std::vector<int> vector)
{
    this->_vector = vector;
}
void algebra::Vector<int>::set_type(std::string type)
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

std::ostream& algebra::operator<<(std::ostream &os, Vector<int> vector)
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
                os << "\n " << vector.get_vector()[i] << "  \n]";
            else
                os << "\n " << vector.get_vector()[i] << ",";
        }
    }
    
    return os;
}
int& algebra::Vector<int>::operator[](std::size_t n)
{
    return _vector[n];
}
// vector additions
algebra::Vector<int>& algebra::Vector<int>::operator+=(const Vector<int> &A)
{
    std::vector<int> vector;
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
algebra::Vector<int>& algebra::Vector<int>::operator+=(const Vector<double> &A)
{
    std::vector<int> vector;
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
algebra::Vector<int>& algebra::Vector<int>::operator+=(const Vector<float> &A)
{
    std::vector<int> vector;
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
algebra::Vector<int> algebra::operator+(Vector<int> A, const Vector<int> &B)
{
    A += B;
    return A;
}
algebra::Vector<int> algebra::operator+(Vector<int> A, const Vector<double> &B)
{
    A += B;
    return A;
}
algebra::Vector<int> algebra::operator+(Vector<int> A, const Vector<float> &B)
{
    A += B;
    return A;
}
// vector subtractions
algebra::Vector<int>& algebra::Vector<int>::operator-=(const Vector<int> &A)
{
    std::vector<int> vector;
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
algebra::Vector<int>& algebra::Vector<int>::operator-=(const Vector<double> &A)
{
    std::vector<int> vector;
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
algebra::Vector<int>& algebra::Vector<int>::operator-=(const Vector<float> &A)
{
    std::vector<int> vector;
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
algebra::Vector<int> algebra::operator-(Vector<int> A, const Vector<int> &B)
{
    A -= B;
    return A;
}
algebra::Vector<int> algebra::operator-(Vector<int> A, const Vector<double> &B)
{
    A -= B;
    return A;
}
algebra::Vector<int> algebra::operator-(Vector<int> A, const Vector<float> &B)
{
    A -= B;
    return A;
}
// Scala multiplication
algebra::Vector<int>& algebra::Vector<int>::operator*=(const int &x)
{
    std::vector<int> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<int>& algebra::Vector<int>::operator*=(const double &x)
{
    std::vector<int> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<int>& algebra::Vector<int>::operator*=(const float &x)
{
    std::vector<int> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<int> algebra::operator*(Vector<int> A, const int &x)
{
    A *= x;
    return A;
}
algebra::Vector<int> algebra::operator*(Vector<int> A, const double &x)
{
    A *= x;
    return A;
}
algebra::Vector<int> algebra::operator*(Vector<int> A, const float &x)
{
    A *= x;
    return A;
}