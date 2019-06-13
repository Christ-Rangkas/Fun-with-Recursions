//Recursive Functions
#include <iostream>
int SumOfNumFacs(int x){
  if (x == 0){ //Base case so it will stop recursing
    return 0;
  }
  else {
    int count = 0, i = 1; //Used to count and check for factors
    while (i <= x){
      if (x%i == 0){ //If theres a factor
        ++count;
      }
      ++i;
    }
    return count + SumOfNumFacs(x-1);
    //It will start with the amount of factors of x,
    //then it will recurse to find the amount of factors for x-1.
    //Will keep doing this until hits base case.
  }
}
int main(){
  int z;
  std::cout << "enter an int" << std::endl;
  std::cin >> z;
  std::cout << SumOfNumFacs(z) <<"\n";
  return 0;
}
