/**
 * Практическое занятие №3. Встроенные массивы. Динамическое выделение памяти.
 * Простейшие алгоритмы сортировки и поиска. Сложные указатели.
 */
#include <iostream>
using namespace std;
#include <ctime>
#include <cstring>
#include <algorithm>

int main()
{
    /**
     * Задание 1. Встроенные массивы.
     */

    /**
     * Задание 1.1.
     *
     * Объявите трехмерный N*M*K массив и сформируйте значения
     * элементов, указанные на иллюстрации ниже, с помощью инициализации при
     * объявлении.
     *
     *                   |--------|     
     *                 / |3  3  3 |     
     *               |---------|3 |
     *             / | 2  2  2 |3 |
     *            |---------|2 |__|
     *            | 1  1  1 |2 | /
     *            | 1  1  1 |__| 
     *            | 1  1  1 | /
     *            |_________|
     */

    const unsigned int n1 = 3;
    const unsigned int n2 = 3;
    const unsigned int n3 = 3;
    int arr[n1][n2][n3] = {
        {
            {1, 1, 1},
            {1, 1, 1},
            {1, 1, 1}
        },
        {
            {2, 2, 2},
            {2, 2, 2},
            {2, 2, 2}
        },
        {
            {3, 3, 3},
            {3, 3, 3},
            {3, 3, 3}
        }
    };
    

    /**
     * Задание 1.2.
     *
     * Объявите неинициализированный массив и присвойте значения элементам с
     * помощью кода так, чтобы в итоге получился такой же массив, как в задании
     * 1.1.
     */
    
    const unsigned int mn1 = 3;
    const unsigned int mn2 = 3;
    const unsigned int mn3 = 3;
    int n = 0;
    int sum = 0;
    int ary[mn1][mn2][mn3];
    for (int n = 0; n <= mn1; n++){
        for (int m = 0; m <= mn2; m++){
            for (int k = 0; k <= mn3; k++) {
                ary[n][m][k] = n + 1;
            }
        }
    }
	
	
	for (int i = 0; i < mn1; ++i)  // вывод значений
    {
        for (int j = 0; j < mn2; ++j)
        {
            for (int k = 0; k < mn3; ++k)
            {
                if (n == 3) {
                    std::cout << endl;
                    n = 0;
                }
                cout << ary[i][j][k] << " ";
                n++;

            }
        }
    }

    /**
     * Задание 1.3.
     *
     * Напишите код, с помощью которого можно найти сумму элементов массива,
     * полученного в задании 1.
     */{
        const unsigned int mn1 = 3;
    const unsigned int mn2 = 3;
    const unsigned int mn3 = 3;
    int n = 0;
    int sum = 0;
    int ary[mn1][mn2][mn3];
    for (int n = 0; n <= mn1; n++){
        for (int m = 0; m <= mn2; m++){
            for (int k = 0; k <= mn3; k++){
                ary[n][m][k] = n + 1;
            }
        }
    }
    
	
	
	for (int i = 0; i < mn1; ++i)  // вывод значений массива как набора
    {
        for (int j = 0; j < mn2; ++j)
        {
            for (int k = 0; k < mn3; ++k)
            {
                sum += ary[i][j][k];
                n++;

            }
        }
    }
    std::cout << endl;
    std::cout << "Сумма: "<< sum << endl;
     }

    /**
     * Задание 1.4.
     *
     * Проинициализируйте массив при объявлении следующим образом:
     *
     *                   |--------|     
     *                 / |3  0  0 |     
     *               |---------|0 |
     *             / | 2  0  0 |0 |
     *            |---------|0 |__|
     *            | 1  0  0 |0 | /
     *            | 0  0  0 |__| 
     *            | 0  0  0 | /
     *            |_________|
     *
     * Как это можно сделать наиболее коротким (в смысле количества кода)
     * образом?
     */
    {
	const unsigned int mn1 = 3;
    const unsigned int mn2 = 3;
    const unsigned int mn3 = 3;
    int ary[mn1][mn2][mn3] = {
        {
            {1}
        },
        {
            {2}
        },
        {
            {3}
        }
    };
    
	
	for (int i = 0; i < 3; ++i){
	    for (int j = 0; j < 3; ++j) {
	        for (int k = 0; k < 3; ++k) {
	            std::cout << ary[i][j][k] << " ";
	        }
	        std::cout << std::endl;
	    }
	    std::cout << std::endl;
    }
}

    /**
     * Задание 1.5. Инициализация массивов строковыми литералами.
     * 
     * Объявите и проинициализируйте строковыми литералами два массива:
     * двухмерный массив и массив указателей. Поясните разницу в использовании
     * элементов таких массивов.
     */
    {
    char Ar1[][8]={ "One", "Two", "Three"};
    const char* aPr[]={"One", "Two", "Three"};
    }
    /**
     * Задание 2. Динамическое выделение памяти.
     */

    /**
     * Задание 2.1.
     *
     * Создайте динамический двухмерный массив с размерностями, вычисляемыми в
     * процессе выполнения программы - N*M, эти размерности можно сформировать
     * случайно в некотором диапазоне или ввести с консоли.
     *
     * Задайте значения элементов помощью генератора случайных чисел. 
     *
     * Найдите сумму элементов.
     *
     * Подсказка 1: для генерации случайных чисел используйте функцию
     * стандартной библиотеки - rand() (<cstdlib>).
     *
     * Подсказка 2: На самом деле те значения, которые создаются генератором
     * случайных чисел являются «псевдослучайными», то есть при двух
     * последовательных запусках приложения Вы получаете две одинаковые
     * последовательности значений.
     *
     * Для того чтобы генерируемые "случайные" значения были разными при каждом
     * запуске приложения используйте функции стандартной библиотеки srand()
     * (<cstdlib>) и time() (<ctime>).
     *
     * Функция srand() осуществляет «привязку» начала генерации к указанному в
     * качестве параметра значению.
     *
     * Функция time() задает эту точку отсчета, считывая текущее время.
     */
    {
        srand(time(0));
        int N, M;
        int cnt = 0;
        int count = 0;
        int sum = 0;
        N = (rand() % 5) + 1;
        M = (rand() % 5) + 1;
        int** arr = new int *[N]; //количество строк двухмерного массива
        for (int i = 0; i < N; ++i){
            arr[i] = new int[M]; // количество элементов в строке
        };
        for (int i = 0; i < N; ++i){
            for (int j = 0; j < M; ++j){
                arr[i][j] = rand() % 100;
                sum += arr[i][j];
                    
            }
        };
        
        std::cout << "Массив" << endl;

        for (int i = 0; i < N; ++i){
	        for (int j = 0; j < M; ++j) {
	            std::cout << arr[i][j]<< " ";
	        }
	       std::cout << std::endl;
	    std::cout << std::endl;
    }
    std::cout << "Сумма: " << sum << endl;

    for (int i = 0; i < N; ++i) {
        delete[] arr[i]; // Освобождаем память для каждой строки
    }
    delete[] arr;
    }

    /**
     * Задание 2.2.
     *
     * В сформированном массиве отсортируйте каждую строку по убыванию
     * значений. Используйте сортировку "выбором".
     */
    {
        srand(time(0));
        int N, M;
        int cnt = 0;
        int count = 0;
        N = (rand() % 5) + 1;
        M = (rand() % 5) + 1;
        int** arr = new int *[N]; //количество строк двухмерного массива
        for (int i = 0; i < N; ++i){
            arr[i] = new int[M]; // количество элементов в строке
        };
        for (int i = 0; i < N; ++i){
            for (int j = 0; j < M; ++j){
                arr[i][j] = rand() % 100;
            }
        }
        
        for (int i = 0; i < N; ++i){
	        for (int j = 0; j < M; ++j) {
	            std::cout << arr[i][j]<< " ";
	        }
	       std::cout << std::endl;
	    std::cout << std::endl;
    }
    for (int j=0; j < N; ++j) {
        int rr[M];
        for (int i=0; i < M; ++i) {
            rr[i] = arr[j][i];
        }
        
        int minn = 10000000;
        for (int k = 0; k < M-1; k++)  
            {  
                minn = k;  
                for (int q = k+1; q < M; q++)  
                if (rr[q] < rr[minn])  
                    minn = q;  
                int temp = rr[minn];  
                rr[minn] = rr[k];  
                rr[k] = temp;  
            }
        std::cout << "Отсортированный " << j + 1 << endl;
        for (int i = 0; i < M; ++i){
            std::cout << rr[i] << " ";
        }
        std::cout << endl;
    }
    }

    /**
     * Задание 2.3.
     *
     * Объявите одномерный массив размерностью N. 
     *
     * Сформируйте значение i-ого элемента одномерного массива  равным среднему
     * значению элементов i-ой строки двухмерного массива.
     */
    {
        srand(time(0));
        int N, M;
        int cnt = 0;
        int count = 0;
        int sum = 0;
        double* aver = new double[N];
        N = (rand() % 5) + 1;
        M = (rand() % 5) + 1;
        int** arr = new int *[N]; //количество строк двухмерного массива
        for (int i = 0; i < N; ++i){
            arr[i] = new int[M]; // количество элементов в строке
        };
        for (int i = 0; i < N; ++i){
            for (int j = 0; j < M; ++j){
                arr[i][j] = rand() % 100;
                if (cnt == i){
                    sum += arr[i][j];
                    
            }
                else {
                    aver[i-1] = sum / M;
                    sum = 0;
                    sum += arr[i][j];
                    cnt += 1;
                }
            }
        };
        
        std::cout << "Массив" << endl;

        for (int i = 0; i < N; ++i){
	        for (int j = 0; j < M; ++j) {
	            std::cout << arr[i][j]<< " ";
	        }
	       std::cout << std::endl;
	    std::cout << std::endl;
    }
    aver[N - 1] = sum / M;
    std::cout << "Средние значения каждой строки:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "Среднее значение строки " << i << ": " << aver[i] << std::endl;
    }
    std::cout << "Сумма: " << sum << endl;

    for (int i = 0; i < N; ++i) {
        delete[] arr[i]; // Освобождаем память для каждой строки
    }
    delete[] arr;
    delete[] aver;
    }

    /**
     * Задание 2.4. 
     *
     * Убедитесь, что вся выделенная память очищена.
     *
     * Чтобы убедиться в этом, скомпилируйте программу с включенной проверкой
     * утечек памяти - с ключом `-fsanitize=address`:
     *
     * `gcc <ваши обычные флаги> -fsanitize=address lab3.cpp`
     *
     * Если после выполнении программы выдаются сообщения об утечках, это
     * означает, что где-то не удалена выделенная память.
     */
    // все удалено//

    /**
     * Задание 3.
     */

    /**
     * Задание 3.1. Онлайн-упорядочивание.
     *
     * Напишите фрагмент кода, который вводит N целых чисел с помощью потока
     * ввода в объявленный Вами встроенный одномерный массив, каждый раз
     * упорядочивая полученное значение по возрастанию.
     *
     * Дайте оценку количества сравнений и перестановок при вводе всех чисел
     * относительно N.
     *
     * Постарайтесь, чтобы и сравнений, и перестановок было не больше, чем
     * k*N^2, где k - некоторое число.
     */
    {
    int n;
    std::cout << "Введите значение "<< endl;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i){
        int vvod;
        std::cin >> vvod;
        
        int j = i - 1;
        while (j >= 0 and arr[j] > vvod) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = vvod;
        std::cout << "Текущий отсортированный массив: ";
        for (int k = 0; k <= i; ++k) {
            std::cout << arr[k] << " ";
        }
        std::cout << std::endl;
        
    }
    }      
    /**
     * Задание 3.2. Простой поиск.
     *
     * Модифицируйте предыдущее задание следующим образом:очередное значение
     * вводится в массив только при условии, что там еще такого нет (то есть
     * дубли игнорируются).
     */
    {
    int n;
    std::cout << "Введите значение "<< endl;
    std::cin >> n;
    int* arr = new int[n];
    int tek = 0;
    for (int i = 0; i < n; ++i){
        int vvod;
        std::cin >> vvod;
        
        bool flag = false;
        for ( int k = 0; k < tek; ++k) {
            if (arr[k] == vvod) {
                flag = true;
                std::cout << "Введен дубликат" << endl;
                break;
            }
        }
        
        
        if (flag == false) {
            int j = tek - 1;
            while (j >= 0 and arr[j] > vvod) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = vvod;
            tek++;
            std::cout << "Элемент был добавлен:" << arr[j + 1] << endl;
        }
        std::cout << "Текущий отсортированный массив: ";
        for (int k = 0; k <= tek - 1; ++k) {
            std::cout << arr[k] << " ";
        }
        std::cout << std::endl;
        
    }
}    

     
    /**
     * Задание 4. Сортировка строк.
     *
     * С помощью данной заготовки напишите программу, которая:
     *
     * 1. вводит строки с клавиатуры с помощью cin>>... в объявленный Вами
     *    двухмерный встроенный массив 5*80 элементов типа char; признаком конца
     *    ввода является символ * (то есть строка - "*") или заполнение массива
     *    (больше свободных строк нет);
     * 2. сортирует строки в алфавитном порядке и выводит на экран.
     *
     * Пояснение: крайне не рекомендуется для сортировки сложных объектов
     * физически перемещать их в памяти. Намного эффективнее завести массив
     * указателей на соответствующие строки и перемещать только указатели.
     *
     * Подсказка: для лексиграфического сравнения строк пользуйтесь функцией
     * стандартной библиотеки strcmp(...), заголовочный файл <cstring>.
     */

    {
        const char STOP_STRING[] = "*";  //признак "прекратить ввод"
        const int M  =  80; //максимальный размер одной строки
        const int N  = 10; //максимальное количество строк в массиве

        /** 
         * Объявите двухмерный массив с именем cBuffer типа char и размерностью
         * N*M.
         */
        char cBuffer[N][M];

        /**
         * Объявите массив (с именем cPointers) указателей на строки
         * размерностью N.
         */
        char* cPointers[N];


        /** 
         * Цикл ввода строк:
         * 1. выведите приглашение для ввода; 
         * 2. пока не введена строка STOP_STRING или не заполнен весь массив; 
         */
        int cnt = 0;
        std::cout << "Введите строки(ввод прекратится, когда будет введен знак *)" << endl;
        for (int nIndex = 0; nIndex < N; ++nIndex) {
            std::cin >> cBuffer[nIndex];
            if (strcmp(cBuffer[nIndex], STOP_STRING) == 0) {
                std::cout << "Прием строк завершен" << endl;
                break;
            }
            cPointers[nIndex] = cBuffer[nIndex];
            cnt++;
        }

        {
	    for (int i = 0; i < cnt - 1; ++i) {
            for (int j = 0; j < cnt - i - 1; ++j) {
            // Сравниваем строки по указателям
            if (strcmp(cPointers[j], cPointers[j + 1]) > 0) {
                // Меняем местами указатели, если строки находятся в неправильном порядке
                char* temp = cPointers[j];
                cPointers[j] = cPointers[j + 1];
                cPointers[j + 1] = temp;
                }
            }
        for (int k = 0; k < cnt; ++k) {
            std::cout << cPointers[k] << " ";
                }
        std::cout << endl;
            }
        }
}




            /** ввод строки в массив cBuffer: */
                                    
            /** если введена строка - признак окончания, то выйти из цикла */

            /** Присвойте элементу массива cPointers с индексом nIndex */

            /** указатель на строку с номером nIndex в массиве cBuffer */


        /** Выдать диагностику о том, что прием строк завершен.*/

        /**
         * Теперь сортируем строки.
         *
         * Необходимо использовать сортировку строк по методу "всплывающего
         * пузырька" в порядке возрастания. 
         *
         * На каждой итерации - промежуточная печать отсортированных строк.
         */



