#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
  srand(time(NULL));

  const int ROWS = 3;
  const int COLS = 3;

  // Оголошуємо двовимірний динамічний масив цілих чисел
  int **arr = new int*[ROWS];
  for (int i = 0; i < ROWS; i++) {
      arr[i] = new int[COLS];
  }
  // Заповнюємо масив випадковими значеннями
  for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 10;
        }
    }
  //виводимо масив
  for (int i = 0; i < ROWS; i++) {
    cout<<"\n";
    for (int j = 0; j < COLS; j++) {
      cout<<arr[i][j]<<" ";
    }
  }
  
  // Виводимо елементи на головній діагоналі
    cout << "\nЕлементи на головній діагоналі: ";
    for (int i = 0; i < ROWS; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;

    // Виводимо елементи на побічній діагоналі
    cout << "Елементи на побічній діагоналі: ";
    for (int i = 0; i < ROWS; i++) {
        cout << arr[i][COLS - i - 1] << " ";
    }
    cout << endl;
  
  // Обчислюємо кількість парних та непарних елементів масиву
  int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    cout << "Кількість парних елементів: " << even_count << endl;
    cout << "Кількість непарних елементів: " << odd_count << endl;

  for (int i = 0; i < 3; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}