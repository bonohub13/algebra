#include "../include/algebra/matrix/matrix_int.hpp"
// constructors
algebra::Matrix<int>::Matrix(const std::vector<std::vector<int>> &matrix)
{
    int check = 0;
    for (const auto& a : matrix)
        check += a.size();
    if (check == matrix.size() * matrix[0].size())
        _matrix = matrix;
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int>::Matrix(const unsigned int &hor_size, const unsigned int &ver_size)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
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
std::vector<std::vector<int>> algebra::Matrix<int>::get_matrix() const
{
    return this->_matrix;
}
std::array<std::size_t, 2> algebra::Matrix<int>::size() const
{
    return {this->_matrix[0].size(), this->_matrix.size()};
}
void algebra::Matrix<int>::set_matrix(const std::vector<std::vector<int>> &matrix)
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
std::ostream& algebra::operator<<(std::ostream &os, const Matrix<int> &M)
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
std::vector<int>& algebra::Matrix<int>::operator[](std::size_t n)
{
	return _matrix[n];
}
// additions
algebra::Matrix<int>& algebra::Matrix<int>::operator+=(const Matrix<int>& A)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;
	if (this->size() == A.size())
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<this->size()[0]; j++)
				m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
			matrix.push_back(m_n);
		}
		this->_matrix = matrix;
		return *this;
	}
	else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<int>& algebra::Matrix<int>::operator+=(const Matrix<double>& A)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;
	if (this->size() == A.size())
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<this->size()[0]; j++)
				m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
			matrix.push_back(m_n);
		}
		this->_matrix = matrix;
		return *this;
	}
	else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<int>& algebra::Matrix<int>::operator+=(const Matrix<float>& A)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;
	if (this->size() == A.size())
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<this->size()[0]; j++)
				m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
			matrix.push_back(m_n);
		}
		this->_matrix = matrix;
		return *this;
	}
	else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<int> algebra::operator+(Matrix<int> A, const Matrix<int>& B)
{
	A += B;
	return A;
}
algebra::Matrix<int> algebra::operator+(Matrix<int> A, const Matrix<double>& B)
{
	A += B;
	return A;
}
algebra::Matrix<int> algebra::operator+(Matrix<int> A, const Matrix<float>& B)
{
	A += B;
	return A;
}
// subtractions
algebra::Matrix<int>& algebra::Matrix<int>::operator-=(const Matrix<int>& A)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;
	if (this->size() == A.size())
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<this->size()[0]; j++)
				m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
			matrix.push_back(m_n);
		}
		this->_matrix = matrix;
		return *this;
	}
	else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<int>& algebra::Matrix<int>::operator-=(const Matrix<double>& A)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;
	if (this->size() == A.size())
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<this->size()[0]; j++)
				m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
			matrix.push_back(m_n);
		}
		this->_matrix = matrix;
		return *this;
	}
	else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<int>& algebra::Matrix<int>::operator-=(const Matrix<float>& A)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;
	if (this->size() == A.size())
	{
		for (unsigned int i=0; i<this->size()[1]; i++)
		{
			m_n = {};
			for (unsigned int j=0; j<this->size()[0]; j++)
				m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
			matrix.push_back(m_n);
		}
		this->_matrix = matrix;
		return *this;
	}
	else
		throw std::invalid_argument("Size of two matrices must match.");
}
algebra::Matrix<int> algebra::operator-(Matrix<int> A, const Matrix<int>& B)
{
	A -= B;
	return A;
}
algebra::Matrix<int> algebra::operator-(Matrix<int> A, const Matrix<double>& B)
{
	A -= B;
	return A;
}
algebra::Matrix<int> algebra::operator-(Matrix<int> A, const Matrix<float>& B)
{
	A -= B;
	return A;
}
// Scala multiplications
algebra::Matrix<int>& algebra::Matrix<int>::operator*=(const int &x)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;

	for (auto &m_i : this->_matrix)
	{
		m_n = {};
		for (auto &m_ij : m_i)
			m_n.push_back(m_ij * x);
		matrix.push_back(m_n);
	}
	_matrix = matrix;
	return *this;
}
algebra::Matrix<int>& algebra::Matrix<int>::operator*=(const double &x)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;

	for (auto &m_i : this->_matrix)
	{
		m_n = {};
		for (auto &m_ij : m_i)
			m_n.push_back(m_ij * x);
		matrix.push_back(m_n);
	}
	_matrix = matrix;
	return *this;
}
algebra::Matrix<int>& algebra::Matrix<int>::operator*=(const float &x)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;

	for (auto &m_i : this->_matrix)
	{
		m_n = {};
		for (auto &m_ij : m_i)
			m_n.push_back(m_ij * x);
		matrix.push_back(m_n);
	}
	_matrix = matrix;
	return *this;
}
algebra::Matrix<int> algebra::operator*(const int &x, Matrix<int> A)
{
	A *= x;
	return A;
}
algebra::Matrix<int> algebra::operator*(const double &x, Matrix<int> A)
{
	A *= x;
	return A;
}
algebra::Matrix<int> algebra::operator*(const float &x, Matrix<int> A)
{
	A *= x;
	return A;
}
algebra::Matrix<int> algebra::operator*(Matrix<int> A, const int &x)
{
	A *= x;
	return A;
}
algebra::Matrix<int> algebra::operator*(Matrix<int> A, const double &x)
{
	A *= x;
	return A;
}
algebra::Matrix<int> algebra::operator*(Matrix<int> A, const float &x)
{
	A *= x;
	return A;
}
// Vertex multiplication
algebra::Matrix<int> algebra::operator*(algebra::Vertex<int> A, const algebra::Vertex<int> &B)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;

	if (A.get_type() != B.get_type())
	{
		if (A.get_type() == "vertical")
		{
			for (unsigned int i=0; A.size(); i++)
			{
				m_n = {};
				for (unsigned int j=0; j<B.size(); j++)
					m_n.push_back(A.get_vertex()[i] * B.get_vertex()[j]);
				matrix.push_back(m_n);
			}
			return Matrix<int>(matrix);
		}
		else
		{
			if (A.size() == B.size())
			{
				int output = 0;
				for (unsigned int i=0; i<A.size(); i++)
					output += (A.get_vertex()[i] * B.get_vertex()[i]);
				matrix = {{output}};
				return Matrix<int>(matrix);
			}
			else
				throw std::invalid_argument("If multiplicating horizontal vertex with vertical vertex, the size must match.");
		}
	}
	else
		throw std::invalid_argument("Cannot multiply identical types of vertices.");
}
algebra::Matrix<int> algebra::operator*(algebra::Vertex<int> A, const algebra::Vertex<double> &B)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;

	if (A.get_type() != B.get_type())
	{
		if (A.get_type() == "vertical")
		{
			for (unsigned int i=0; A.size(); i++)
			{
				m_n = {};
				for (unsigned int j=0; j<B.size(); j++)
					m_n.push_back(A.get_vertex()[i] * B.get_vertex()[j]);
				matrix.push_back(m_n);
			}
			return Matrix<int>(matrix);
		}
		else
		{
			if (A.size() == B.size())
			{
				int output = 0;
				for (unsigned int i=0; i<A.size(); i++)
					output += (A.get_vertex()[i] * B.get_vertex()[i]);
				matrix = {{output}};
				return Matrix<int>(matrix);
			}
			else
				throw std::invalid_argument("If multiplicating horizontal vertex with vertical vertex, the size must match.");
		}
	}
	else
		throw std::invalid_argument("Cannot multiply identical types of vertices.");
}
algebra::Matrix<int> algebra::operator*(algebra::Vertex<int> A, const algebra::Vertex<float> &B)
{
	std::vector<std::vector<int>> matrix;
	std::vector<int> m_n;

	if (A.get_type() != B.get_type())
	{
		if (A.get_type() == "vertical")
		{
			for (unsigned int i=0; A.size(); i++)
			{
				m_n = {};
				for (unsigned int j=0; j<B.size(); j++)
					m_n.push_back(A.get_vertex()[i] * B.get_vertex()[j]);
				matrix.push_back(m_n);
			}
			return Matrix<int>(matrix);
		}
		else
		{
			if (A.size() == B.size())
			{
				int output = 0;
				for (unsigned int i=0; i<A.size(); i++)
					output += (A.get_vertex()[i] * B.get_vertex()[i]);
				matrix = {{output}};
				return Matrix<int>(matrix);
			}
			else
				throw std::invalid_argument("If multiplicating horizontal vertex with vertical vertex, the size must match.");
		}
	}
	else
		throw std::invalid_argument("Cannot multiply identical types of vertices.");
}
