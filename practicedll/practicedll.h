#pragma once

#if defined(PRACTICEDLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif

void EXPIMP copy(int a[], int b[], int len);
void EXPIMP replace(int a[], int len, int oldvalue, int newvalue);
void EXPIMP sort(int a[],int len);
int EXPIMP set_union(int a[], int alen, int b[], int blen, int c[]);
bool EXPIMP equal(int a[], int alen, int b[], int blen);
int EXPIMP mismatch(int a[], int alen, int b[], int blen);
int EXPIMP find_first_of(int a[], int alen, int b[], int blen);
void EXPIMP merge(int a[], int alen, int b[], int blen, int c[], int clen);
int EXPIMP max(int a[], int len);
void EXPIMP rotate_left(int a[], int len);