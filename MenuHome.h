#include <stdio.h>
#include <conio.h>
#define MenuHome_h
#include "MenuCustomer.h"
#include "MenuStaff.h"
#pragma once

//Menu giao dien Home
void menuHome(Cart*& Head, Product P[], Queue*& Q, Queue*& S, Queue*& C, FILE* f, int &num);
