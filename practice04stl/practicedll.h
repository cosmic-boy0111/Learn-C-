#pragma once


void copy(int a[], int b[], int len);
void replace(int a[], int len, int oldvalue, int newvalue);
void sort(int a[],int len);
int  set_union(int a[], int alen, int b[], int blen, int c[]);
bool  equal(int a[], int alen, int b[], int blen);
int  mismatch(int a[], int alen, int b[], int blen);
int find_first_of(int a[], int alen, int b[], int blen);
void  merge(int a[], int alen, int b[], int blen, int c[], int clen);
int  max(int a[], int len);
void rotate_left(int a[], int len);