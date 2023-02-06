#include "practice05.h"
#include <string>
#include <cctype>
#include <vector>
#include<cmath>


using namespace std;


// private


string lower(string str) {
	string ans = "";
	for (auto& x : str) {
		if (x >= 'A' and x <= 'Z') {
			ans.push_back(static_cast<char>(x + 32));
			continue;
		}
		ans.push_back(x);
	}

	return ans;
}


string weekday[7] = { "Sun","Mon","Tue", "Wed","Thu","Fri","Sat" };


void swap(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void reverseNumber(int n,int &ans)
{
	if (n < 10) {
		ans = ans * 10 + n;
		return;
	}

	else {
		ans = ans * 10 + (n % 10);
		reverseNumber(n / 10 , ans);
	}
}


int max(int a, int b) {
	if (a > b) return a;
	return b;
}

void find_max_ele(int a[], int len, int &ans) {
	if (len <= 0) return;
	ans = max(a[len - 1], ans);
	find_max_ele(a, len - 1, ans);
}


// public

int search(int a[], int alen, int number, int ocuurance) {

	for (int i = 0; i < alen; i++) {
		if (a[i] == number) {
			ocuurance--;
			if(ocuurance == 0) return i;
		}
	}

	return -1;

}

int search(string str, string target, bool isCase, bool isWord) {
	if (isWord == false) {
		
		if (isCase == false) {
			str = lower(str);
			target = lower(target);
		}
		for (int i = 0; i < str.size(); i++) {
			int target_after_len = 0;
			for (int j = 0, k = i; j < target.size() and k < str.size() and str[k] == target[j]; j++, k++, target_after_len++);
			if (target_after_len == target.size()) return i;
		}

		return -1;
	}


	if (isCase == false) {
		str = lower(str);
		target = lower(target);
	}


	string temp = "";
	int start_index = 0;
	for (int i = 0; i< str.size(); i++) {
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '?' || str[i] == '!') {
			if (temp == target) return start_index;
			temp = "";
			continue;
		}
		if (temp == "") start_index = i;
		temp.push_back(str[i]);
	}

	if (temp == target) return start_index;

	return -1;
}



DayNumber dow(int day, int month, int year) {
   int mon;
   if (month > 2)
	  mon = month; //for march to december month code is same as month
   else {
	  mon = (12 + month); //for Jan and Feb, month code will be 13 and 14 year--; //decrease year for month Jan and Feb
   }
   int y = year % 100; //last two digit
   int c = year / 100; //first two digit
   int w = (day + floor((13 * (mon + 1)) / 5) + y + floor(y / 4) + floor(c / 4) + (5 * c));
   w = (w + 6) % 7;
   
   return  (DayNumber)w;
}

DayNumber dow(int day, int month, int year, DayNumber week_start) {
   int mon;
   if (month > 2)
	  mon = month; //for march to december month code is same as month
   else {
	  mon = (12 + month); //for Jan and Feb, month code will be 13 and 14 year--; //decrease year for month Jan and Feb
   }
   int y = year % 100; //last two digit
   int c = year / 100; //first two digit
   int w = (day + floor((13 * (mon + 1)) / 5) + y + floor(y / 4) + floor(c / 4) + (5 * c));
   w = (w + 6) % 7;
   
   return  (DayNumber)w;
}

int sumOfDigit(int number) {
	if (number == 0) return 0;
	return number % 10 + sumOfDigit(number / 10);
}

void sort(int a[], int len,SortOrder order) {
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
			if ( order == Descending ? a[j] < a[j + 1] : a[j] > a[j + 1]) {
				swap(a, j, j+1);
			}
}

int len(int number) {
	if (number == 0) return 0;
	return 1 + len(number / 10);
}

int fibonacci(int number) {
	if (number <= 0) return 0;
	if (number == 1) return 1;
	return fibonacci(number - 1) + fibonacci(number - 2);
}

 
bool palindrome(int number) {
	int ans = 0;
	reverseNumber(number, ans);
	return ans == number;
}

int findLargest(int a[], int len) {
	int ans = INT_MIN;
	find_max_ele(a, len, ans);
	return ans;
}
