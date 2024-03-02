#ifndef __VECTOR_EXTRA_H_
#define __VECTOR_EXTRA_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

struct int_vector {
    int id;
    int from;
    int to;
    int_vector(const int_vector & i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {}; // copy constructor
    int_vector() : id(-1), from(0), to(0) {}; // basic constructor
    void print_int_vector() {std::cout << from << " " << to;};
    void print_int_vector_rev() {std::cout << to << " " << from;};
};

std::vector<int_vector> read_vector_file(const std::string& file_name);
std::vector<int> convert_line_to_vector(const std::string& line);

void print_two_d_vector(const std::vector<int_vector> &vector);
void print_two_d_vector_rev(const std::vector<int_vector> &vector);

#endif