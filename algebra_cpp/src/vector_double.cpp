#include "../include/algebra/vector/vector_double.hpp"

algebra::Vector<double>::Vector(std::vector<double> vector)
    : _vector(vector), _type(VectorType::HORIZONTAL)
{}
algebra::Vector<double>::Vector(unsigned int size)
    : _type(VectorType::HORIZONTAL)
{
    for (unsigned int i=0; i<size; i++)
        _vector.push_back(0);
}

// private functions
void algebra::Vector<double>::transpose()
{
    if (this->_type == VectorType::HORIZONTAL)
        _type = VectorType::VERTICAL;
    else
        _type = VectorType::HORIZONTAL;    
}
// public functions
void algebra::Vector<double>::T()
{
    this->transpose();
}
std::vector<double> algebra::Vector<double>::get_vector() const
{
    return this->_vector;
}
std::string algebra::Vector<double>::get_type() const
{
    if (this->_type == VectorType::HORIZONTAL)
        return "horizontal";
    else
        return "vertical";
}
unsigned int algebra::Vector<double>::size() const
{
    return this->_vector.size();
}
void algebra::Vector<double>::set_vector(std::vector<double> vector)
{
    this->_vector = vector;
}
void algebra::Vector<double>::set_type(std::string type)
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

std::ostream& algebra::operator<<(std::ostream &os, Vector<double> vector)
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
double& algebra::Vector<double>::operator[](std::size_t n)
{
    return _vector[n];
}
// vector additions
algebra::Vector<double>& algebra::Vector<double>::operator+=(const Vector<int> &A)
{
    std::vector<double> vector;
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
algebra::Vector<double>& algebra::Vector<double>::operator+=(const Vector<double> &A)
{
    std::vector<double> vector;
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
algebra::Vector<double>& algebra::Vector<double>::operator+=(const Vector<float> &A)
{
    std::vector<double> vector;
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
algebra::Vector<double> algebra::operator+(Vector<double> A, const Vector<int> &B)
{
    A += B;
    return A;
}
algebra::Vector<double> algebra::operator+(Vector<double> A, const Vector<double> &B)
{
    A += B;
    return A;
}
algebra::Vector<double> algebra::operator+(Vector<double> A, const Vector<float> &B)
{
    A += B;
    return A;
}
// vector subtractions
algebra::Vector<double>& algebra::Vector<double>::operator-=(const Vector<int> &A)
{
    std::vector<double> vector;
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
algebra::Vector<double>& algebra::Vector<double>::operator-=(const Vector<double> &A)
{
    std::vector<double> vector;
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
algebra::Vector<double>& algebra::Vector<double>::operator-=(const Vector<float> &A)
{
    std::vector<double> vector;
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
algebra::Vector<double> algebra::operator-(Vector<double> A, const Vector<int> &B)
{
    A -= B;
    return A;
}
algebra::Vector<double> algebra::operator-(Vector<double> A, const Vector<double> &B)
{
    A -= B;
    return A;
}
algebra::Vector<double> algebra::operator-(Vector<double> A, const Vector<float> &B)
{
    A -= B;
    return A;
}
// Scala multiplication
algebra::Vector<double>& algebra::Vector<double>::operator*=(const int &x)
{
    std::vector<double> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<double>& algebra::Vector<double>::operator*=(const double &x)
{
    std::vector<double> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<double>& algebra::Vector<double>::operator*=(const float &x)
{
    std::vector<double> vector;

    for (auto& v_n : this->_vector)
        vector.push_back(x * v_n);
    this->_vector = vector;
    return *this;
}
algebra::Vector<double> algebra::operator*(Vector<double> A, const int &x)
{
    A *= x;
    return A;
}
algebra::Vector<double> algebra::operator*(Vector<double> A, const double &x)
{
    A *= x;
    return A;
}
algebra::Vector<double> algebra::operator*(Vector<double> A, const float &x)
{
    A *= x;
    return A;
}