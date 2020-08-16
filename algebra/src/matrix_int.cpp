#include "../include/algebra/matrix/matrix.hpp"

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
// additions
void algebra::Matrix<int>::operator+=(const Matrix<int> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        _matrix = matrix;
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
void algebra::Matrix<int>::operator+=(const Matrix<double> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        _matrix = matrix;
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
void algebra::Matrix<int>::operator+=(const Matrix<float> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        _matrix = matrix;
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::Matrix<int>::operator+(const Matrix<int> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }

        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::Matrix<int>::operator+(const Matrix<double> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }

        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::Matrix<int>::operator+(const Matrix<float> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] + A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }

        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::operator+(const Matrix<double> &A, const Matrix<int> &B)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (A.size() == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<A.size()[0]; j++)
            {
                m_n.push_back(A.get_matrix()[i][j] + B.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::operator+(const Matrix<float> &A, const Matrix<int> &B)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (A.size() == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<A.size()[0]; j++)
            {
                m_n.push_back(A.get_matrix()[i][j] + B.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}

// subtractions
void algebra::Matrix<int>::operator-=(const Matrix<int> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        _matrix = matrix;
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
void algebra::Matrix<int>::operator-=(const Matrix<double> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        _matrix = matrix;
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
void algebra::Matrix<int>::operator-=(const Matrix<float> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        _matrix = matrix;
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::Matrix<int>::operator-(const Matrix<int> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }

        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::Matrix<int>::operator-(const Matrix<double> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }

        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::Matrix<int>::operator-(const Matrix<float> &A)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (this->size() == A.size())
    {
        for (unsigned int i=0; i<this->size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<this->size()[0]; j++)
            {
                m_n.push_back(this->get_matrix()[i][j] - A.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }

        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::operator-(const Matrix<double> &A, const Matrix<int> &B)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (A.size() == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<A.size()[0]; j++)
            {
                m_n.push_back(A.get_matrix()[i][j] - B.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
algebra::Matrix<int> algebra::operator-(const Matrix<float> &A, const Matrix<int> &B)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    if (A.size() == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            m_n = {};
            for (unsigned int j=0; j<A.size()[0]; j++)
            {
                m_n.push_back(A.get_matrix()[i][j] - B.get_matrix()[i][j]);
            }
            matrix.push_back(m_n);
        }
        return Matrix<int>(matrix);
    }
    else
        throw std::invalid_argument("Size of each horizontal vertices inside the matrix must match!");
}
