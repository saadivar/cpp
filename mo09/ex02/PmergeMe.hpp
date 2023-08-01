#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#define INSER 20

void insertion_sort_vec(std::vector<int>& vec);
void merging(std::vector<int>& vec,std::vector<int>& left,std::vector<int>& right);
void mergesort(std::vector<int>& vec);
void insertion_sort_deq(std::deque<int>& deq);
void merging_deque(std::deque<int>& deq,std::deque<int>& left,std::deque<int>& right);
void mergesort_deque(std::deque<int>& deq);
int check_digit(char *s);
int parse(char **av, int ac);
void display(std::vector<int>& vector);
void display(std::deque<int>& deque);
void filling(std::deque<int>& deque,std::vector<int>& vector,int ac,char **av);
void Pmerge_vec(std::vector<int>& vector);
void Pmerge_deque(std::deque<int>& deque);