#include "../include/algebra/vertex.hpp"

/* ostream */
std::ostream& algebra::operator<<(std::ostream &os, algebra::Vertex<int> vertex)
{
	if (vertex.get_type() == "horizontal")
	{
		for (unsigned int i=0; i<vertex.size(); i++)
		{
			if (i == 0)
				os << "[" << vertex.get_vertex()[i] << ", ";
			else if (i+1 == vertex.size())
				os << vertex.get_vertex()[i] << "]";
			else
				os << vertex.get_vertex()[i] << ", ";
		}
	}
	else
	{
		for (unsigned int i=0; i<vertex.size(); i++)
		{
			if (i == 0)
				os << "[\n " << vertex.get_vertex()[i] << ",";
			else if (i+1 == vertex.size())
				os << " " << vertex.get_vertex()[i] << "]";
			else
				os << " " << vertex.get_vertex()[i] << ", ";
		}
	}
	
	return os;
}
std::ostream& algebra::operator<<(std::ostream &os, algebra::Vertex<double> vertex)
{
	if (vertex.get_type() == "horizontal")
	{
		for (unsigned int i=0; i<vertex.size(); i++)
		{
			if (i == 0)
				os << "[" << vertex.get_vertex()[i] << ", ";
			else if (i+1 == vertex.size())
				os << vertex.get_vertex()[i] << "]";
			else
				os << vertex.get_vertex()[i] << ", ";			
		}
	}
	else
	{
		for (unsigned int i=0; i<vertex.size(); i++)
		{
			if (i == 0)
				os << "[\n " << vertex.get_vertex()[i] << ",";
			else if (i+1 == vertex.size())
				os << " " << vertex.get_vertex()[i] << "]";
			else
				os << " " << vertex.get_vertex()[i] << ", ";
		}
	}
	
	return os;
}
std::ostream& algebra::operator<<(std::ostream &os, algebra::Vertex<float> vertex)
{
	if (vertex.get_type() == "horizontal")
	{
		for (unsigned int i=0; i<vertex.size(); i++)
		{
			if (i == 0)
				os << "[" << vertex.get_vertex()[i] << ", ";
			else if (i+1 == vertex.size())
				os << vertex.get_vertex()[i] << "]";
			else
				os << vertex.get_vertex()[i] << ", ";			
		}
	}
	else
	{
		for (unsigned int i=0; i<vertex.size(); i++)
		{
			if (i == 0)
				os << "[\n " << vertex.get_vertex()[i] << ",";
			else if (i+1 == vertex.size())
				os << " " << vertex.get_vertex()[i] << "]";
			else
				os << " " << vertex.get_vertex()[i] << ", ";
		}
	}
	
	return os;
}
/* additions */
algebra::Vertex<int> algebra::operator+(algebra::Vertex<int> A, algebra::Vertex<int> B)
{
	std::vector<int> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] + B.get_vertex()[i]);
	}

	Vertex<int> output(output_vertex);
	if (A.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<double> algebra::operator+(algebra::Vertex<double> A, algebra::Vertex<double> B)
{
	std::vector<double> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] + B.get_vertex()[i]);
	}

	Vertex<double> output(output_vertex);
	if (A.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<float> algebra::operator+(algebra::Vertex<float> A, algebra::Vertex<float> B)
{
	std::vector<float> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] + B.get_vertex()[i]);
	}

	Vertex<float> output(output_vertex);
	if (A.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
/* substractions */
algebra::Vertex<int> algebra::operator-(algebra::Vertex<int> A, algebra::Vertex<int> B)
{
	std::vector<int> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
	}

	Vertex<int> output(output_vertex);
	if (A.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<double> algebra::operator-(algebra::Vertex<double> A, algebra::Vertex<double> B)
{
	std::vector<double> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
	}

	Vertex<double> output(output_vertex);
	if (A.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<float> algebra::operator-(algebra::Vertex<float> A, algebra::Vertex<float> B)
{
	std::vector<float> output_vertex;

	if (A.get_type() == B.get_type() && A.size() == B.size())
	{
		for (unsigned int i=0; i<A.size(); i++)
			output_vertex.push_back(A.get_vertex()[i] - B.get_vertex()[i]);
	}

	Vertex<float> output(output_vertex);
	if (A.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
/* multiplications */
// multiplicating scalas to vertices
algebra::Vertex<int> algebra::operator*(Vertex<int> vertex, int x)
{
	std::vector<int> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<int> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<double> algebra::operator*(Vertex<double> vertex, int x)
{
	std::vector<double> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<double> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<float> algebra::operator*(Vertex<float> vertex, int x)
{
	std::vector<float> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<float> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<int> algebra::operator*(int x, Vertex<int> vertex)
{
	std::vector<int> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<int> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<double> algebra::operator*(int x, Vertex<double> vertex)
{
	std::vector<double> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<double> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<float> algebra::operator*(int x, Vertex<float> vertex)
{
	std::vector<float> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<float> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<int> algebra::operator*(Vertex<int> vertex, double x)
{
	std::vector<int> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<int> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<double> algebra::operator*(Vertex<double> vertex, double x)
{
	std::vector<double> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<double> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<float> algebra::operator*(Vertex<float> vertex, double x)
{
	std::vector<float> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<float> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<int> algebra::operator*(double x, Vertex<int> vertex)
{
	std::vector<int> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<int> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<double> algebra::operator*(double x, Vertex<double> vertex)
{
	std::vector<double> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<double> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<float> algebra::operator*(double x, Vertex<float> vertex)
{
	std::vector<float> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<float> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<int> algebra::operator*(Vertex<int> vertex, float x)
{
	std::vector<int> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<int> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<double> algebra::operator*(Vertex<double> vertex, float x)
{
	std::vector<double> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<double> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<float> algebra::operator*(Vertex<float> vertex, float x)
{
	std::vector<float> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<float> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<int> algebra::operator*(float x, Vertex<int> vertex)
{
	std::vector<int> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<int> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<double> algebra::operator*(float x, Vertex<double> vertex)
{
	std::vector<double> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<double> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}
algebra::Vertex<float> algebra::operator*(float x, Vertex<float> vertex)
{
	std::vector<float> output_vertex;

	for (unsigned int i=0; i<vertex.size(); i++)
		output_vertex.push_back(x*vertex.get_vertex()[i]);

	Vertex<float> output(output_vertex);
	if (vertex.get_type() == "vertical")
		output.set_type("vertical");
	
	return output;
}