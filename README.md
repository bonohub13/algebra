# C++ package that is meant for calculating simple algebra
## ::::: DOCUMENTATIONS :::::
- Vector
    - Does simple algebra (add, subtract, and multiply with scalas) with vector
    - Handles vector with int, double, and float
        - all data types of parameters within a vector must match
- Matrix
    - Does simple algebra (add, subtract, and multiplication with scalas, vector, matrices) with matrix
    - Handles matrix with int, double, and float
        - all data types of parameters within a matrix must match

## ::::: UPDATES :::::
- August 10, 2020
    - Initialized branch
        - Added <i>vertex</i> package
        - Added <i>README.md</i>
        - Added <i>LICENSE</i> with MIT License
    - Added scala multiplications for vertex
- August 11, 2020
    - Added transpose method to vertex
    - Added matrix (only int)
- August 15, 2020
    - Added add method to matrix\_int
- August 16, 2020
    - Added add and subtract method to all matrix (int, double, and float)
        - Merged to master branch
    - Added scala multiplication for all matrix
- August 28, 2020
	- Fixed errors in multiple methods in matrix\_int
		- unfixed methods and methods in other packages will be fixed in future versions.
        - Fixed methodes add/subtract in matrix\_double and matrix\_float
- September 1, 2020
    - Added scala multiplications for all version
- September 8, 2020
    - Modified add/sub and scala multiplication methods for Vertex libraries.
    - Added method for Vertex multiplication only for matrix\_int
        - Note:
            - methods for matrix\_double and matrix\_float will be added in near future.
    - Modified CMakeLists.txt file
- September 24, 2020
    - Added multiplication for matrix with scala, vector, matrix
        - If return value is a scala, it returns a 1x1 size matrix
    - Changed package name Vertex to Vector
    - Added method to transpose matrices
- October 12, 2020
    - Added templates for the following methods
        - functions to output triangular matrices
        - functions to find determinants of a sqare matrix
- October 26, 2020
    - Added python version <i>algebra_py</i>
    - Renamed C++ version to <i>algebra_cpp</i>
