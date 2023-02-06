#pragma once
#include <string>

#if defined(PRACTICE05_EXPORTS)
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


int  search(int a[], int alen , int number,int ocuurance = 1);
int  search(std::string str, std::string target , bool isCase = true , bool isWord = false);
DayNumber  dow(int day, int month, int year);
DayNumber  dow(int day, int month, int year, DayNumber week_start);
int  sumOfDigit(int number);
void  sort(int a[],int len, SortOrder order = Ascending );
int  len(int number);
int  fibonacci(int number);
bool  palindrome(int number);
int  findLargest(int a[],int len);