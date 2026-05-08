#pragma once
#include <stack>
using namespace std;

void push_pila(stack<int>& pila, int valor);
void pop_pila(stack<int>& pila);
int  top_pila(const stack<int>& pila);
int  size_pila(const stack<int>& pila);
bool empty_pila(const stack<int>& pila);
void show_pila(stack<int> pila);
