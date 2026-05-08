#pragma once
#include <stack>

void push_pila(std::stack<int>& pila, int valor);
void pop_pila(std::stack<int>& pila);
int  top_pila(const std::stack<int>& pila);
int  size_pila(const std::stack<int>& pila);
bool empty_pila(const std::stack<int>& pila);
void show_pila(std::stack<int> pila);
