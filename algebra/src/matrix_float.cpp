#include "../include/algebra/matrix/matrix_float.hpp"

// constructors
algebra::Matrix<float>::Matrix(const std::vector<std::vector<float>> &matrix)
{
    int check = 0;
    for (const auto& a : matrix)
        check += a.size();
    if (check == matrix.size() * matrix[0].size())
        _matrix = matrix;
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<float>::Matrix(const unsigned int &hor_size, const unsigned int &ver_size)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    for (unsigned int i=0; i<ver_size; i++)
    {
        m_n = {};
        for (unsigned int j=0; j<hor_size; j++)
            m_n.push_back(0);
        matrix.push_back(m_n);
    }
    _matrix = matrix;
}

// setters and getters
std::vector<std::vector<float>> algebra::Matrix<float>::get_matrix() const
{
    return this->_matrix;
}
std::array<std::size_t, 2> algebra::Matrix<float>::size() const
{
    return {this->_matrix[0].size(), this->_matrix.size()};
}
void algebra::Matrix<float>::set_matrix(const std::vector<std::vector<float>> &matrix)
{
    int check = 0;
    for (const auto& a : matrix)
        check += a.size();
    if (check == matrix.size() * matrix[0].size())
        _matrix = matrix;
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}

// operators
// format how the matrix is presented
std::ostream& algebra::operator<<(std::ostream &os, const Matrix<float> &M)
{
    for (unsigned int i=0; i<M.size()[1]; i++)
    {
        for (unsigned int j=0; j<M.size()[0]; j++)
        {
            if (i == 0 && j == 0)
                os << "\n    [[" << M.get_matrix()[i][j] << ", ";
            else if (i != 0 && j == 0)
                os << "     [" << M.get_matrix()[i][j] << ", ";
            else if (i+1 != M.size()[1] && j+1 == M.size()[0])
                os << M.get_matrix()[i][j] << "],\n";
            else if (i+1 == M.size()[1] && j+1 == M.size()[0])
                os << M.get_matrix()[i][j] << "]]";
            else
                os << M.get_matrix()[i][j] << ", ";
        }
    }

    return os;
}
std::vector<float>& algebra::Matrix<float>::operator[](std::size_t n)
{
    return _matrix[n];
}
// additions
algebra::Matrix<float>& algebra::Matrix<float>::operator+=(const Matrix<int> &A)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            matrix.push_back(m_n);
        }
        set_matrix(matrix);
        return *this;
    }
    else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<float>& algebra::Matrix<float>::operator+=(const Matrix<double> &A)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            matrix.push_back(m_n);
        }
        set_matrix(matrix);
        return *this;
    }
    else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<float>& algebra::Matrix<float>::operator+=(const Matrix<float> &A)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            matrix.push_back(m_n);
        }
        set_matrix(matrix);
        return *this;
    }
    else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<float> algebra::operator+(Matrix<float> A, const Matrix<int> &B)
{
    A += B;
    return A;
}
algebra::Matrix<float> algebra::operator+(Matrix<float> A, const Matrix<double> &B)
{
    A += B;
    return A;
}
algebra::Matrix<float> algebra::operator+(Matrix<float> A, const Matrix<float> &B)
{
    A += B;
    return A;
}
// subtractions
algebra::Matrix<float>& algebra::Matrix<float>::operator-=(const Matrix<int> &A)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            matrix.push_back(m_n);
        }
        set_matrix(matrix);
        return *this;
    }
    else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<float>& algebra::Matrix<float>::operator-=(const Matrix<double> &A)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            matrix.push_back(m_n);
        }
        set_matrix(matrix);
        return *this;
    }
    else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<float>& algebra::Matrix<float>::operator-=(const Matrix<float> &A)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            matrix.push_back(m_n);
        }
        set_matrix(matrix);
        return *this;
    }
    else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<float> algebra::operator-(Matrix<float> A, const Matrix<int> &B)
{
    A -= B;
    return A;
}
algebra::Matrix<float> algebra::operator-(Matrix<float> A, const Matrix<double> &B)
{
    A -= B;
    return A;
}
algebra::Matrix<float> algebra::operator-(Matrix<float> A, const Matrix<float> &B)
{
    A -= B;
    return A;
}
// Scala multiplications
algebra::Matrix<float>& algebra::Matrix<float>::operator*=(const int &x)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;

    for (auto &m_i : this->_matrix)
    {
        m_n = {};
        for (auto &m_ij : m_i)
            m_n.push_back(m_ij * x);
        matrix.push_back(m_n);
    }
    this->_matrix;
    return *this;
}
algebra::Matrix<float>& algebra::Matrix<float>::operator*=(const double &x)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;

    for (auto &m_i : this->_matrix)
    {
        m_n = {};
        for (auto &m_ij : m_i)
            m_n.push_back(m_ij * x);
        matrix.push_back(m_n);
    }
    this->_matrix;
    return *this;
}
algebra::Matrix<float>& algebra::Matrix<float>::operator*=(const float &x)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;

    for (auto &m_i : this->_matrix)
    {
        m_n = {};
        for (auto &m_ij : m_i)
            m_n.push_back(m_ij * x);
        matrix.push_back(m_n);
    }
    this->_matrix;
    return *this;
}
algebra::Matrix<float> algebra::operator*(Matrix<float> A, const int &x)
{
    A *= x;
    return A;
}
algebra::Matrix<float> algebra::operator*(Matrix<float> A, const double &x)
{
    A *= x;
    return A;
}
algebra::Matrix<float> algebra::operator*(Matrix<float> A, const float &x)
{
    A *= x;
    return A;
}
algebra::Matrix<float> algebra::operator*(const int &x, Matrix<float> A)
{
    A *= x;
    return A;
}
algebra::Matrix<float> algebra::operator*(const double &x, Matrix<float> A)
{
    A *= x;
    return A;
}
algebra::Matrix<float> algebra::operator*(const float &x, Matrix<float> A)
{
    A *= x;
    return A;
}
// Vector multiplication
algebra::Matrix<float> algebra::operator*(algebra::Vector<float> A, const algebra::Vector<int> &B)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    
    if (A.get_type() != B.get_type())
    {
	    if (A.get_type() == "vertical")
	    {
	        for (unsigned int i=0; i<A.size(); i++)
	        {
	            m_n = {};
	            for (unsigned int j=0; j<B.size(); j++)
	                m_n.push_back(A.get_vector()[i] * B.get_vector()[j]);
	            matrix.push_back(m_n);
	        }
	        return Matrix<float>(matrix);
	    }
        else
        {
            if (A.size() == B.size())
            {
                float output = 0;
                for (unsigned int i=0; i<A.size(); i++)
                    output += (A.get_vector()[i] * B.get_vector()[i]);
                matrix = {{output}};
                return Matrix<float>(matrix);
            }
            else
				throw std::invalid_argument("If multiplicating horizontal vector with vertical vector, the size must match."); 
        }
    }
	else
		throw std::invalid_argument("Cannot multiply identical types of vertices.");
}
algebra::Matrix<float> algebra::operator*(algebra::Vector<float> A, const algebra::Vector<double> &B)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    
    if (A.get_type() != B.get_type())
    {
	    if (A.get_type() == "vertical")
	    {
	        for (unsigned int i=0; i<A.size(); i++)
	        {
	            m_n = {};
	            for (unsigned int j=0; j<B.size(); j++)
	                m_n.push_back(A.get_vector()[i] * B.get_vector()[j]);
	            matrix.push_back(m_n);
	        }
	        return Matrix<float>(matrix);
	    }
        else
        {
            if (A.size() == B.size())
            {
                float output = 0;
                for (unsigned int i=0; i<A.size(); i++)
                    output += (A.get_vector()[i] * B.get_vector()[i]);
                matrix = {{output}};
                return Matrix<float>(matrix);
            }
            else
				throw std::invalid_argument("If multiplicating horizontal vector with vertical vector, the size must match."); 
        }
    }
	else
		throw std::invalid_argument("Cannot multiply identical types of vertices.");
}
algebra::Matrix<float> algebra::operator*(algebra::Vector<float> A, const algebra::Vector<float> &B)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    
    if (A.get_type() != B.get_type())
    {
	    if (A.get_type() == "vertical")
	    {
	        for (unsigned int i=0; i<A.size(); i++)
	        {
	            m_n = {};
	            for (unsigned int j=0; j<B.size(); j++)
	                m_n.push_back(A.get_vector()[i] * B.get_vector()[j]);
	            matrix.push_back(m_n);
	        }
	        return Matrix<float>(matrix);
	    }
        else
        {
            if (A.size() == B.size())
            {
                float output = 0;
                for (unsigned int i=0; i<A.size(); i++)
                    output += (A.get_vector()[i] * B.get_vector()[i]);
                matrix = {{output}};
                return Matrix<float>(matrix);
            }
            else
				throw std::invalid_argument("If multiplicating horizontal vector with vertical vector, the size must match."); 
        }
    }
	else
		throw std::invalid_argument("Cannot multiply identical types of vertices.");
}
// multiply matrices
algebra::Matrix<float>& algebra::Matrix<float>::operator*=(const Matrix<int> &B)
{
	std::vector<std::vector<float>> matrix;
	std::vector<float> m_n;
	float m_ij;

	if (this->size()[0] == B.size()[1])
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<B.size()[0]; j++)
			{
				m_ij = 0;
				for (unsigned k=0; k<this->size()[0]; k++)
					m_ij += this->get_matrix()[i][k] * B.get_matrix()[k][j];
				m_n.push_back(m_ij);
			}
			matrix.push_back(m_n);
		}
		set_matrix(matrix);
		return *this;
	}
	else
		throw std::invalid_argument("If multiplying multiple matrices, horizontal size and vertical size must size.");
}
algebra::Matrix<float>& algebra::Matrix<float>::operator*=(const Matrix<double> &B)
{
	std::vector<std::vector<float>> matrix;
	std::vector<float> m_n;
	float m_ij;

	if (this->size()[0] == B.size()[1])
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<B.size()[0]; j++)
			{
				m_ij = 0;
				for (unsigned k=0; k<this->size()[0]; k++)
					m_ij += this->get_matrix()[i][k] * B.get_matrix()[k][j];
				m_n.push_back(m_ij);
			}
			matrix.push_back(m_n);
		}
		set_matrix(matrix);
		return *this;
	}
	else
		throw std::invalid_argument("If multiplying multiple matrices, horizontal size and vertical size must size.");
}
algebra::Matrix<float>& algebra::Matrix<float>::operator*=(const Matrix<float> &B)
{
	std::vector<std::vector<float>> matrix;
	std::vector<float> m_n;
	float m_ij;

	if (this->size()[0] == B.size()[1])
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<B.size()[0]; j++)
			{
				m_ij = 0;
				for (unsigned k=0; k<this->size()[0]; k++)
					m_ij += this->get_matrix()[i][k] * B.get_matrix()[k][j];
				m_n.push_back(m_ij);
			}
			matrix.push_back(m_n);
		}
		set_matrix(matrix);
		return *this;
	}
	else
		throw std::invalid_argument("If multiplying multiple matrices, horizontal size and vertical size must size.");
}