/*
    /**
     * Задание 5. Динамические строки.
     *
     * Реализуйте задание №4, используя не встроенные, а динамические массивы
     * (массив?). Так как строки могут быть разной длины, эффективным решением
     * было бы отводить под каждую строку ровно столько байтов, сколько
     * требуется для ее хранения.
     *
     * Реализуйте это задание так, чтобы пользователь мог ввести строку любой
     * длины (которая помещается в память компьютера - читайте: неограниченной
     * длины).
     *
     * При этом необходимые параметры (количество строк) сформируйте с помощью
     * потока ввода.
     */

    {const char STOP_STRING[] = "*"; 
        int nStringNumber = 10;
        char** dynarr = new char*[nStringNumber];
        int cnt = 0;
        std::cout << "Введите строки(ввод прекратится, когда будет введен знак *)" << endl;
        for (int i = 0; i < nStringNumber; ++i) {
            std::string input; // имя переменной для хранения вводных строк 
            std::getline(std::cin, input); // функция которая принимает на вход строку и записывает ее в переменную
            
            if (input ==  STOP_STRING) {
                std::cout << "Прием строк завершен" << endl;
                break;
            }
            dynarr[cnt] = new char[sizeof(input) + 1]; // оператор для выделения динамического элемента (new)
            strcpy(dynarr[cnt], input.c_str()); // strcpy функция которая копирует строку из одного места в другое,
            // где первым элементом у нас указатель на часть памяти выделенной, а второй элемент это наша строка переведенная в С-строку
                // то есть у нас копируется содержимое input в динамическую часть памяти dynarr[cnt]
            cnt++;
        }

        {
	    for (int i = 0; i < cnt - 1; ++i) {
            for (int j = 0; j < cnt - i - 1; ++j) {
            // Сравниваем строки по указателям
            if (strcmp(dynarr[j], dynarr[j + 1]) > 0) {
                // Меняем местами указатели, если строки находятся в неправильном порядке
                char* temp = dynarr[j];
                dynarr[j] = dynarr[j + 1];
                dynarr[j + 1] = temp;
            }
        }
        for (int k = 0; k < cnt; ++k) {
            std::cout << dynarr[k] << " ";
        }
        std::cout << endl;
    }
        }
}

    /** 
     * Задание 6. Работа со строками.
     *
     * Реализуйте следующую программу. Пользователь вводит строку (любого
     * размера), после чего пользователю выводится на консоль следующее
     * изображение, где его ввод помещен в "speech bubble":
     *
     *  _____________________________________
     * / Here user input is shown. This line \ 
     * \ must be at most 40 characters long. /
     *  ------------------------------------
     *     \
     *      \
     *        /\_/\  (
     *       ( ^.^ ) _)
     *         \"/  (
     *       ( | | )
     *      (__d b__)
     *
     *  При этом длина строки в "облачке" должна быть не более 40 символов, при
     *  этом слова должны переноситься аккуратно. Это означет, что не должно
     *  быть переносов в центре слова (если только это слово не больше 40
     *  символов).
     *
     *  Дизайн облачка и ASCII-арт допустимо поменять по усмотрению.
     *
     *  Подсказка: обратите внимание на конкатенацию строковых литералов в
     *  языке С, это позволит задавать подобные рисунки так, чтобы они
     *  адекватно выглядели в коде.
     */
    {
    int i = 0;
    string str;
    int count = 0;
    int spaces = 0;
    int flag_space = 0;
    int last_letter = -1;
    int len = 0;
	std::cout << "Введите строку для котика: "<<endl;
    char *stroka = new char[5000]{};
    cin.getline(stroka, 5000);
	cout<<" __________________________________________"<<endl;
    while (stroka[i] != '\000') {
        // std::cout << str << endl;
        // std::cout << count << stroka[i] << endl;
        if (count == 40 and spaces == 0) {
            std::cout << "|";
            // std::cout << str;
            for (int j=flag_space; j < flag_space +40;  ++j){
                std::cout << stroka[j];
            }
            std::cout << " -|" << endl;
            last_letter = i;
            count = 0;
            str = "";
        }
        if (stroka[i] == ' '){
            flag_space = i;
            ++spaces;
        }
        if (count == 40 and spaces != 0) {
            // std::cout << last_letter;
            // std::cout << flag_space;
            std::cout << "| ";
            for (int j = last_letter + 1; j < flag_space; ++j){
                std::cout << stroka[j];
            }
            int po = last_letter - flag_space;
            for (int k=0; k < po + 41; ++k){
                std::cout << " ";
            }
            std::cout << " |";
            std::cout << endl;
            last_letter = flag_space;
            count = 0;
            spaces = 0;
            str = "";
            i = flag_space;
            for (int k = flag_space; k < len; ++k){
                str += stroka[k];
            }
        }
        str += stroka[i];
        ++count;
        ++i;
        len = i;
    }
    std::cout << "|";
    for (int i=last_letter; i <len; ++i){
        std::cout << stroka[i];
    }
    for (int j = 0; j < last_letter - len + 41; ++j){
            std::cout << " ";
        }
    std::cout << " |" << endl;
    std::cout<<" __________________________________________"<<endl;
    
    
    std::cout<<"     \\"<<endl;
    std::cout<<"      \\"<<endl;
    std::cout<<"       /\\_/\\  ("<<endl;
    std::cout<<"      ( ^.^ ) _)"<<endl;
    std::cout<<"        \\\"/  ("<<endl;
    std::cout<<"      ( | | )"<<endl;
    std::cout<<"     (__d b__)"<<endl;
    delete[] stroka;
}

    /** 
     * Задание 7. Сложные указатели.
     *
     * Объявление и использование указателей на многомерные массивы.
     * Проинициализируйте трехмерный массив double dArray[4][3][3] так, как
     * показано на рисунке и напишите фрагмент кода, который меняет местами
     * значения элементов четных и нечетных слоев:
     *
     *  было:                |--------|     
     *                     / |4  4  4 |     
     *                   |--------| 4 | 
     *                 / |3  3  3 | 4 | 
     *               |---------|3 |   |
     *             / | 2  2  2 |3 | /
     *            |---------|2 |__|
     *            | 1  1  1 |2 | /
     *            | 1  1  1 |__| 
     *            | 1  1  1 | /
     *            |_________|
     *
     *  стало:               |--------|     
     *                     / |3  3  3 |     
     *                   |--------| 3 | 
     *                 / |4  4  4 | 3 | 
     *               |---------|4 |   |
     *             / | 1  1  1 |4 | /
     *            |---------|1 |__|
     *            | 2  2  2 |1 | /
     *            | 2  2  2 |__| 
     *            | 2  2  2 | /
     *            |_________|
     */

    {
        double dArray[4][3][3];
        for(int i=0; i<4; ++i) {
            for (int j=0; j<3; ++j) {
                for (int k=0; k<3; ++k) {
                    dArray[i][j][k] = i + 1;
                }
            }
        }
        {

            /** 
             * Замечание: НЕ НУЖНО МОДИФИЦИРОВАТЬ ВЫРАЖЕНИЯ СПРАВА ОТ ЗНАКА
             * РАВЕНСТВА!!! 
             */
            for (int i=0; i < 3; i+=2) {
            auto &ssyl1 = dArray[i]; // auto &ssyl - ссылка на 0 слой
            auto &ssyl2 = dArray[i+1];
            swap(ssyl2, ssyl1);
            }

            /** переставляем местами элементы i-того и i+1-ого слоев */

        }
        
        for(int i=0; i<4; ++i) {
            for (int j=0; j<3; ++j) {
                for (int k=0; k<3; ++k) {
                    std::cout << dArray[i][j][k];
                }
                std::cout << endl;
            }
            std::cout << endl;
        }
    }
    
    /**
     * Задание 7.
     */

    /**
     * Задание 7.1.
     *
     * Объявите двухмерный встроенный массив элементов типа char.
     *
     * Сформируйте значения элементов массива с помощью генератора случайных
     * чисел таким образом, чтобы в массиве были только символы '*' и '_'.
     *
     * В каждой строке "сдвиньте звездочки" в начало строки, например:
     * было - '*' '_' '_' '*' '*' '_' '*' '_' '*' '_'
     * стало: '*' '*' '*' '*' '*' '_' '_' '_' '_' '_'
     * и распечатайте массив по строкам.
     *
     * При этом оцените количество операций, которое требуется для обработки
     * одной строки относительно длины этой строки.
     *
     * Постарайтесь решить эту задачу так, чтобы требовалось не более k*N 
     * операций, где N - длина строки, k - некое фиксированное число.
     */

    /**
     * Задание 7.2.
     *
     * Модифицируйте предыдущее задание следующим способом: После заполнения
     * массива с помощью генератора случайных чисел "сдвиньте" звездочки по
     * столбцам вниз и распечатайте результат.
     */
    //7.1 и 7.2 объединено в одном
   {
        srand(time(0));
        int zvezd = 0;
        int spzvezd[5];
        char massive[5][10]{};
        for (int i=0; i < 5; ++i) {
            for (int j=0; j < 10; ++j) {
                massive[i][j] = rand() % 2 == 0 ? '*' : '_';
                if (massive[i][j] == '*') {
                    zvezd += 1;
                }
                cout<<"'"<<massive[i][j]<<"' ";

            }
            std::cout << endl;
            spzvezd[i] = zvezd;
            zvezd = 0;
        }
        std::cout << endl;
        char arre[5][10];
        std::cout << "------------------------------------------------" << endl;
        for (int i =0; i < 5; ++i) {
            int nn = 0;
            for (int j = 0; j < spzvezd[i]; ++j){
                std::cout << "'*' ";
                arre[i][nn] = '*';
                nn += 1;
            }
            for (int k=0; k< (10 - spzvezd[i]); ++k){
                    std::cout << "'_' ";
                    arre[i][nn] = '_'; 
                    nn += 1;
             }
            std::cout << endl;
        }
        
        std::cout << "-------------------------------------------------" << endl;
        
        char transport_arr[10][5];
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 5; ++j) {
                transport_arr[i][j] = arre[j][i];
            }
        }
        
        for (int i = 0; i < 10; ++i){
            for (int j=0; j < 5; ++j) {
                std::cout <<"'"<< transport_arr[9 - i][j]<<"'" << " ";
            }
            std::cout << endl;
        }
        
    }
    return 0;
}