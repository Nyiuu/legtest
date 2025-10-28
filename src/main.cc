//sudo apt-get install libeigen3-dev
#include <iostream>
// 这里的 Eigen/Core 是相对于您设置的 include 路径而言的
#include ""

int main() {
    // 定义一个 3x3 的矩阵
    Eigen::Matrix3f A;
    A << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;

    std::cout << "Here is the matrix A:\n" << A << std::endl;

    return 0;
}