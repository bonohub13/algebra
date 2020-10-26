#!/usr/bin/python3

class Matrix:
    __type = ("matrix", "horizontal_vector", "vertical_vector")
    def __init__(self, init_matrix: list=None, hor_size: int=None, ver_size: int=None):
        if (init_matrix != None and hor_size == None and ver_size == None):
            check_size = 1
            check_type = 1
            for i in range(len(init_matrix)-1):
                check_size += 0 if len(init_matrix[i]) == len(init_matrix[i+1]) else -1
            if check_size:
                for row in init_matrix:
                    for column in row:
                        check_type += 0 if type(column) == int or type(column) == float else -1
                if check_type:
                    self.matrix = init_matrix
                    self.type = self.__type[0] if len(self.matrix) > 1 and len(self.matrix[1]) > 1 else \
                                self.__type[1] if len(self.matrix) == 1 and len(self.matrix[1]) > 1 else self.__type[2]
            else:
                raise ValueError("Invalid value for keyword \"init_matrix\". Horizontal length and vertical length must match.")
        elif (init_matrix == None and hor_size != None and ver_size != None):
            self.matrix = []
            for _ in range(ver_size):
                self.matrix.append([0 for _ in range(hor_size)])
            self.type = self.__type[0] if hor_size > 1 and ver_size > 1 else \
                        self.__type[1] if hor_size > 1 and ver_size == 1 else self.__type[2]
        else:
            raise ValueError("Argument passed for class Matrix invalid.")

    def __add__(self, other):
        return self.__class__(self.add(other))
    
    def __radd__(self, other):
        return self.__class__(self.add(other))
    
    def __iadd__(self, other):
        return self.__class__(self.add(other))

    def __repr__(self):
        return self.show()

    def __str__(self):
        return self.show()

    def size(self):
        return (len(self.matrix[0]), len(self.matrix))

    def add(self, other):
        tmp = []
        if self.size() == other.size():
            for i in range(self.size()[1]):
                tmp.append([self.matrix[i][j] + other.matrix[i][j] for j in range(self.size()[0])])
            return tmp
        else:
            raise ValueError("Cannot add matrices (vectors) with different size")

    def show(self):
        output_buffer = []
        for row in range(self.size()[1]):
            if row == 0:
                tmp_str = "[["
                for column in range(self.size()[0]):
                    if column+1 == self.size()[0]:
                        tmp_str += " {} ],".format(self.matrix[row][column])
                    else:
                        tmp_str += " {},".format(self.matrix[row][column])
                output_buffer.append(tmp_str)
            elif row+1 == self.size()[1]:
                tmp_str = " ["
                for column in range(self.size()[0]):
                    if column+1 == self.size()[0]:
                        tmp_str += " {} ]]".format(self.matrix[row][column])
                    else:
                        tmp_str += " {},".format(self.matrix[row][column])
                output_buffer.append(tmp_str)
            else:
                tmp_str = " ["
                for column in range(self.size()[0]):
                    if column+1 == self.size()[0]:
                        tmp_str += " {} ],".format(self.matrix[row][column])
                    else:
                        tmp_str += " {},".format(self.matrix[row][column])
                output_buffer.append(tmp_str)
        
        output = "\n  " + "\n  ".join(output_buffer)

        return output