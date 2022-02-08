#include <iostream>

using namespace std;

int main() {
  int S, A, element, temp, cycle_case;
  std::cin >> S >> A;
  int array[S+A];
  for (int i = 0; i < A; i++) {
    std::cin >> element;
    array[S+i] = element;
  }
  // temp = S;
  // cycle_case = 0;
  // for (int i = 0; i < A; i++) {
  //   temp = array[array[S]];
  //   if (array[S] < 0){
  //     std::cout<<array[S]<<std::endl;
  //     cycle_case++;
  //     break;
  //   }
  //   else if(temp < 0) {
  //     std::cout<<temp<<std::endl;
  //     cycle_case++;
  //     break;
  //   } else {
  //     temp = array[temp];
  //   }

  // }
  // if (cycle_case == 0) {
  //   std::cout<<"There was a cycle"<<std::endl;
  // }


  //std::cout<<array[8001]<<std::endl;


  // read the input


  // solve the problem

  // print the output

  return 0;
}
