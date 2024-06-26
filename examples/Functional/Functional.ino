#include <GCC_Standard_Library>

//演示多个标准库的功能
#include <chrono>
#include <algorithm>
#include <iostream>
#include <memory>
#include <cmath>
#include <bit>
void Translate(std::chrono::hours H) {
  std::cout << std::chrono::duration_cast<std::chrono::seconds>(H).count() << std::endl;
}
std::function<void()> FF;
void setup() {
  std::unique_ptr<std::chrono::hours[]> US = std::make_unique_for_overwrite<std::chrono::hours[]>(10);
  std::fill_n(US.get(), 10, std::chrono::hours(1));
  std::chrono::hours H = US[5];
  FF = [H]() {
    Translate(H);
  };
  constexpr uint8_t LG = std::log2(1024);
  constexpr uint8_t LG = std::bit_width(1024);
}
void loop() {
  FF();
}