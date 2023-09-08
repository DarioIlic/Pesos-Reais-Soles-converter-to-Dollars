#include <iostream>

int main() {
  double pesos, reais, soles, dollars;  
  std::cout << "Enter the number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter the number of Brazilian Reais: ";
  std::cin >> reais;  
  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;
  /* On the September 8th, 2023:
  1 pesos is 0.057 dollars
  1 reais is 0.20 dollars
  1 soles is 0.27 dollars
  */
  dollars = 0.057 * pesos + 0.20 * reais + 0.27 * soles;
  std::cout << "Amount of USD is: " << dollars << "$\n";
}
