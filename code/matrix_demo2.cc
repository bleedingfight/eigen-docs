#include <Eigen/Dense>
#include <iostream>
using namespace std;
int main() {
  Eigen::MatrixXf matrix = Eigen::MatrixXf::Random(3, 3);
  Eigen::MatrixXf matrix_c = Eigen::MatrixXf::Constant(3, 3, 2.f);
  Eigen::Vector3f vector(3), vector1(3);
  vector << 1, 2, 3;
  vector1 << 4, 5, 6;
  cout << "初始矩阵=\n" << matrix << endl;
  cout << "矩阵乘法(非elementwise)=\n" << matrix * matrix_c << "\n";
  cout << "矩阵和标量的乘法=\n" << matrix * 2.f << "\n";
  cout << "矩阵的转置=\n" << matrix.transpose() << "\n";
  matrix.transposeInPlace();
  cout << "矩阵的Inplace转置=\n" << matrix << "\n";
  cout << "矩阵和向量的乘法=\n" << matrix * vector << "\n";
  cout << "矩阵的reduce操作\n";
  cout << "所有元素求和=" << matrix.sum() << "\n";
  cout << "矩阵的元素累乘=" << matrix.prod() << "\n";
  cout << "矩阵的均值=" << matrix.mean() << "\n";
  cout << "矩阵的最小元素=" << matrix.minCoeff() << "\n";
  cout << "矩阵的最大元素=" << matrix.maxCoeff() << "\n";
  cout << "矩阵的迹=" << matrix.trace() << "\n";

  cout << "向量的点乘=\n" << vector.dot(vector1) << endl;
  cout << "向量的叉乘(只支持三维向量)=\n" << vector.cross(vector1) << endl;
}
