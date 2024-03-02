#include "vector_extra.h"


int main() {

    std::string filename;
    std::cout << "Enter filename: ";
    std::cin >> filename;
    std::vector<int_vector> vector_from_file = read_vector_file(filename);
    print_two_d_vector_rev(vector_from_file);

    return 0;
}