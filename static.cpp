#include <iostream>
void counter() {
    static int count = 0; // Retains value between function calls
    count++;
    std::cout << "Count: " << count << std::endl;
}

int main() {
    counter(); // Count: 1
    counter(); // Count: 2
    counter(); // Count: 3
    return 0;
}

