#include "vector_extra.h"

std::vector<int_vector> read_vector_file(const std::string& file_name) {
    std::ifstream inp_vector_file(file_name);
    std::vector<int_vector> two_dimens_vector;

    if (!inp_vector_file) { // for empty file acse
        return two_dimens_vector;
    }

    std::string line;
    int int_vector_id=0;
    int_vector inner_vector;
    while (std::getline(inp_vector_file, line)) {

        std::vector<int> line_values = convert_line_to_vector(line);

        int from = line_values[0];
        int to = line_values[1];

        inner_vector.id = int_vector_id;
        inner_vector.from = from;
        inner_vector.to = to; 
        two_dimens_vector.push_back(inner_vector);

        int_vector_id++;
    }

    return two_dimens_vector;
}

std::vector<int> convert_line_to_vector(const std::string& line) {

    std::vector<int> return_vector;
    std::istringstream iss(line);

    int value;
    while (iss >> value) {
        return_vector.push_back(value);
    }

    return return_vector;
}

void print_two_d_vector(const std::vector<int_vector> &vector) {
    for (auto inner_vector : vector) {
        std::cout << inner_vector.id << ": ";
        inner_vector.print_int_vector();
        std::cout << std::endl;
    }
}


void print_two_d_vector_rev(const std::vector<int_vector> &vector) {
    for (int vector_idx = vector.size()-1; vector_idx >= 0; vector_idx--) {
        int_vector inner_vector = vector[vector_idx];
        std::cout << inner_vector.id << ": ";
        inner_vector.print_int_vector();
        std::cout << std::endl;
    }
}