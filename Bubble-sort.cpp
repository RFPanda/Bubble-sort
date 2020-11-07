#include "pch.h"
#include <stdio.h>
#include <math.h>
#include <locale.h> 
#include <iostream>
using namespace std; // Khasanov A
int main(){
  setlocale(LC_ALL, "rus");
  int arr[500], k,a; 
  cout << "Введите размер массива до 500: ";
  cin >> a;
  cout << "Введите элементы массива: ";
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < a - 1; i++) {          // Сортировка массива пузырьком
    for (int j = 0; j < a - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        k = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = k;
      }
    }
  }
  cout << "Отсортированный массив: ";
  for (int i = 0; i < a; i++) {
    cout << arr[i] << ";";}
  cout << endl;
  return 0;}
