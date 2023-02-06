#include <assert.h>
#include <crtdbg.h>
#include <iostream>

using namespace std;

struct Matrix {
    int rows;
    int cols;
    int** data;
};

void MakeMatrix(int rows, int cols, Matrix* u) {
    u->rows = rows;
    u->cols = cols;
    u->data = new int*[rows];
    for (int i = 0; i < rows; i++) {
        u->data[i] = new int[cols];
    }
}

void FillMatrix(Matrix& u) {
    for (int i = 0; i < u.rows; i++) {
        for (int j = 0; j < u.cols; j++) {
            cout << "Enter elemnt in row " << i + 1 << " and col " << j + 1 << " : ";
            cin >> u.data[i][j];
        }
    }
}

bool MultiplyMatrices(Matrix u, Matrix v, Matrix* w) {

    int rows = u.rows;
    int cols = v.cols;

    if (rows != cols) return false;

    MakeMatrix(rows, cols, w);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            w->data[i][j] = 0;

            for (int k = 0; k < v.rows; k++) {
                w->data[i][j] += u.data[i][k] * v.data[k][j];
            }
        }
    }

    return true;
}

void PrintMatrix(Matrix u) {
    for (int i = 0; i < u.rows; i++) {
        for (int j = 0; j < u.cols; j++) {
            cout << u.data[i][j] <<" ";
        }cout << endl;
    }
}

void FreeMatrix(Matrix& u) {
    for (int i = 0; i < u.rows; i++) {
        delete[] u.data[i];
        u.data[i] = nullptr;
    }
    delete[] u.data;
    u.data = nullptr;
}

int main() {
    Matrix u{ 0, 0, nullptr }, v{ 0, 0, nullptr };
    Matrix w{ 0, 0 , nullptr };
    MakeMatrix(/*rows*/2, /*cols*/2, &u);
    FillMatrix(u);
    MakeMatrix(2, 2, &v);
    FillMatrix(v);
    bool succeeded = MultiplyMatrices(u, v, &w);
    if (succeeded) {
        PrintMatrix(u);
        PrintMatrix(v);
        for (size_t i = 0; i < w.rows; ++i) {
            for (size_t j = 0; j < w.cols; ++j) {
                std::cout << w.data[i][j] << " " << std::flush;
            }
            std::cout << std::endl;
        }
    }
    FreeMatrix(u);
    FreeMatrix(v);
    FreeMatrix(w);
    _CrtDumpMemoryLeaks(); // should report no leakages
}
