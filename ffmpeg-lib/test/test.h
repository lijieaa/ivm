#include <stdio.h>
#pragma once
extern "C" _declspec(dllexport) int add(int a, int b);
extern "C" _declspec(dllexport) int sub(int a, int b);
extern "C" _declspec(dllexport) void sayHello(char* str);