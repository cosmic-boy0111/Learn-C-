#pragma once
#include <string>

#if defined(PRACTICE05DLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif

enum DayNumber {
    Sun,
    Mon,
    Tue,
    Wed,
    Thr,
    Fri,
    Sat
};
enum SortOrder { Ascending, Descending };


int EXPIMP search(int a[], int alen , int number,int ocuurance = 1);
int EXPIMP search(std::string str, std::string target , bool isCase = true , bool isWord = false);
DayNumber EXPIMP dow(int day, int month, int year);
DayNumber EXPIMP dow(int day, int month, int year, DayNumber week_start);
int EXPIMP sumOfDigit(int number);
void EXPIMP sort(int a[],int len, SortOrder order = Ascending );
int EXPIMP len(int number);
int EXPIMP fibonacci(int number);
bool EXPIMP palindrome(int number);
int EXPIMP findLargest(int a[],int len);