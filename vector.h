#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> print_this);
vector<int> copy_cat(vector<int> copy_this);
int vector_sum(vector<int> sum_this);
vector<int> init_vector(int max);

#include "vector.hpp"
#endif // VECTOR_H_INCLUDED
