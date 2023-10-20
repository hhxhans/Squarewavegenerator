#include <iostream>
#include <iostream>
#include <ctime>    //用于产生随机数据的种子
#include "Eigen/Dense"

using namespace std;
using namespace Eigen;

class SquarewaveSimulation {
private:
    int rows, cols;
    double** matrix;
public:
    SquarewaveSimulation(int r, int c) {
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
    int arows = Eigenmatrix.rows();
    int acols = Eigenmatrix.cols();
    Cppmatrix = new double* [arows];
    for (int i = 0; i < arows; i++)
    {
        Cppmatrix[i] = new double[acols];
    }
    return Cppmatrix;
}



Matrix<double, Dynamic, Dynamic> read(Matrix<double, Dynamic, Dynamic> a) {
    double* c = a.data();
    return a;
}

int main()
{
    const int x = 3, y = 4;
    Matrix<double, x, y> A, b;
    cout << read(A) << endl;
    return 0;
}
