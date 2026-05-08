#pragma once
#include <queue>

void enqueue(std::queue<int>& cola, int valor);
void dequeue(std::queue<int>& cola);
int  front_cola(const std::queue<int>& cola);
int  size_cola(const std::queue<int>& cola);
bool empty_cola(const std::queue<int>& cola);
void show_cola(std::queue<int> cola);
