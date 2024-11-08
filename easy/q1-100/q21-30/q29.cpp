#include <iostream>
#include <cstdint> // for uint 32_t

int main() {
  uint32_t first = 0b00000010100101000001111010011100;
  uint32_t second = 0;
  for (int i=0; i<32; i++) {
    second = second << 1;
    second = second | (first & 1);    
    first = first >> 1;
    std::cout << first << " - " << second << std::endl;
  }

  return 0;
}
