#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Class template
template <typename T>
class Box {
public:
    Box(T content) : content(content) {}

    T getContent() const {
        return content;
    }

private:
    T content;
};

int main() {
    // Variables and data types
    int num1 = 5, num2 = 10;
    double d1 = 3.5, d2 = 4.5;
    std::string s1 = "Hello, ", s2 = "World!";

    // Function templates
    int sum_int = add(num1, num2);
    double sum_double = add(d1, d2);
    std::string sum_string = add(s1, s2);

    // Class templates
    Box<int> box_int(42);
    Box<std::string> box_string("C++");

    // Standard input/output
    std::cout << "Sum of integers: " << sum_int << std::endl;
    std::cout << "Sum of doubles: " << sum_double << std::endl;
    std::cout << "Concatenated strings: " << sum_string << std::endl;
    std::cout << "Box content (int): " << box_int.getContent() << std::endl;
    std::cout << "Box content (string): " << box_string.getContent() << std::endl;

    // Standard containers and algorithms
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted numbers:";
    for (int number : numbers) {
        std::cout << ' ' << number;
    }
    std::cout << std::endl;

    // File input/output
    std::ofstream file("example.txt");
    if (file.is_open()) {
        file << "Writing this to a file.\n";
        file.close();
    }

    std::ifstream file_in("example.txt");
    if (file_in.is_open()) {
        std::string line;
        while (std::getline(file_in, line)) {
            std::cout << "Read from file: " << line << std::endl;
        }
        file_in.close();
    }

    return 0;
}
