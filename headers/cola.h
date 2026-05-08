#pragma once
#include <queue>
using namespace std;

void enqueue(queue<int>& cola, int valor);
void dequeue(queue<int>& cola);
int  front_cola(const queue<int>& cola);
int  size_cola(const queue<int>& cola);
bool empty_cola(const queue<int>& cola);
void show_cola(queue<int> cola);
