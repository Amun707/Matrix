#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	system("chcp 1251>nul");
	int n;
	//двумерный массив
	/*const int rows = 4;//кол-во рядов массива
	const int cols = 3;//кол-во колонок массива

	int arr[rows][cols];//двумерный массив типа int с размерами 4 ряда - 3 колонки

	arr[2][0] = 7;
	arr[1][2] = 15;
	std::cout << "arr[2][0] = " << arr[2][0] << std::endl;
	std::cout << "arr[1][2] = " << arr[1][2] << std::endl;*/



	
	//МГНОВЕННАЯ ИНИЦИАЛИЗАЦИЯ ДВУМЕРНОГО МАССИВА
	/*const int R = 3, C = 2;
	int mx[R][C]{
		{7,15},//ряд 0
		{20,5},//ряд 1
		{105,-8}//ряд 2
	};//кол0 кол1*/

	//перебор элементов двумерного массива
	/*const int rows = 10;//кол-во рядов
	const int cols = 5;//кол-во колонок
	int mx[rows][cols];
	std::cout << "Двумерный массив:\n";
	srand(time(NULL));
	for (int i = 0; i < rows; i++) {//цикл i перебирающий ряды массивов
		for (int j = 0; j < cols; j++) {//цикл j перебирающий колонки массива
			mx[i][j] = rand() % (20 + 1 - 1) + 1;//мы делим по модулю на число которое является концом диапазона, диапазон от [1...20]
			std::cout << mx[i][j] << '\t';
		}
		std::cout << std::endl;
	}*/

	//Задание нули в массиве
	/*int array[3][4]{
		{12, 5, 0, 8},//ряд 0
		{14,6, 0, 9},//ряд 1
	    {24, 26, 27, 0},//ряд 2
     };
	int counter = 0;
	std::cout << "Массив:\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << array[i][j] << '\t';
			if (array[i][j] == 0)
				counter++;
		}
		std::cout << std::endl;
	}
	std::cout << "Кол-во нулей: " << counter << "\n\n";*/

	//Задача 1. Информация о массиве
	/*std::cout << "Задача 1.\nМассив:\n";
	const int rows1 = 10;
	const int cols1 = 5;
	int mx1[rows1][cols1];
	srand(time(NULL));
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			mx1[i][j] = rand() % (15 + 1 - 5) + 5;//[5...15]
			std::cout << mx1[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	int sum = 0;
	int min = mx1[0][0];
	int max = min;

	for (int i = 0; i < rows1; i++) 
		for (int j = 0; j < cols1; j++) {
			sum += mx1[i][j];
			min = mx1[i][j] < min ? mx1[i][j] : min;
			max = mx1[i][j] > max ? mx1[i][j] : max;
			
		}
	std::cout << "Сумма всех элементов массива: " << sum << std::endl;
	std::cout << "Их ср. арифметич.: " << sum / (double)(rows1 * cols1) << std::endl;
	std::cout << "Минимальный эл-т массива: " << min << std::endl;
	std::cout << "Максимальный эл-т массива: " << max << "\n\n";*/

	//Задача 2. Максимумы рядов
	std::cout << "Задача 2.\n";
	const int rows2 = 4;
	const int cols2 = 3;
	int mx2[rows2][cols2];
	for(int i=0; i<rows2; i++)
		for (int j = 0; j < cols2; j++) {
			std::cout << "mx2[" << i << "][" << j << "]->";
			std::cin >> mx2[i][j];
		}
	int row_max;
	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < rows2; i++) {
		row_max = mx2[i][0];//в максимум записываем первый эл-т текущего ряда
		for (int j = 0; j < cols2; j++) {
			std::cout << mx2[i][j] << '\t';
			row_max = mx2[i][j] > row_max ? mx2[i][j] : row_max;//: иначе

		}

		std::cout <<"|max: "<<row_max<< std::endl;
	}
	





	return 0;
}