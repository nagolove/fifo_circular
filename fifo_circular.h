#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct CIRC_BUF {
    double* arr;
    int i, j, maxlen, len;
} CIRC_BUF;

void cb_init(CIRC_BUF *cb, int maxlen);
void cb_free(CIRC_BUF *cb);
void cb_print(CIRC_BUF *cb);
// Возвращает истину если значение было добавлено
bool cb_push(CIRC_BUF *cb, double value);
// Возвращает истину если удалось снять значение
bool cb_pop(CIRC_BUF *cb, double *value);

void cb_push_circ(CIRC_BUF *cb, double value);
void cb_print_circ(const CIRC_BUF *cb);
bool cb_get(CIRC_BUF *cb,  double *v, int index);

