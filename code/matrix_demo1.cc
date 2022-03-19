#include <Eigen/Dense>
#include <iostream>
using namespace std;
int main() {
  //随机初始化一个 3x3 浮点数矩阵[-1,1]之间均匀分布
  Eigen::Matrix3f matrix = Eigen::MatrixXf::Random(3, 3);
  // 初始化 3x3 的 double 矩阵为全 1.2
  Eigen::Matrix3d matrix_c = Eigen::MatrixXd::Constant(3, 3, 1.2);
  Eigen::Vector3d v1(1., 2., 3.);
  Eigen::VectorXd v2(3);
  v2 << 1., 2., 3;
  cout << matrix << "\n"
       << matrix_c << "\n"
       << "vec1 = \n"
       << v1 << "\n"
       << "vec2 = \n"
       << v2 << "\n";
}
