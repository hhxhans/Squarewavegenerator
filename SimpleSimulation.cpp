#include <iostream>
#include <iostream>
#include <ctime>    //用于产生随机数据的种子
#include "Eigen/Dense"
#include <vector>
using namespace std;
using namespace Eigen;

class SquarewaveSimulationMatrix {
private:
    int rows, cols;
    double** matrix;
public:
    SquarewaveSimulationMatrix(int r, int c) {
        rows = r;
        cols = c;
        matrix = new double* [r];
        for (int i = 0; i < r; i++)
        {
            matrix[i] = new double[c];
        }
    }

};

double** EigentoCpp(Matrix<double, Dynamic, Dynamic> Eigenmatrix) {
    double** Cppmatrix;
    const int arows = Eigenmatrix.rows();
    const int acols = Eigenmatrix.cols();
    Cppmatrix = new double* [arows];
    for (int i = 0; i < arows; i++)
    {
        Cppmatrix[i] = new double[acols];
    }
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acols; j++)
        {
            Cppmatrix[i][j] = Eigenmatrix(i, j);
        }
    }
    return Cppmatrix;
}
/*
* Matrix<double, Dynamic, Dynamic> CpptoEigen(double** Cppmatrix) {
    double a = ** Cppmatrix;
    int length, col, row;
    length = sizeof(Cppmatrix) / sizeof(double); //矩阵中元素的个数
    col = sizeof(Cppmatrix[0]) / sizeof(double);  //矩阵列数
    row = length / col;
    Matrix<double, Dynamic, Dynamic> Eigenmatrix;
    Eigenmatrix.resize(row,col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Eigenmatrix(i,j) = Cppmatrix[i][j];
        }
    }
    return Eigenmatrix;
}

*/



Matrix<double, Dynamic, Dynamic> read(Matrix<double, Dynamic, Dynamic> a) {
    double* c = a.data();
    return a;
}

int main()
{
    const int x = 5, y = 12;
    Matrix<double, x, y> A, b;
    double** Cppm = EigentoCpp(A);
    //Matrix<double, Dynamic, Dynamic>Eigenm = CpptoEigen(Cppm);
    cout << * Cppm << endl;
    return 0;
}
