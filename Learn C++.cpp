#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <ctime>
#include <thread>
#include <chrono>
#include <typeinfo>
#include <memory>
#include <vector>
#include <list>
#include <forward_list>
#include <array>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include "Sum.h"
#include "MultiFile_Class.h"
#include <functional>
#include <algorithm>
#include <numeric>
#include <mutex>

#include <fstream>
using namespace std;

// Функция для закрепления оператора - switch //
void Quiz();

// Функция для закрепления - if,else //
void isOdd(int num);

// Нахождение факториала числа //
int factorial(int num);

// Нахождение скидки //
void discount();

// Рисуют линии, заданную пользователем //
void line();

// Нахождение суммы нечетных чисел //
void find_sum_odd_num();

// Доступ к серверу //
void Access();

// Рисует прямогульник, заданную пользователем //
void draw_rectangle();

// Сортировка пузырьком //
void BubbleSort();

// Генерация случайных чисел в массиве //
void GenerateRandomNums();

// Двумерный массив //
void double_arr();

// Числа Фибоначчи //
int fib(int a);

// Вычисление факториала рекурсивано //
int fact_recurse(int n);

// Основная функция для работы функции swap_values //
void main_for_func_swap_values();

// Меняем местами две переменные //
void swap_values(int* ptr_a, int* ptr_b);

// Меняем местами две переменные, с помощью ссылком //
template <typename T> // Это шаблонная функция //
void swap_values_ref(T& a, T& b);

// Создание двумерного динамического массива //
void dynamical_dbl_arr();

// Основная функция для трех нижеприведенных функций //
void main_dynamical_arr_copy();

// Заполнение динамического массива //
void fill_arr(int* const arr, int const size);

// Вывод динамического массива //
void show_arr(int* const arr, int const size);

// Копирование данных из одного массива в другой //
void copy_arr(int* paste_arr, int* copy_arr, int const size);

// Добавление элемента в конец массива //
void push_back(int*& arr, int& size, const int value);

// Удаление элемента с конца массива //
void pop_back(int*& arr, int& size);

// Добавление элемента в середину массива //
int add_arr_elem(int*& arr, int& size, const int index, const int value);

// Реализация функции strlen() // Подсчитывает кол-во символов в строке //
int string_len(char str[]);

string good();

string bad();

// Указатель на функцию //
void show_answer(string(*func)());

// Макросы. Препроцессор. Условная компиляция //
void conditional_compilation();

// Тернарный оператор //
void ternar_operator();

// Изучение ООП. Создание Классов //
int Learning_OOP_Class();

// Изучение ООП. Методы класса. Функция в классе //
int Learning_OOP_Methods();

// Изучение ООП. Модификаторы класса //
void Learning_OOP_Modificators();

// Изучение ООП. Методы - Геттер и Сеттер //
void Learning_OOP_Methods_Get_Set();

// Изучение ООП. Инкапсуляция //
void Learning_OOP_Incapsulation();

// Изучение ООП. Конструктор Класса //
void Learning_OOP_Constructor_Classa();

// Изучение ООП. Перегрузка Конструктора класса //
void Learning_OOP_Constructor_Classa_Peregruzka();

// Изучение ООП. Деструктор Класса //
void Learning_OOP_Destructor_Classa();

// Обычная Викторина //
void Victorina();

// Изучение ООП. Ключевое слово this //
void Learning_OOP_KeyWord_this();

// Изучение ООП. Конструктор Копирования //
void Learning_OOP_Constructor_Copirovania();

// Изучение ООП. Перегрузка Оператора Присваивания //
void Learning_OOP_Peregruzka_Operatora_Prisvaivania();

// Изучение ООП. Перегрузка оператора равенства == и не равно !=. Перегрузка логических операторов сравнения //
void Learning_OOP_Peregruzka_Logical_Operators_Sravnenia();

// Изучение ООП. Перегрузка оператора сложения. Также перегрузка инкремента и декремента //
void Learning_OOP_Peregruzka_Operatora_Sum();

// Изучение ООП. Перегрузка оператора индексирования //
void Learning_OOP_Peregruzka_Operatora_Index();

// Изучение ООП. Дружественные функции и классы//
void Learning_OOP_Friend_Functions_Classes();

// Изучение ООП. Определение методов вне класса. Вынести функцию из класса. Вынести описание метода вне класса. //
void Learning_OOP_Method_Out_Of_Class();

// Изучение ООП. Дружественный метод класса. //
void Learning_OOP_Friend_Class_Method();

// Реализация собственного класса string //
void String_Class();

// Изучение ООП. Дружественные классы //
void Learning_OOP_Friend_Class();

// Изучение ООП. Ключевое слово - static //
void Learning_OOP_Key_Word_Static();

// Изучение ООП. Статические методы класса. Модификатор static //
void Learning_OOP_Static_Methods();

// Изучение ООП. Вложенные классы //
void Learning_OOP_Inner_Class();

// Изучение ООП. Массив объектов класса. Динамический. Статический //
void Learning_OOP_Arr_Class_Objects();

// Изучение ООП. Агрегация и Композиция. Отношения между классами и объектами //
void Learning_OOP_Agregation_Composition();


// ТЕМА: НАСЛЕДОВАНИЕ //

// Изучение ООП. Наследование в ООП пример. Что такое наследование. Для чего нужно наследование классов. //
void Learning_OOP_Inheritance();

// Изучение ООП. Модификаторы доступа при наследовании. private public protected Спецификаторы доступа. //
void Learning_OOP_Modificators_Inheritance();

// Изучение ООП. Порядок вызова конструкторов и деструкторов при наследовании. Как вызываются конструкторы и деструкторы //
void Learning_OOP_Constructors_Destructors_Inheritance();

// Изучение ООП. Вызов конструктора базового класса из конструктора класса-наследника. //
void Learning_OOP_Constructors_Base_Class_Inheritance();


// ТЕМА: ПОЛИМОРФИЗМ //

// Изучение ООП. Виртуальные методы класса. Ключевое слово virtual. Ключевое слово override //
void Learning_OOP_virtual_functions_Polymorphism();

// Абстрактный класс. Чисто виртуальная функция. //
void Learning_OOP_abstract_class_Polymorphism();

// Изучение ООП. Виртуальный деструктор //
void Learning_OOP_Virutal_Destructor();

// Изучение ООП. Чисто виртуальный деструктор //
void Learning_OOP_Just_Virutal_Destructor();

// Изучение ООП. Делегирующие конструкторы //
void Learning_OOP_Delegate_Constructor();

// Изучение ООП. Вызов виртуального метода базового класса //
void Learning_OOP_Virutal_Method_Base_Class();

// Изучение ООП. Множественное наследование //
void Learning_OOP_Many_Inheritance();

// Изучение ООП. Множественное наследование. Одинаковые методы //
void Learning_OOP_Many_Inheritance_Same_Methods();

// Изучение ООП. Интерфейсы //
void Learning_OOP_Interface();

// Изучение ООП. Виртуальное наследование. Ромбовидное наследование //
void Learning_OOP_Virutal_Rombical_Inheritance();

// Конец изучения ООП //


// Работа с файлами //

// Работа с файлами.  Запись в файл.  ofstream. //
void Work_With_File_Writing();

// Работа с файлами. Чтение из файла //
void Work_With_File_Reading();

// Работа с файлами. Запись ОБЪЕКТА КЛАССА в файл. Чтение объекта из файла //
void Work_With_File_Reading_Writing_Object();

// Работа с файлами. Чтение и запись в файл используя класс fstream //
void Work_With_File_Fstream();

// Работа с файлами. Потоковый ввод вывод в файл . Перегрузка операторов. //
void Work_With_File_Reload_Operators_In_Out();


// Обработка исключений -  try catch //
void try_catch();

// Генерация исключений. throw //
void Key_Word_Throw();

// Несколько блоков catch. Обработка исключений //
void few_catch_blocks();

// Свой класс exception. Создание собственного класса исключений. //
void Class_Exception();

// Перечисляемый тип enum //
void ENUM();

// Пространства имен. namespace  //
void NAMESPACE();

// Шаблоны классов//
void class_templates();

// Наследование шаблоных классов //
void class_templates_inheritance();

// Специализация шаблона класса //
void Specialization_templates_class();

// Структуры | struct. Разница между структурой и классом. //
void Structures();

// Умные указатели //
void Smart_Pointers();

// Умные указатели. Часть 2. auto_ptr | unique_ptr | shared_ptr. И работа с динамическим массивом //
void Smart_Pointers_Part2();


// ДИНАМИЧЕСКИЕ СТРУКТУРЫ ДАННЫХ //

// Односвязный список //
void linked_list();


// Изучение STL //

// vector | Библиотека стандартных шаблонов (STL) //
void STL_Vector();

// Итераторы STL //
void STL_ITERATORS();

// Ключевое слово auto //
void key_word_auto();

// Двусвязный список //
void STL_LIST();

// Цикл foreach | range-based циклы //
void range_based_cycles_foreach();

// Односвязный списко | forward list stl // 
void forward_list_stl();

// Arrat stl | Статический Массив //
void array_stl();

// Контейнеры STL и операторы сравнения //
void compare_operators();

// Дэк, двусторонняя очередь //
void deque_stl();

// Set | Multiset | Ассоциативные контейнеры | Представлены в виде бинарного дерева //
void set_multiset();

// Ключевое слово typedef //
void keyword_typedef();

// MAP | MULTIMAP | Ассоциативные контейнеры //
void map_multimap();

// Stack. Адаптеры контейнеров  //
void Stack();

// Очередь и Очередь с приоритетом. Адаптеры контейнеров //
void Queue_PriorityQueue();

// STL Алгоритмы сортировки | Бинарный предикат | Лямбда функции //
void Sort_Algorithms_STL();

// STL алгоритмы поиска | find | find_if | find_if_not | //
void Search_Algorithm();

//  copy |  copy_if | Выборка данных по условию // 
void Copy_Algorithm();

// stl remove | stl remove_if | stl удаление элемента по условию //
void STL_remove();

// Поиск максимального элемента | max_element c++ // 
void STL_max_min_element();

// accumulate | сумма и произведение элементов массива //
void STL_accumulate();

// STL equal и mismatch | Сравнение массивов //
void STL_equal_mismatch();

// Алгоритм for_each //
void STL_foreach();

// STL unique | Удалить повторяющиеся элементы  // 
void STL_Unique();

// Отсортировать массив в случайном порядке | random_shuffle  //
void STL_random_shuffle();


// Just C++ //

// Многофайловый проект //
void Multifile_project();

// Union //
void Union();

// std::function | Полиморфная обёртка функции //
void std_function();

// Лямбда-выражения | Лямбда функции | Анонимные функции //
void lyambda_func();

// Измерение Времени выполнения кода //
void time_execution_code();

// Функторы или же функциональные объекты //
void Functors();

// Предикаты //
void Predicates();



// ТЕМА: МНОГОПОТОЧНОЕ ПРОГРАММИРОВАНИЕ // MULTI THREADING

// Многопоточность | Потоки | thread | //
void MultiThread_thread();

// Многопоточность | Потоки с параметрами | // 
void MultiThread_thread_with_parametres();

// Многопоточность | Возврат результата из потока по ссылке | //
void MultiThread_thread_result_link();

// Многопоточность | Лямбда выражения и возврат результата выполнения потока | // 
void MultiThread_lyambda();

// Многопоточность | потоки и методы класса | метод класса в потоке | //
void MultiThread_ClassMethods();

// Многопоточность | mutex | Cинхронизация потоков |  // 
void MultiThread_Mutex();

// Многопоточность | DeadLock | Взаимная блокировка | Защита разделяемых потоков // 
void Dead_Lock_mutex();

// Многопоточность | unique_lock | Защита разделяемых данных // 
void MultiThread_unique_lock();

// Многопоточность | recursive_mutex | Рекурсивная блокировка // 
void MultiThread_recursive_mutex();


// TASKS

char* trim_str(char* str, int to_trim);

void task_Class();

char* uncesnor_str(char* censor_str, char* letters);

int doubledPay(int days);

bool is_prime(int n);

int Goldbach_expectation(int n);

void diff_max_min();

const char* get_type_of_triangle(vector<int> arr);



const char* inatorInator(const char* word);

const char* concatStrings(const char* s1, const char* s2);

void mx_str_reverse(char* s);

char* mx_itoa(int number);



int main(void)
{
    setlocale(LC_ALL, "ru");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    srand(time(NULL));

    cout << inatorInator("EvilClonE") << endl;

    return 0;
}

void mx_str_reverse(char* s) {
    int length, c;
    char* begin, * end, temp;

    length = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        length++;
    }

    begin = s;
    end = s;

    for (c = 0; c < length - 1; c++) {
        end++;
    }

    for (c = 0; c < length / 2; c++) {
        temp = *end;
        *end = *begin;
        *begin = temp;

        begin++;
        end--;
    }
}

char* mx_itoa(int number) {
    bool is_neg = false;
    int i = 0;
    char* str = (char*)malloc(100);
    if (number == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    if (number < 0) {
        is_neg = true;
        number = -number;
    }

    while (number != 0) {
        int dig = number % 10;

        if (dig > 9) {
            str[i++] = (dig - 10) + 'a';
        }

        else {
            str[i++] = dig + '0';
        }

        number /= 10;
    }

    if (is_neg) {
        str[i++] = '-';
    }

    str[i] = '\0';

    mx_str_reverse(str);

    return str;
}


const char* concatStrings(const char* s1, const char* s2)
{
    int s1_size = 0;
    int s2_size = 0;
    for (int i = 0; s1[i] != '\0'; i++) s1_size++;
    for (int i = 0; s2[i] != '\0'; i++) s2_size++;

    char* concat = new char(s1_size + s2_size + 1);
    int j = 0;
    int flag = 0;
    for (int i = 0; i < s1_size + s2_size + 1; i++)
    {        
        concat[i] = s1[i];
        if (s1[i] == '\0' || flag == 1) 
        {
            flag = 1;
            concat[i] = s2[j];
            j++;
        }
    }
    concat[s1_size + s2_size + 1] = '\0';

    return concat;
    
}

bool check_if_last_word_vowel(const char* str)
{
    char vowels_letter[5] = { 'a','e','i','o','u' };

    int str_size = 0;

    for (int i = 0; str[i] != '\0'; i++) str_size++;
    
    for (int i = 0; i < 5; i++)
    {
        if(str[str_size - 1] == vowels_letter[i] || str[str_size - 1] == toupper(vowels_letter[i])) return true;
    }

    return false;

}

const char* inatorInator(const char* word)
{
    int word_size = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        word_size++;
    }

    const char* new_word = NULL;
    if (check_if_last_word_vowel(word)) new_word = concatStrings(word, "-inator ");
    else new_word = concatStrings(word, "inator ");

    const char* num = mx_itoa(word_size);
    const char* total = concatStrings(num, "000");

    return concatStrings(new_word, total);
}


const char* get_type_of_triangle(vector<int> arr)
{
    const char* answer = NULL;
    if (arr.size() != 3) answer = "Not a triangle";
    if(arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2]) answer = "scalene triangle";
    if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) answer = "isosceles triangle";
    if (arr[0] == arr[1] && arr[0] == arr[2] && arr[1] == arr[2]) answer = "equilateral triangle";
    return answer;
}


// Начало работы над recursive mutex // 

// Если нам нужно несколько раз выполнить захват mutex'a, то мы должны использовать рекурсивный mutex
recursive_mutex rec_m;

// В этой функции мы не сможем использовать обычный mutex, т.к. 1 поток будет вызывать метод lock() более одного раза, что повлечет за собой ошибку
void just_a_funcy(int a)
{
    rec_m.lock();
    cout << a << " ";

    this_thread::sleep_for(chrono::milliseconds(300));

    if (a <= 1)
    {
        cout << endl;
        rec_m.unlock();
        return;
    }

    a--;
    just_a_funcy(a);
    rec_m.unlock();
}

void MultiThread_recursive_mutex()
{
    thread t1(just_a_funcy,10);
    thread t2(just_a_funcy,6);

    t1.join();
    t2.join();

}
// Конец работы над recursive mutex // 



// Начало работы над UniqueLock'ом
mutex mtx4; // Создаем mutex
void Print_Rect_2(char ch)
{
    unique_lock<mutex> ul(mtx4,defer_lock); // Передам вторым параметром - defer_lock, метод lock() вызван НЕ будет

    this_thread::sleep_for(chrono::milliseconds(2000));

    ul.lock();

    //unique_lock<mutex> ul(mtx4); // Создаем unique_lock / по умолчанию вызывает mtx4.lock()

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << ch;
            this_thread::sleep_for(chrono::milliseconds(20));
        }
        cout << endl;
    }
    cout << endl;

    ul.unlock(); // mtx4.unlock()

    this_thread::sleep_for(chrono::milliseconds(2000));
}

void MultiThread_unique_lock()
{
    thread th1(Print_Rect_2, '#');
    thread th2(Print_Rect_2, '*');
    th1.join();
    th2.join();
}
// Конец работы над UniqueLock'ом



// Начало работы над DedLock'ом
mutex mtx2; // Создаем mutex
mutex mtx3;

void Print_Rect_star()
{
    //mtx3.lock();
    mtx2.lock();
    // Если убрать задержку все будет работать, а может быть и нет. Т.к. мы имитируем долгое выполнение программы и оно может менятся в зависимости от кода
    this_thread::sleep_for(chrono::milliseconds(1));

    mtx3.lock();
    //mtx2.lock(); // Закрываем досуп, чтобы пока с этим кодом работает 1 поток, к нему не мог получить доступ 2-ой поток

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << '*';
            this_thread::sleep_for(chrono::milliseconds(10));
        }
        cout << endl;
    }
    cout << endl;
    mtx2.unlock();
    mtx3.unlock();
}

void Print_Rect_hash()
{
    mtx2.lock();

    this_thread::sleep_for(chrono::milliseconds(1));

    mtx3.lock(); // Закрываем досуп, чтобы пока с этим кодом работает 1 поток, к нему не мог получить доступ 2-ой поток

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << '#';
            this_thread::sleep_for(chrono::milliseconds(10));
        }
        cout << endl;
    }
    cout << endl;
    mtx2.unlock();
    mtx3.unlock();
}

void Dead_Lock_mutex()
{
    // Код не запустится т.к. происходит взаимная блокировка: мы сначала закрываем mtx3 потом происходит задержка и mtx2 уже закрыт в функции ..hash
        // Чтобы избержать взаимную блокировку нужно закрывать mutex одинаково как в одной функции и в другой
            // То есть: func() { mutex1.lock(); mutex2.lock(); }  func_2() {mutex1.lock(); mutex2.lock();}
    thread t1(Print_Rect_star);
    thread t2(Print_Rect_hash);

    t1.join();
    t2.join();
}
// Конец работы над DedLock'ом



// Начало работы над mutex'ом
mutex mtx1; // Создаем mutex
void Print_Rect(char ch)
{
    mtx1.lock(); // Закрываем досуп, чтобы пока с этим кодом работает 1 поток, к нему не мог получить доступ 2-ой поток

    // Также мы можем использовать класс lock_guard, он автоматически закрывает доступ и в конце выхода из функции открывает.
        // lock_guard<mutex> guard(mtx1);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << ch;
            this_thread::sleep_for(chrono::milliseconds(20));
        }
        cout << endl;
    }
    cout << endl;
    mtx1.unlock(); // Открываем доступ, чтобы следующий поток мог получить к функции доступ
}

void MultiThread_Mutex()
{ // #include <mutex>

    thread th1(Print_Rect, '#');
    thread th2(Print_Rect, '*');
    th1.join();
    th2.join();

}
// Конец работы над mutex'ом



void MultiThread_ClassMethods()
{
    class ThreadClass
    {
    public:
        void Do_Thread()
        {
            this_thread::sleep_for(chrono::milliseconds(3000));
            cout << "Thread ID = " << this_thread::get_id() << " =====\tFunc: Do_Thread STARTED\t=====" << endl;

            this_thread::sleep_for(chrono::milliseconds(2000));

            cout << "Thread ID = " << this_thread::get_id() << " =====\tFunc: Do_Thread FINISHED\t=====" << endl;
        }
        int Do_Thread_Sum(int a, int b)
        {
            this_thread::sleep_for(chrono::milliseconds(2000));
            cout << "Thread ID = " << this_thread::get_id() << " =====\tFunc: Do_Thread_Sum STARTED\t=====" << endl;

            this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Thread ID = " << this_thread::get_id() << " =====\tFunc: Do_Thread_Sum FINISHED\t=====" << endl;

            return a + b;
        }
    };

    ThreadClass thc;
    int res_sum = 0;
    thread th([&res_sum, &thc]() {res_sum = thc.Do_Thread_Sum(22, 33); }); // Методы класса, которое возвращаюат значение нужно вызыват через лямбду
    thread th1(&ThreadClass::Do_Thread,thc); // Методы класса, которые НЕ возвращают значения можно вызывать вот так
    

    for (int i = 0; i < 10; i++)
    {
        cout << "Main Thread ID = " << this_thread::get_id() << " number: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th.join();
    th1.join();
    cout << "Class Method - Do_Thread_Sum\nsum result = " << res_sum << endl;
}



// Начала работы над Лямбда выражения и возврат результата выполнения потока //
int Do_Thread_Sum_2(int a, int b)
{
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "=====\tFunc: Do_Thread_Sum STARTED\t=====" << endl;
    this_thread::sleep_for(chrono::milliseconds(3000));
                    
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "=====\tFunc: Do_Thread_Sum FINISHED\t=====" << endl;

    return a + b;
}


void MultiThread_lyambda()
{
    // Чтобы получить результат нам нужно исползовать анонимную функцию ( лямба выражение )
    int res = 0;
    thread th([&res]() { res = Do_Thread_Sum_2(5, 6); }); // Функция выполнится в отдельном потоке и получает результат в перменную res
    

    for (int i = 0; i < 10; i++)
    {
        cout << "Main Thread ID = " << this_thread::get_id() << "number: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    th.join();
    cout << "Sum = " << res << endl;
}
// Конец работы над Лямбда выражения и возврат результата выполнения потока //


// Начала работы над Возврат результата из потока по ссылке //
void Do_Thread_Link(int &a) // Передаем в функцию параметр по ссылке
{ // Все изменения, которые мы проделаем в функции отразятся на перменной, которую мы передаем
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "Thread ID = " << this_thread::get_id() << "=====\tFunc: Do_Thread_Link STARTED\t=====" << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));

    a *= 2;

    cout << "Thread ID = " << this_thread::get_id() << "=====\tFunc: Do_Thread_Link FINISHED\t=====" << endl;
}


void MultiThread_thread_result_link()
{
    int a = 6;

    thread th(Do_Thread_Link,std::ref(a)); // У нас результат не изменится, т.к. поток по умолчанию передает элемент по значению, даже если у нас указано, что мы его передаем по ссылке
        // Чтобы передать параметр по ссылке нужно использоввать функцию ref из std

    for (int i = 0; i < 10; i++)
    {
        cout << "Main Thread ID = " << this_thread::get_id() << "number: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th.join();
    cout << "a = " << a << endl;

}
// Конец работы над Возврат результата из потока по ссылке //



// Начала работы над потоками с параметрами //

void Do_Thread_Sum(int a, int b)
{
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "=====\tFunc: Do_Thread_Sum STARTED\t=====" << endl;

    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << a << " + " << b << " = " << a + b << endl;

    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "=====\tFunc: Do_Thread_Sum FINISHED\t=====" << endl;
}

void MultiThread_thread_with_parametres()
{
    thread th(Do_Thread_Sum,10,11); // При создании потока, 1-ый парамтер - название функции, остальные передаваемые параметры в функцию
    for (int i = 0; true ; i++)
    {
        cout << "Main Thread ID = " << this_thread::get_id() << "number: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th.join();
}
// Конец работы над потоками с параметрами //



// Начала работы над Многопоточном Программировании //
void Do_Work()
{
    for (size_t i = 0; i < 5; i++)
    {
        cout << "Thread ID (DoWork) = " << this_thread::get_id << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}

void MultiThread_thread()
{ // #include <thread> - с потоками // #include <chrono> - со временем
    
    // Чтобы разделить потоки ( они выполнялись параллельно, тем смым опитимизировать работу программы )
    thread th(Do_Work); // Создаем экземпляр потока и передаем туда функцию, которая будет выполняться параллельно
    
   // th.detach(); // Разрыв связи между потоком новым и основным

    // sleep_for - останавливает поток
    this_thread::sleep_for(chrono::milliseconds(500)); // Останавливает на определенное время используя библитеку chrono ( передаем в скобках в миллисекундах ) поток
    cout << "Thread ID (Main) = " << this_thread::get_id() << endl; // this_thread - пространство имен, имеет в себе метод get_id - получить айди потока

    for (size_t i = 0; i < 6; i++)
    {
        cout << "Thread ID (Main) = " << this_thread::get_id() << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th.join(); // Дожидается выполнения задачи в отдельном потоке ( ВАЖНО: Его нужно вызывать где мы хоти дождаться выполнения работы потока ) ( в конце )



}
// Конец работы над Многопоточном Программировании //


void STL_random_shuffle()
{
    int arr[] = { 1,2,3,4,5,6,7 };
    cout << "Массив до рандомной сортирвоки:\n";
    for (auto el : arr)
    {
        cout << el << " ";
    }

    random_shuffle(begin(arr),end(arr)); // Сортирует в случайном порядке используя rand()

    cout << "\nМассив ПОСЛЕ рандомной сортирвоки:\n";
    for (auto el : arr)
    {
        cout << el << " ";
    }


    // Использование полиморфизма с random_shuffle
    class IAction // базовый класс
    {
    public:
        virtual void Action() = 0; // Создаем виртуальный метод
    }; 

    class CatAction : public IAction // наследуем класс IAction
    {
    public:
        virtual void Action() override // Переопределяем метод
        {
            cout << "cat is meowing" << endl;
        }
    };

    class DogAction : public IAction
    {
        virtual void Action() override // Переопределяем метод
        {
            cout << "dog is roaring" << endl;
        }
    };

    class BirdAction : public IAction
    {
        virtual void Action() override // Переопределяем метод
        {
            cout << "bird is signing" << endl;
        }
    };

    // Чтобы методы классов вызывались в случайном порядке, нам нужно:
    // 1) создать массив, тип данных - указатель на IAction, чтбобы мы могли вызвать методы у наследников базового класса IAction
    IAction* new_arr[] = {
        new CatAction(),
        new DogAction(),
        new BirdAction(),
    };

    cout << "\nПолиморфизм и random_shuffle" << endl;
    random_shuffle(begin(new_arr), end(new_arr)); // Теперь методы класса будут вызываться в случайном порядке
    for (auto el : new_arr)
    {
        el->Action();
    } 
}


void STL_Unique()
{
    const int SIZE = 9;
    int arr[] = { 5,67, 67, 67, 7, 123, 89, 89, 89};
    vector<int> vec;

    cout << "Массив до удаления повторяющихся элементов: " << endl;
    for_each(begin(arr), end(arr), [](int a) {cout << a << endl; });

    // unique - возвращает итератор на гранцу между повторяющимся элементами и нет
    auto result = unique(begin(arr), end(arr)); // unique - удаляет повторяющиеся элементы

    cout << "Массив ПОСЛЕ удаления повторяющихся элементов: " << endl;
    for_each(begin(arr), result, [](int a) {cout << a << endl; }); // 2-ым параметром передаем итератор на границу между повторяющимся элементами

    // unique_copy - копирует уникальные элементы в новый контейнер
    unique_copy(begin(arr),end(arr),back_inserter(vec)); // back_inserter помещаем элементы в другой контейнер
}


void STL_foreach()
{
    int arr[] = {5, 6, 78, 90, 125};

    // Суть for_each - перебрать элементы и далее взаимодействовать с ними передаваемой функцией
        // Если параметр в функции сделать ссылкой, то будет изменяться изначальная коллекция
    for_each(begin(arr), end(arr), [](int& a) {cout << a << endl; a++; }); // Алгоритм for_each // 3ий параметр - функция // Каждый элемент он будет передавать в нашу функцию
}


void STL_equal_mismatch()
{
    class Point
    {
    public:
        Point(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        int x, y;
    };
    vector<Point> vec1{
        Point(5,6),
        Point(1,3),
        Point(7,4),
    };
    vector<Point> vec2{
      Point(5,6),
      Point(1,3),
      Point(7,4),
    };

    int arr1[] = { 56, 11, 87, 9, 13, -1 };
    int arr2[] = { 55, 11, 87, 9, 13, -1 };
    // Мы можем также сравнивать разные коллекции, например вектор и массив
    bool check = equal(begin(arr1), end(arr1),begin(arr2),end(arr2)); // equal - сравнивает равны ли 2 коллекции, 1-ый и 2-ой параметр начало и конец 1-ой коллекции, 3-ий и 4-ый параметр - начал и конец 2-ой коллекции
    if (check) cout << "Алгоритм - check\narr1 и arr2 равны\n";
    else cout << "Алгоритм - check\narr1 и arr2 НЕ равны\n";

    // Mismatch - также проверяет на равенство 2 коллекци, но еще если он нашел элементы, которые не равны он возвращает итератор на пару элементов
    auto check_mismatch = mismatch(begin(arr1), end(arr1), begin(arr2), end(arr2));
    if (check_mismatch.first == end(arr1) && check_mismatch.second == end(arr2))
    {
        cout << "Алгоритм - mismatch\narr1 и arr2 равны \n";
    }
    else
    {
        cout << "Алгоритм - mismatch\narr1 и arr2 НЕ равны \n" << "В arr1 элемент - " << *check_mismatch.first << " В arr2 элемент - " << *check_mismatch.second << endl;
    }

    // Используем предикат  c equal

    // У нас в классе не реализован перегузка оператора сравнения, поэтому используем предикат
    bool res = equal(begin(vec1), end(vec1), begin(vec2), end(vec2), [](const Point& p1, const Point& p2) {return p1.x == p2.x && p1.y == p2.y; });
}


void STL_accumulate()
{ // #include <numeric>
    vector<int> vec = {10,3,4,2,1};
    // ПО умолчанию accumulate - подсчитывает сумму элементов в коллекции
    auto res = accumulate(begin(vec), end(vec), 0); // Третий параметр - точка отсчета, к какому изначальному значению будут прибавляться элементы коллекции // Если мы просто хотим посчитать сумму просто пишем - 0
    cout << "Сумма элементов в векторе: " << res << endl;

    // Произведение элементов // Для произведение используем 4-ий параметр - функцию ( начальная точка расчета должна быть 1 и больше
    auto mult = accumulate(begin(vec), end(vec), 1, [](int a, int b) {return a * b; }); // Она должна принимать 2 параметра, 1ый - хранит текущее состояние при расчете, 2ой - тот, который умножаем
    cout << "Произведение элементов в векторе: " << mult << endl;

    // В алгоритме accumulate - мы можем реализовать любое выражение. Например: сумма четных элементов
    auto sum_odd = accumulate(begin(vec), end(vec), 0, [](int a, int b) {return (b % 2 == 0 ? a + b : a); });
    cout << "Сумма четных элементов в векторе: " << sum_odd << endl;

    // Точка отчета также является с каим типом данных мы будем работать
    // Используем в 1-ом параметре метод next, чтобы перейти к след. элементу и у нас не было повторений при выводе, т.к. точка отчета у нас 1ый элемент
    auto int_to_str = accumulate(next(begin(vec)), end(vec), to_string(vec[0]), [](string a, int b) {return a + '-' + to_string(b); });
    cout << "Числа переведнные в строку: " << int_to_str << endl;

}


void STL_max_min_element()
{
    vector<int> vec = { 55, 123, -1, 4, 0, -567, 891 };
    list<int> lst = {-491, 55,33, 89, 0, -90, 12};

    const int SIZE = 6;
    int arr[SIZE] = {11, 22, 0, -67, 841, -2};

    auto max = max_element(vec.begin(),vec.end()); // Находим макс. элемент в векторе
    auto min = min_element(vec.begin(), vec.end()); // Находим макс. элемент в векторе

    auto max_lst = max_element(lst.begin(),lst.end());
    auto max_arr = max_element(arr, arr + SIZE); // Вот для массива

    cout << "Max element = " << *max << endl; // Переменная max хранит итератор на макс. число, поэтому её надо разименовывать
    cout << "Min element = " << *min << endl;

    // Еще один метод - minmax_element(), находит сразу мин. и макс. элемент
    auto min_max = minmax_element(lst.begin(),lst.end()); // Он возвращает пару значений
    cout << "Min element in list = " << *min_max.first << endl; // first это мин элемент
    cout << "Max element in list = " << *min_max.second << endl; // second это макс элемент

}



void STL_remove()
{
    class Abiturient
    {
    public:
        string name;
        int score_math;
        int score_eng;
        Abiturient(string name, int score_math, int score_eng)
        {
            this->name = name;
            this->score_math = score_math;
            this->score_eng = score_eng;
        }
    };
    vector<Abiturient> abiturs = {
     Abiturient("Павел",150,170),
     Abiturient("Маша",121,155),
     Abiturient("Дмитрий",195,139),
     Abiturient("Арсений",137,152),
     Abiturient("Антон",104,141),
     Abiturient("Сергей",141,167),
     Abiturient("Артём",187,179),
     Abiturient("Владимир",157,178),
    };

    vector<int> vec = {11, 568, 4, 509, 345, 2, 1, 11};

    // По факту данный метод не удаляет выбранный нами элемет, а вовращает итератор, и элемент который мы выбрали переходят в конец коллекции
    auto to_remove = remove(vec.begin(), vec.end(), 11); // Method - remove, 3-ий параметр - элемент, который мы хотим удалить
    // Чтобы закончит дело и удалить элементы, нужно вызвать метод - erase
    vec.erase(to_remove, vec.end());

    for (auto el : vec)
    {
        cout << el << endl;
    }

    // remove_if
    auto remove_abitur = remove_if(abiturs.begin(), abiturs.end(), [](const Abiturient& ab) { return ab.score_math <= 140; });
    abiturs.erase(remove_abitur, abiturs.end());
}


void diff_max_min()
{
    const int SIZE = 100;
    int arr[SIZE];
    int count = 0;
    cout << "Вводите числа ( не более 100 ), если захотите закончить - введите 0\n";
    while (true)
    {
        cout << count + 1 << " число: ";
        cin >> arr[count];
        if (arr[count] == 0)
        {
            cout << "Отлично! Числа были записаны!\n";
            arr[count] == NULL;
            break;
        }
        else if (count == 99) cout << "Внимание вы можете записать еще 1 число!!!" << endl;
        else if (count == 100) break;
        else count++;
    }

    int max, min, temp = 0;
    int swap = -1;

    while (swap != 0)
    {
        swap = 0;
        for (int i = 0; i < count - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap++;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << endl;
    }
    max = arr[count - 1];
    min = arr[0];

    cout << "Разница между макс. и мин. числом = " << max - min << endl;
   
}


bool is_prime(int n)
{
    int m = n / 2;
    int flag = 0;
    if (n > 1)
    {
        for (int i = 2; i <= m; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                return false;
            }
        }
        if (flag == 0) { return true; }
    }
}

int Goldbach_expectation(const int n)
{
    // Write a C++ program that accept an integer (n) from the user and outputs the number of combinations that express n as a sum of two prime numbers.
    int combos = 0;
    int *prime_nums = new int[n];
    int iter = 0;
    if (n >= 4 && n <= 50000)
    {
        for (int i = 2; i <= n; i++)
        {
            if (is_prime(i))
            {
                prime_nums[iter] = i;
                iter++;
            }
        }
        int *flag = new int[n];
        int flag_c = 0;
        for (int i = 0; i < iter; i++)
        {
            for (int j = 1; j < iter; j++)
            {
                if (prime_nums[i] + prime_nums[j] == n)
                {
                    for (int k = 0; flag[k] < iter; k++)
                    {
                        if (flag[k] == prime_nums[i])
                        {
                            break;
                        }
                        else
                        {
                            combos++;
                            flag[flag_c] = prime_nums[i];
                            flag_c++;
                            break;
                        }
                    }
                }
            }
        }
        delete[] prime_nums;
        delete[] flag;
        return combos;
    }
    else
    {
        cout << "n should be greater than or equal to 4 and less than or equal to 50,000!!!\n";
        exit(0);
    }
}


void Copy_Algorithm()
{
    class Abiturient
    {
    public:
        string name;
        int score_math;
        int score_eng;
        Abiturient(string name, int score_math, int score_eng)
        {
            this->name = name;
            this->score_math = score_math;
            this->score_eng = score_eng;
        }
    };
    vector<Abiturient> abiturs = {
     Abiturient("Павел",150,170),
     Abiturient("Маша",121,155),
     Abiturient("Дмитрий",195,139),
     Abiturient("Арсений",137,152),
     Abiturient("Антон",104,141),
     Abiturient("Сергей",141,167),
     Abiturient("Артём",187,179),
     Abiturient("Владимир",157,178),
    };
    vector<Abiturient> abiturs_copy;
    vector<Abiturient> students;

    // Method - copy
    copy(abiturs.begin(), abiturs.end(), back_inserter(abiturs_copy)); // 1-ый и 2-ой параметр начало и конец коллекции, которую нужно скопировать
    // 3-ий параметр - куда скопировать. ИСпользуем функцию - back_inserter, задача которой поместить все элеменеты, которые мы будем перебирать в другую коллекцию

    // Method - copy_if
    copy_if(abiturs.begin(), abiturs.end(), back_inserter(students), [](const Abiturient &stud) 
        {
            return (stud.score_eng >= 140 && stud.score_math >= 135 && stud.name != "Артём");
        }); // То же самое что и copy, но 4-ий параметр - предикат, который будет копировть только определенные элементы

    for (auto el : students)
    {
        cout << "Абитуриент - " << el.name << " прошёл в университет!\n";
    }
}


void Search_Algorithm()
{
    class Abiturient
    {
    public:
        string name;
        int score_math;
        int score_eng;
        Abiturient(string name, int score_math, int score_eng)
        {
            this->name = name;
            this->score_math = score_math;
            this->score_eng = score_eng;
        }
    };
    vector<Abiturient> abiturs = {
       Abiturient("Павел",150,170),
       Abiturient("Маша",121,155),
       Abiturient("Дмитрий",195,139),
       Abiturient("Арсений",137,152),
       Abiturient("Антон",104,141),
       Abiturient("Сергей",141,167),
    };

    vector<int> vec = {55, 1, 34, 90, 45, 3, 9, 0};
    vector<int> vec2 = { 3, 7, 9, 13};
    int to_find = 9;

    // Method - find
    auto res = find(vec.begin(),vec.end(),to_find); // Последний параметр это элемент, который мы хотим найти в коллекции

    if (res != vec.end()) // Если метод find не нашел элемент, он возвращает указатель, который указывает на конец коллекции
    {
        cout << "Элемент " << to_find << " найден!\n";
    }
    else { cout << "Элемент " << to_find << " НЕ найден!\n"; }

    // Method - find_if
    auto res_2 = find_if(vec2.begin(), vec2.end(), [](int a) {return (a % 2 == 0);}); // Последний параметр это предикат
    if (res_2 != vec2.end()) { cout << "Коллекция состот из четных чисел\n"; }
    else { cout << "Коллекция состот из НЕ четных чисел\n"; }

    // Используем find_if с классом

    auto res_3 = find_if(abiturs.begin(), abiturs.end(), [](const Abiturient& ab) {return (ab.score_math >= 150); });
}


// Начало материала про алгоритмы сортировки //

bool MyPred(int a, int b) // бинарный предикат
{
    return a > b;
}

void Sort_Algorithms_STL()
{
    vector<int> vec1 = { 1,66,9,44,3,678,91,7 };
    vector<int> vec2 = { 1,66,9,44,3,678,91,7 };

    // sort - сортирует от меньшего к большему
    sort(vec1.begin(), vec1.end()); // Сортируем вектор с помощью алгоритма сортировки ( функции ) sort

    // Если мы хотим отсортировать по какому-то другому способу, например от большего к меньшему
        // То нам надо использовать третьим параметром в функцию sort - бинарный предикат
     
    cout << "Сортировка от меньшего к большему \n";
    for (auto el : vec1)
    {
        cout << el << endl;
    }

    sort(vec2.begin(), vec2.end(), MyPred); // Тут у нас третьим параметром бинарный предитка ( Сортирем от большего  меньшему )

    // Вместо функции мы можем использовать лямбда выражение ( анонимную функцию )
    sort(vec2.begin(), vec2.end(), [](int a, int b) {return a > b; } );
    cout << "Сортировка от большего к меньшему \n";
    for (auto el : vec2)
    {
        cout << el << endl;
    }

    // Вот как можно отсортировать массив 
    const int SIZE = 8;
    int arr[SIZE] = { 1,66,9,44,3,678,91,7};
    sort(arr, arr + SIZE);


    // Алгоритмы сортировки с классами
    class Abiturient
    {
    public:
        string name;
        int score_math;
        int score_eng;
        Abiturient(string name, int score_math, int score_eng)
        {
            this->name = name;
            this->score_math = score_math;
            this->score_eng = score_eng;
        }
        bool operator()(const Abiturient& abit) // Предикат на основе функтора, где мы проверяем ли есть у абитуриента достаточно баллов
        {
            if (abit.score_math >= 135 && abit.score_eng >= 140)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    private:
        
    };

    vector<Abiturient> abiturs = {
        Abiturient("Павел",150,170),
        Abiturient("Маша",121,155),
        Abiturient("Дмитрий",195,139),
        Abiturient("Арсений",137,152),
        Abiturient("Антон",104,141),
        Abiturient("Сергей",141,167),
    };

    cout << "Абитуриенты: \n";

    sort(abiturs.begin(),abiturs.end(), [](const Abiturient& p1, const Abiturient& p2) {return p1.name < p2.name; }); // Сортируем имена по алфавиту

    for (auto el : abiturs)
    {
        cout << "Имя абитуриента: " << el.name << " математика: " << el.score_math << " английский: " << el.score_eng << endl;
    }

}

// Конец материала про алгоритмы сортировки //




// Начало материала про ПРЕДИКАТЫ //

bool GreaterThanZero(int value) // Создаем предикат как функцию
{
    return value > 0;
}

void Predicates()
{
    // Это функция или функтор, которая возвращает логическое значение ( да или нет )
    // Обычно предикаты используются с алгоритмами STL, для этого подключаем библиотеку - #include <algorithm>
     
    vector<int> v = { 1,-2,33,56,-6,498,3,-99 }; // Создаем вектор
    
    // Алгоритм STL count_if, который позволит подсчитать что-либо в коллекции
    // Он принимает 3 параметра: 1-ый это начала коллекции ( итератор указывающий на начало коллекции ) и 2-ой конец коллекции
    // 3-ий параметр это предикат
    int result = count_if(v.begin(), v.end(), GreaterThanZero);
    cout << "Чисел больше 0 в коллекции = " << result << endl;



    class Abiturient
    {
    public:
        string name;
        Abiturient(string name, int score_math, int score_eng)
        {
            this->name = name;
            this->score_math = score_math;
            this->score_eng = score_eng;
        }
        bool operator()(const Abiturient &abit) // Предикат на основе функтора, где мы проверяем ли есть у абитуриента достаточно баллов
        {
            if (abit.score_math >= 135 && abit.score_eng >= 140)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    private:
        int score_math;
        int score_eng;
    };

    vector<Abiturient> abiturs = {
        Abiturient("Pavel",150,170),
        Abiturient("Masha",121,155),
        Abiturient("Dmitriy",195,139),
        Abiturient("Arseniy",137,152),
        Abiturient("Anton",104,141),
        Abiturient("Sergey",141,167),
    };
    int count_of_pass_abitur = count_if(abiturs.begin(), abiturs.end(), abiturs.front());
    cout << "Абитуриенты, которые прошли в университет = " << count_of_pass_abitur << endl;
    cout << "Их имена: \n";
    for (int i = 0; i < abiturs.size(); i++)
    {
        if (abiturs[i](abiturs[i]))
        {
            cout << abiturs[i].name << endl;
        }
    }
}

// Конец материала про ПРЕДИКАТЫ //



int doubledPay(int days)
{
    float daily_pay = 1;
    float result = 0;
    for (int i = 0; i < days; i++)
    {
        result += daily_pay;
        daily_pay *= 2;
    }
    return result;
}

char* uncesnor_str(char *censor_str, char *letters)
{
    // use it in main to check func
    //char censor_str[] = "Wh*r* d*d my v*w*ls g*?";
    //char letters[] = "eeioeo";
    //char* uncesnored_str = uncesnor_str(censor_str, letters);
    //cout << uncesnored_str << endl;

    int count_of_stars = 0;
    int count_of_letters = 0;
    int censor_str_count = 0;

    for (int i = 0; censor_str[i] != '\0'; i++)
    {
        censor_str_count++;
        if (censor_str[i] == '*')
        {
            count_of_stars++;
        }
    }

    for (int i = 0; letters[i] != '\0'; i++)
    {
        count_of_letters++;
    }
    
    if (count_of_stars != count_of_letters)
    {
        return censor_str;
    }

    int j = 0;
    for (int i = 0; i < censor_str_count; i++)
    {
        if (censor_str[i] == '*')
        {
            censor_str[i] = letters[j];
            j++;
        }
    }
    return censor_str;
}

void task_Class()
{
    class Student
    {
    public:
        void input_teacher_score(int score_1, int score_2, int score_3)
        {
            teacher_scores = score_1 + score_2 + score_3;
        }

        void input_student_score(int score_1, int score_2, int score_3)
        {
            student_scores = score_1 + score_2 + score_3;
        }

        void check(Student s, Student t)
        {
            if (t.teacher_scores < s.student_scores)
            {
                cout << "Students scores are more" << endl;
            }
            else
            {
                cout << "Students scores are less or equal" << endl;
            }
        }
    private:
        int student_scores = 0;
        int teacher_scores = 0;
    };

    Student stud1;
    Student stud2;
    Student stud3;
    Student teacher;
    stud1.input_student_score(24, 30, 11);
    stud2.input_student_score(50, 50, 48);
    stud1.input_student_score(49, 45, 9);
    teacher.input_teacher_score(50, 48, 35);
    teacher.check(stud1, teacher);
}


char* trim_str(char *str, int to_trim)
{
   // use it in main to check func
   // char s[] = "12345678901234";
   // char* str = trim_str(s, 10);
   // cout << str << endl;

    if (to_trim <= 0)
    {
        return str;
    }

    int count = 0;

    for (int j = 0; str[j] != NULL; j++)
    {
        count++;
    }
    
    if (count < to_trim)
    {
        return str;
    }
  

    char* trim_str = new char[to_trim + 1];
    int i = 0;
    for (; i < to_trim; i++)
    {
        trim_str[i] = str[i];
    }
    trim_str[i] = '\0';

    return trim_str;
}





void Functors()
{
    // Функутор это класс у которого переопределен оператор (), и мы получаем объект класса, который может вести себя как функция
    class My_Functor
    {
    public:
        // Возвращаемое значение можем сделать любое и принимаемы параметеры тоже, например: int operator()(int a, int b)
        void operator()() // Перегружаем оператор ()
        {
            cout << "Functor count = " << count++ << endl;
        }
    private:
        int count = 0;
    };

    class Even_Functor
    {
    public:
        void ShowEvenSum()
        {
            cout << "Сумма четных чисел = " << evenSum << endl;
        }

        void ShowEvenCount()
        {
            cout << "Кол-во четных чисел = " << evenCount << endl;
        }

        void operator()(int value)
        {
            if (value % 2 == 0)
            {
                evenCount++;
                evenSum += value;
            }
        }
    private:
        int evenSum = 0;
        int evenCount = 0;
    };

    My_Functor functor;
    functor();
    functor();
    functor();

    cout << "\nEven Functor\n";
    Even_Functor ef;
    int arr[] = { 5,11,34,89,23,456,123,678,123,-56,1235,12,55 };
    for (auto el : arr)
    {
        ef(el);
    }

    ef.ShowEvenCount();
    ef.ShowEvenSum();

}



// Начало материала про измерения времения выполнения кода //
int sum_thread(int a, int b)
{
    this_thread::sleep_for(chrono::microseconds(2000));

    cout << "Thread ID = " << this_thread::get_id() << "==========\tSUM STARTED \t==========" << endl;

    this_thread::sleep_for(chrono::microseconds(1000));

    cout << "Thread ID = " << this_thread::get_id() << "==========\tSUM STOPPED \t==========" << endl;

    return a + b;
}

void time_execution_code()
{
    class Simple_Timer // Создаем класс для подсчета времени сколько выполнялся код
    {
    public:
        Simple_Timer()
        {
            start = chrono::high_resolution_clock::now(); // Начало, откуда будет вестись отчет
        }

        ~Simple_Timer()
        {
            end = chrono::high_resolution_clock::now(); // Конец 

            chrono::duration<float> duration = end - start; // находим сколько времени выполнялся код 

            cout << "Время выполнения кода: " << duration.count() << endl;
        }
    private:
        chrono::time_point<chrono::steady_clock> start, end;
    };

    Simple_Timer sp; // Создаем объект класса, и когда функция завершится, вызовится деструктор и выведит время выполнения кода

    int result;

    thread t([&result]() { result = sum_thread(2, 5); });

    for (size_t i = 0; i <= 10; i++)
    {
        cout << "Thread ID = " << this_thread::get_id() << "==========\tMAIN STARTED \t========== " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    t.join();
    cout << "SUM RESULT = " << result << endl;
}
// Конец материала про измерения времения выполнения кода //




// Начало материала про лямба функции //
void do_work_lyambda(vector<int>& vc, function<void(int)> f_do_work)
{
    for (auto el : vc)
    {
        f_do_work(el);
    }
}

void lyambda_func()
{
    vector<int> vc = { 1,4,78,90,34,789,123,56,76,22,11,37 }; // Создаем вектор

   
    // Можем сделать так, второй параметр это лямба функция
    do_work_lyambda(vc, [](int a)
    {
            cout << "Вызвана анонимная функция с параметром: " << a << endl;
    });

    // Внутри тела лямбда функции мы не можем ссылаться на другие переменные и т.д. вне тела лямбда функции
    int p = 0;
    // В 14 стандарте добавили возможность использоваться ключевое слово auto с лямба функциями
    auto lyambda_f = [&p](int b) // В квадратных скобках передаем переменные, которые находятся вне тела лямбда функции
    {
        p = 5;
    };


}
// Конец материала про лямба функции //



// Начало материала про std::function
void just_func(int a)
{
    if (a > 10 && a < 40)
    {
        cout << "Just func: " << a << endl;
    }
}

void check_odd(int a)
{
    if (a % 2 == 0)
    {
        cout << "Check odd: " <<  a << endl;
    }
}

void do_work(vector<int>& vc, function<void(int)> f_do_work)
{
    for (auto el : vc)
    {
        f_do_work(el);
    }
}

void do_work_funcs(vector<int>& vc, vector<function<void(int)>> f_vector) // Тута у нас коллекция функция под основой вектора
{
    for (auto el : vc)
    {
        for (auto &fel : f_vector)
        {
            fel(el);
        }
    }
}

void std_function()
{ // #include <functional>
    function<void()> f; // Тут мы создаем объект класса function ( Мы будем работать с функцией void just_func(), поэтому в угловых скобках тоже самое )
    
    vector<int> vc = {1,4,78,90,34,789,123,56,76,22,11,37};
    cout << "Just_func " << endl;
    do_work(vc, check_odd);
    cout << "check odd func " << endl;
    do_work(vc, just_func);

    cout << "\n many func" << endl;
    vector<function<void(int)>> f_vector = {just_func,check_odd};
    do_work_funcs(vc,f_vector);


}
// Конец материала про std::function



void Union()
{ // Данные в Union'e сохраняются в одной ячейки памяти
    union MyUnion // Создаем союз
    {
        short int a; // занимает в памяти 2 байта
        int b; // 4 байта
        float c; // 4 байта
    };

    MyUnion un;
    un.a = 5;
    un.b = 50000;
    un.c = 1.5;

}


void Multifile_project()
{ // #include "Sum.h"
    // Мы создали в "Файлы заголовков" свою библиотеку - Sum.h в которой объявлен прототип функции, далее в исходных файлах делаем реализацию функции
    int sum = Sum(1, 5);

    // Создаем класс
    // #include "MultiFile_Class.h"
    MultiFile_Class m;
    m.print_message("A message");
}


void Queue_PriorityQueue()
{ // #include <queue>
    // Очередь - First In First Out. // Мы можем функционал очередт адаптировать под какой-то контейнер например под: list, deque и ВСЁ

    queue<int> que; // Создаем очередь

    que.emplace(2); // Добавляем элемент в очередь
    que.emplace(44);
    que.emplace(841);
    que.emplace(13);

    int back_que = que.back(); // Возврашает последний элемент (13)
    int front_que = que.front(); // Возврашает первый элемент (2)
    
    cout << "\t Queue \n" << endl;
    while (!que.empty())
    {
        cout << "Size of queue : " << que.size() << endl;
        cout << que.front() << endl;
        que.pop();  
    }

    auto a = que._Get_container(); // В основе очереди лежит - deque

    queue<int, list<int>> que_lst; // В основе очереди теперь - list
    // queue<int, vector<int>> que_lst; // Так сделать нелья, т.к. vector - не может быть основой очереди
       
        // Priority Queue. Очередь с приоритетом //
            // Элементы сортируются от большего к меньшему //
    
    priority_queue<int> pr_que; // Очередь с приоритеом в своей основе может использовать только - vector,deque.
    pr_que.emplace(11);
    pr_que.emplace(88);
    pr_que.emplace(409);
    pr_que.emplace(3);
    int top_pr_que = pr_que.top(); // Возвращает первый элемент

    cout << "\n \t Priority Queue \n" << endl;
    while (!pr_que.empty())
    {
        cout << pr_que.top() << endl;
        pr_que.pop();
    }

    
}


void Stack()
{ // #include <stack> // Last In First Out
    // Мы можем функционал стека адаптировать под какой-то контейнер например под: list, deque, vector

    stack<int> st; // Создаем stack
    st.push(2); // Metod - push() - помещает элемент в stack
    st.push(5);
    st.push(11);
    st.push(77);
    // emplace - сразу помещает объект в коллекцию.
    st.emplace(123); // Делает то же самое что и push, но push - сначала делает копию объекта потом помещает ее в коллекцию //

    int st_size = st.size(); // Размер стэка
    bool is_empty = st.empty(); // Возвращает true если стэк пустой
    st.pop(); // Удаление последнего элемента
    int last_st_element = st.top(); // Возвращает последний элемент стэка

    while (!st.empty()) // Просмотр всех элементов стэка
    {
        cout << st.top() << endl;
        st.pop();
    }

    auto a = st._Get_container(); // Возвращает нам сырой котейнер // В основе стэка по умолчанию находится - deque

    stack<int, list<int>> st_lst; // Используем в основе stack'a - list.

}


void map_multimap()
{ // #include <map>
    // Также имеют структуру бинарного дерева, они хранят пары - ключ:значение
    // Сортировка производится по ключу // Нельзя добавлять элементы с одинаковыми ключами ( оно не будет добавлено )

    pair<int, string> phone(1,"Samsung"); // Создаём пару
    
    cout << "ID = " << phone.first << "\nНазвание: " << phone.second << endl;

    map<int, string> myMap; // Создаём map

    // Вставка ключа и значения в контейнер map
    myMap.insert(phone); // В метод insert можно вписать уже готовую пару ( ту которую создавали на 352 строчке )
    myMap.insert(make_pair(2,"Xiaomi")); // Можно с помощью метода make_pair вписать самостоятельно данные
    myMap.emplace(3, "Iphone"); // С помощью метода emplace можем сразу добавить данные

    int id;
    cout << "\nВведите id, чтобы вывести значение: ";
    cin >> id;

    auto it = myMap.find(id); // Поиск значения по ключу
    if (it != myMap.end())
    {
        cout << it->second << endl;
    }
    else
    {
        cout << "Данного id не существует \n";
    }

}

void keyword_typedef()
{
    // Используется, чтобы мы могли определенным типам данных присваивать псевдоним

    typedef vector<int> int_vector; // Делаем псевдоним // После typedef указываем тип данных, которому мы даём свой собственный псевдоним и после название

    vector<int> my_vector; // Две одинаковых записи

    int_vector my_vector_2;  // Две одинаковых записи
}


void set_multiset()
{
    // #include <set>
    
    set<int> my_set; // Cоздание множества

    my_set.insert(20); // Вставка элемента
    my_set.insert(14);
    my_set.insert(3);
    my_set.insert(11);

    my_set.erase(11); // Удаление элемента

    // В множестве (set) нельзя добавлять одинаковые значения
    my_set.insert(11);
    my_set.insert(11);

    cout << "Элементы множества: \n";
    for (auto i : my_set)
    {
        cout << i << endl;
    }

    my_set.find(11); // Поиск элемента по значению // Возвращает итератор на элемент

    int find_el;
    cout << "Введите элемент который хотите найти: ";
    cin >> find_el;

    if (my_set.find(find_el) != my_set.end()) { cout << "Элемент " << find_el << " присутствует \n";}
    else { cout << "Элемент " << find_el << " отсутствует \n"; }


    // MULTISET //
    // В данной структуре мы можем добавлять одинаковые значения

    multiset<int> mset = {1,1,2,66,3,456,11};
    cout << "Элементы multiset: \n";
    for (auto i : mset)
    {
        cout << i << endl;
    }

    mset.lower_bound(1); // Поиск элемента в множестве
    mset.upper_bound(1); // Поиск элемента в множестве после найденного
}


void deque_stl()
{
    // #include <deque> // Дэк - гибрид вектора и двусвязного списка

    deque<int> dq = { 1,55,0,99,876 };
}


void compare_operators()
{
    array<int, 5> arr = { 1,2,3,4,5 };
    array<int, 5> arr2 = { 1,2,3,4,6 };

    cout << (arr == arr2) << endl; // 1 - true, 0 - false
}


void array_stl()
{
    // Статический массив // Нужно подключить библиотеку <array> 

    array<int, 10> arr = {12,55,789,0}; // Создаем статический массив, 1-ый параметр в угловых скобках - тип данных, 2-ой - кол-во элементов
    cout << arr[0] << endl;
    cout << arr.at(9) << endl; // Метод at - контролирует выход за границы массива

    arr.fill(10); // Заполняет массив определенным элементом

    for (auto el : arr)
    {
        cout << el << endl;
    }
}


void forward_list_stl()
{
    // Нужно подключить библиотеку <forward_list>

    forward_list<int> f_lst = {5,1,7}; // Создаём односвязный список
    
    f_lst.push_front(11); // Добавляем элемент в начало
    f_lst.push_front(22); // Добавляем элемент в начало

    forward_list<int>::iterator f_lst_iter = f_lst.begin(); // Создаём итератор и задаём ему первый элемент

    f_lst.insert_after(f_lst_iter, 555); // Вставка элемента после того, который содержит в себе итератор

    cout << "Элементы списка: \n";
    for (auto el : f_lst) // Цикл for_each для вывода элементов списка
    {
        cout << el << endl;
    }

}


void range_based_cycles_foreach()
{
    // Цикл foreach нужен, чтобы перебирать коллекцию элементов

    int arr[] = { 11,56,78,123,32 };

    for(auto var : arr) // Цикл for each
    {
        cout << var << endl;
    }
    cout << endl;

    for (auto &var : arr) // Если передавать данные по ссылке, то и сами элементы массива будут изменяться
    {
        var--;
        cout << var << endl;
    }
    cout << endl;

    list<int> lst = { 11,5,122,67,899 };

    for (auto var : lst) // Цикл for each для списка
    {
        cout << var << endl;
    }
    cout << endl;
}


void STL_LIST()
{
    // Нужно подключить библиотеку <list>

    list<int> lst;

    lst.push_back(3456); // Добавление элемента в конец списка

    lst.push_back(135);

    lst.push_front(456); // Добавление элемента в начало списка

    // list - не поддерживает оператор [], поэтому нужно использовать итератор

    list<int>::iterator lst_iter = lst.begin();

    for (auto i = lst.begin(); i != lst.end(); i++)
    {
        cout << *i << endl; // Вывод элементов списка
    }

    lst.sort(); // Сортировка элементов по возрастанию
    lst.pop_back(); // Удаление элемента с конца
    lst.pop_front(); // Удаление элемента с начала
    lst.unique(); // Дубликаты элементов, которые идут последовательно будут удалены. Например - list(33,121,33,11,22,33,33,33) Последние 2 числа 33 будут удалены, а 1-ое и 3-е нет, т.к. они идут не последовательно
    lst.reverse(); // Элементы будут идти наоборот
    lst.clear(); // Очистка списка
    lst.insert(lst_iter, 11); // Вставка элемента в список с помощью итератора, в данном случае элемент вставится на 1-ое место
    lst.insert(lst_iter++, 11); // Вставка на следующее место
    lst.erase(lst_iter); // Удаление элемента по итератору
    lst.remove(135); // Удаление по элементу
    lst.assign(10, 666); // Заполняет список перед этим удаляя элементы, которые находились в нем. Первый параметр - кол-во чисел. Второй - само число



}


void key_word_auto()
{
    // Ключевое слово auto само определяет какого типа переменная 
      // Мы можем явно не указывать тип данных с помощью auto
        // Также мы должны всегда присвавать значения переменной
    auto a = 10;

    auto b = 13.3;

    auto c = "string";

    vector<int> my_vec = { 11,31,121 };

    vector<int>::iterator it = my_vec.begin(); // Данная запись эквивалентна записи снизу

    auto iter = my_vec.begin(); // Вот так можно использовать ключевое слово auto, для создания итератора
}


void STL_ITERATORS()
{
    // Использование итераторов нужно если в каком-либо динамических структурах STL не реализован оператор [] //

    vector<int> my_vec = { 11,123,55,678 };

    vector<int>::iterator it; // Создаём итератор

    it = my_vec.begin(); // Связываем итератор с нашим вектором // Метод begin() дал доступ итератору к первому элементу вектора

  //  it = my_vec.end(); // Указатель на следующий элемент после последнего элемента в векторе

    cout << *it << endl; // Разименуем итератор и получим первый элемент вектора

    // Используя арифметику указателей, мы можем получить доступ к любому эелменту вектора

    cout << "Элементы вектора, выведенные с помощью итератора \n";
    for (int i = 0; i < my_vec.size(); i++)
    {
        cout << *(it + i) << endl;
    }

    // Также мы можем сделать константный итератор

    vector<int>::const_iterator const_it; // Создаём константный итератор

    // *const_it = 2000; - данную операцию мы совершить не сможем

    vector<int>::reverse_iterator rev_it; // Создаём итератор "наоборот"

    rev_it = my_vec.rbegin(); // Для данного итератора используем метод rbegin() он указывает на последний элемент вектора

    cout << "Reverse itetor ( last vector's element ) = " << *rev_it << endl;


    cout << "Iterator new_it \n";
    vector<int>::iterator new_it;

    new_it = my_vec.begin();

    cout << *new_it << endl;

    advance(new_it, 3); // Функция advance() сдвигает итератор на то кол-во элементов, которе мы укажем 2-ым параметром

    cout << *new_it << endl;


    // insert - добавление єлемента
    cout << "\n Вставка элементов в вектор по итеаратору \n";

    vector<int>::iterator it_2;

    it_2 = my_vec.begin();

    my_vec.insert(it_2, 99); // Метод insert вставляет элемент в начало вектора, т.к итератор указывает на первый элемент // Мы можем изменить вставку просто переставив итератор на любое значение

    for (int i = 0; i < my_vec.size(); i++)
    {
        cout << my_vec[i] << endl;
    }


    // erase - удаление єлемента
    vector<int>::iterator erase_it = my_vec.begin();

    my_vec.erase(erase_it); // Удаление элемента по итератору. В данном случае удалится 1-ый элемент

    cout << "\n Удаление элементов из вектора по итеаратору \n";
    for (int i = 0; i < my_vec.size(); i++)
    {
        cout << my_vec[i] << endl;
    }
}


void STL_Vector()
{
    // Для работы нужно подключить библиотеку <vector>
    // vector - улучшенный динамический массив

    cout << "Vector object - my_vector \n \n";
    vector<int> my_vector;
    my_vector.push_back(2); // Добавление элемента в конец динамического массива
    my_vector.push_back(21);
    my_vector.push_back(11);
    my_vector.push_back(128);
    my_vector.push_back(92);

    cout << "\n Размер вектора (size) = " << my_vector.size() << endl;
    // Вектору не всегда приходиться переписывать все данные в новый массив, чтобы увеличить его размер
    // Вектор работает так - при добавлении элемента выделяется еще одна ячейка памяти, чтобы не тратить время и ресурсы на создание нового массива и перемещения в него старых данных
    cout << "\n Вместимость вектора (capacity) = " << my_vector.capacity() << endl;
    my_vector.reserve(20); // Изменить вместимость вектора
    cout << "\n Вместимость вектора изменена (capacity) = " << my_vector.capacity() << endl;

    for (int i = 0; i < my_vector.size(); i++)
    {
        cout << my_vector[i] << endl;
    }

    my_vector.pop_back(); // Удаление последнего элемента

    cout << "\n Удаляем последний элемент\n ";
    for (int i = 0; i < my_vector.size(); i++)
    {
        cout << my_vector[i] << endl;
    }


    cout << "\n Vector object - double_vector \n";
    vector<double> double_vector = { 12.136,567.11,1.001,22.6 }; // Также можем инициализировать вектор как обычный массив
    for (int i = 0; i < double_vector.size(); i++)
    {
        cout << double_vector[i] << endl;
    }

    cout << "\n Vector object - new_vector \n";
    vector<int> new_vector(10, 666); // Инициализируем вектор, в нем будет 10 элементов, все они будут 0. Если хотим чтобы были другие числа, надо другим параметров указать это число
    for (int i = 0; i < new_vector.size(); i++)
    {
        cout << new_vector[i] << endl;
    }

}



// Начало материала про односвязный список //

template<typename T>
class List // Создаем класс односвязного списка
{
public:
    List() // Конструктор
    {
        size = 0;
        head = nullptr;
    }
    ~List() // Деструктор
    {
        clear();
    }

    void pop_back() // Удаление последнего элемента
    {
        remove_at(size - 1);
    }

    void remove_at(int index) // Удаление єлемента по индексу
    {
        if (index == 0)
        {
            pop_front();
        }
        else
        {
            Node<T>* previous = this->head;

            for (int i = 0; i < index - 1; i++)
            {
                previous = previous->ptr_next;
            }

            Node<T>* to_delete = previous->ptr_next; // В данной переменной храним адресс старого элемента, на который указывал наш предыдущий элемент

            previous->ptr_next = to_delete->ptr_next; // Адресс предудыщего элемента присваиваем адрес следующего элемента

            delete to_delete; // Удалем элемент

            size--;
        }
    }

    void insert(T data, int index) // Добавление элемента в список по индексу
    {
        if (index == 0)
        {
            push_front(data);
        }
        else
        {
            Node<T>* previous = this->head; // Создаём временный указатель и присваивему ему значение нашего head'a

            for (int i = 0; i < index - 1; i++) // Находим элемент, который предшествует нашему индексу
            {
                previous = previous->ptr_next;
            }

            Node<T>* new_node = new Node<T>(data, previous->ptr_next); // Новый элемент будет указывать на элемент, на который указывал предыдущий элемент

            previous->ptr_next = new_node; // В предыдущий объект ( в его поле адресс) присваиваем наш новый объект

            size++;
        }
    }

    void push_front(T data) // Добавление элемента в начало списка
    {
        // Сначало создаём новый элемент, присваиваем ему передаваемое значение, далее присваиваем ему адресс старого head'a
        head = new Node<T>(data, head); // Создаём новый элемент и делаем его head'ом
        size++;
    }

    void clear() // Очистка списка
    {
        while (size)
        {
            pop_front();
        }
    }

    void pop_front() // Удаляет первый элемент в списке
    {
        Node<T>* temp = head; // Создаём временную переменную и присваиваем ей 1-ый элемент (head)
        head = head->ptr_next; // В переменную head присваиваем адресс следующего элемента
        delete temp; // Удаляем нашу временную переменную, а то есть 1-ый элемент, котрорый нужно было удалить
        size--; // Размер списка стал на 1 элемент меньше, поэтому выполняем операцию декремента
    }

    void push_back(T data) // Вставить элемент в конец списка
    {
        if (head == nullptr)
        {
            head = new Node<T>(data); // Если у нас нет 1-ого элемента, присваиваем первому элементу передаваемое значение
        }
        else
        {
            Node<T>* current = this->head; // Временная переменная, изначально присваиваем ей первый элемент
            while (current->ptr_next != nullptr) // Ищем последний элемент ( чтобы его адресс был равен Null.
            {
                current = current->ptr_next; // Пока текущий элемент не равен Null, мы присваиваем нашему текущему элементу следующий адресс.
            }
            current->ptr_next = new Node<T>(data);
        }
        size++;
    }

    int get_size()
    {
        return size;
    }

    T& operator[](const int index) // Перегружаем опертор квадратные скобки
    {
        int count = 0;
        Node<T>* current = this->head; // Указатель на текущий элемент, присваиваем значение head'a

        while (current != nullptr)
        {
            if (count == index)
            {
                return current->data;
            }
            else
            {
                current = current->ptr_next;
                count++;
            }
        }
    }

private:
    template<typename T>
    class Node // Вложенный класс элемента ( узел )
    {
    public:
        Node* ptr_next; // Указатель на следующий элемент
        T data; // Данные

        Node(T data = T(), Node* ptr_next = nullptr) // Если указатель на след элемент не указан, ему присваивается нулевой указатель ( последний элемент указывает на Null )
        {
            this->data = data;
            this->ptr_next = ptr_next;
        }
    };
    int size; // Кол-во элементов в списке
    Node<T>* head; // Голова односвязного списка ( 1-ый элемент )
};

void linked_list()
{
    List<int> lst;
    lst.push_back(5);
    lst.push_back(11);
    lst.push_back(23);
    lst.push_back(41);

    for (int i = 0; i < lst.get_size(); i++)
    {
        cout << lst[i] << endl;
    }

    cout << "Операция insert" << endl;

    lst.insert(141, 2);

    for (int i = 0; i < lst.get_size(); i++)
    {
        cout << lst[i] << endl;
    }

}
// Конец материала про односвязный список //





void Smart_Pointers_Part2()
{
    // Чтобы иметь доступ к: auto_ptr и т.д. нужно подключить библиотеку <memory>

    // auto_ptr
    auto_ptr<int>a_ptr_1(new int(5)); // Создаём первый auto_ptr

    auto_ptr<int>a_ptr_2(a_ptr_1); // Присваиваем второму a_ptr первый a_ptr // При таком раскладе, 1-ый указатель затирается и данные хранятся только во 2-ом



    // unique_ptr // Два указателя не могу ссылаться на одну и ту же область памяти
    unique_ptr<int>u_ptr_1(new int(5));

    // unique_ptr<int>u_ptr_2(u_ptr_1);  эта строка не скомпилируется

    unique_ptr<int>u_ptr_2;

    // После использования функции move - первый указатель очищается, а во второй передаются данные из 1-ого
    u_ptr_2 = move(u_ptr_1); // Чтобы все сработало нужно использовать функцию move
    u_ptr_1.swap(u_ptr_2); // Также можем использовать метод swap


    // shared_ptr
    // Указатели между собой могут владеть одними и те же данными
    shared_ptr<int>sh_ptr_1(new int(5));
    shared_ptr<int>sh_ptr_2(sh_ptr_1);


    // Взаимодействие с динамическими массивами

    int SIZE = 5;
    int* arr = new int[SIZE] {1, 55, 77, 22, 13};

    // Если мы рабоатем с массивом в угловые скобки мы должны указать тип данных и квадратные скобки
    shared_ptr<int[]>ptr(arr); // Или можно записать вот так  shared_ptr<int[]>ptr(new int[SIZE] {1,55,77,22,13});


}



// Начало материала про Умные указатели //
template<typename T>
class SmartPointer
{
public:
    SmartPointer(T* ptr)
    {
        this->ptr = ptr;
    }
    ~SmartPointer()
    {
        delete ptr;
    }

    T& operator*() // Перегружаем оператор "*". // Мы передаем ссылку, т.к. нам не нужна копия, а нужен тот же самый укзатель
    {
        return *ptr;
    }

private:
    T* ptr;
};


void Smart_Pointers()
{
    SmartPointer<int> ptr = new int(5); // Память очищать не надо, т.к. это уже происходит в деструкторе класса

    SmartPointer<string> str_ptr = new string("A string");


    cout << *ptr << endl;
    cout << *str_ptr << endl;
}
// Конец материала про Умные указатели //



void Structures()
{
    // Класс и структура почти идентичные типы данных // Различия в модификаторах доступа и при наследовании

    class MyClass // Класс
    {
    public:
        int a = 10;
    };

    class MyClass_2 :MyClass // Не указываем модификатор доступа ( наследуются private поля ) ( нет доступа к public полям )
    {

    };

    // По умолчанию все поля и методы - public
    struct MyStruct // Структура
    {
        int a = 22;
    };

    struct MyStruct_2 :MyStruct // При наследовании даже без указания модификатора доступа, у нас есть доступ к public полям
    {

    };


    MyClass mc;

    MyStruct ms;

    cout << ms.a << endl; // У нас есть доступ к переменной т.к. она public

    MyStruct_2 ms_2;

    ms_2.a; // Можем обратиться т.к. наследование public



}


// Начало материала про  Специализация шаблона класса //
template<typename T>
class Printer
{
public:
    void print(T value)
    {
        cout << "Value = " << value << endl;
    }
};

template<> // Создаем специализацию шаблона для определенного типа данных
class Printer<string> // Описываем класс для которого создаем специализацию шаблонов, в угловых скобках описываем тип данных поведение которого в шаблоне мы хотим специализировать
{
public:
    void print(string value)
    {
        cout << "_____" << value << "_____" << endl;
    }
};



void Specialization_templates_class()
{
    Printer<string> printer;

    printer.print("Привет");

}
// Конец материала про  Специализация шаблона класса //




// Начало материала про  Наследование шаблоных классов //
template<typename T1>
class TypeSize
{
public:
    TypeSize(T1 value)
    {
        this->value = value;
    }
    void data_type_size()
    {
        cout << "Размер " << typeid(value).name() << " в байтах = " << sizeof(value) << endl;
    }

protected:
    T1 value;
};

// При наследовании шаблонного класса, мы можем ограничить класс к которому наследуем шаблонный класс -   class TypeInfo:public TypeSize<int>, просто написав в угловых скобках тип данных
// Но если мы хотим, чтобы класс к которому наследуем, тоже работал с разными типами данных, мы должны сделать его шаблонным
template<typename T1>
class TypeInfo :public TypeSize<T1>
{
public:
    TypeInfo(T1 value) :TypeSize<T1>(value) // Тут мы вызываем конструктор базового класса (TypeSize)
    {

    }

    void ShowTypeName()
    {
        cout << "Название типа: " << typeid(TypeSize<T1>::value).name() << endl; // typeid - определяет тип данных
    }
};


void class_templates_inheritance()
{
    double a = 2;

    TypeInfo<double> c(a);
    c.ShowTypeName();
    c.data_type_size();
}
// Конец материала про  Наследование шаблоных классов //




// Начало материала про шаблоны классов //
template<typename T1, typename T2> // Объявляем шаблон с типом данных // Мы можем добавлять сколько угодно обобщенных типов данных
class Bytes
{
public:
    Bytes(T1 value, T2 value_2)
    {
        this->value = value;
        this->value_2 = value_2;
    }
    void data_type_size()
    {
        cout << "Value = " << sizeof(value) << endl;
        cout << "Value_2 = " << sizeof(value_2) << endl;

    }

private:
    T1 value;
    T2 value_2;

};

void class_templates()
{
    int a = 5;
    double b = 5.12341;
    Bytes<int, double> obj(a, b); // Указываем в угловых скобках с каким типом данных мы будем работать
    obj.data_type_size();

    char symbol = 'L';
    string str = "Hello world!";
    Bytes<char, string> obj_ch(symbol, str);
    obj_ch.data_type_size();
}
// Конец материала про шаблоны классов //


// Начало материала про пространство имён //

 //У нас имеется две функции с одинаковым названием, чтобы не произошло ошибки на этапе компиляции
 //Нужно поместить каждую функци в пространство имён

namespace first_namespace  // Первое пространство имён в которое мы помещаем функцию
{
    void func()
    {
        cout << "Функция func, пространство имён = first_namespace \n";
    }

    int count = 10;

    class Class
    {

    };
}

namespace second_namespace // Второе пространство имён в которое мы помещаем функцию
{
    void func()
    {
        cout << "Функция func, пространство имён = second_namespace \n";
    }

    int count = 15;

    class Class
    {

    };
}


void NAMESPACE()
{
    first_namespace::func(); // Указываем что мы хотим вызвать функцию из первого пространство имён

    second_namespace::func(); // Указываем что мы хотим вызвать функцию из второго пространство имён

    using namespace first_namespace; // С помощью ключевого слова using, мы можем наглядно указать какое имеено пространство имён мы будем использовать, чтобы в дальнейшем не писать его при вызове функции
    func();

    cout << first_namespace::count << endl;
    cout << second_namespace::count << endl;


}
// Конец материала про пространство имён //





// enum - перечисляемый тип, который служит для объявления символических имён представляющие целочисленные константы //
void ENUM()
{
    enum PC_State // Создаём свой тип c cостояниями компьютера
    {
        OFF, // Символическая переменная в свою очередь является числом
        ON,
        SLEEP
    };

    enum Colors // Мы можем задавать какое число будет храниться в переменной
    {
        MIN = 0,
        MAX = 255
    };

    class PC
    {
    public:
        PC_State get_state()
        {
            return state;
        }
        void set_state(PC_State state)
        {
            this->state = state;
        }
    private:
        PC_State state; // создаём переменную enum, которая будет содержать в себе состояния ПК
    };

    PC pc;

    pc.set_state(OFF);
    cout << pc.get_state() << endl; // Выведется 0

    pc.set_state(ON);
    cout << pc.get_state() << endl; // Выведется 1

    pc.set_state(SLEEP);
    cout << pc.get_state() << endl; // Выведется 2

}


// Начало материала про собственный класс Exception //
class MyException :public exception // Наследуем класс exception
{
public:
    MyException(const char* msg, int data_state) :exception(msg) // Вызывем конструктор базового класса (exception)
    {
        this->data_state = data_state;
    }
    int get_data_state() { return data_state; }
private:
    int data_state;
};


void func_for_class_exception(int value)
{
    if (value < 0)
    {
        throw MyException("Число меньше 0", value);
    }
    else
    {
        cout << "Переменная = " << value << endl;
    }

}

void Class_Exception()
{
    try
    {
        func_for_class_exception(-25);
    }
    catch (MyException& ex) // Тут мы ловим наш класс MyException, он имеет те же методы, что и класс exception т.к. мы унаследовали его в нашем классе
    {
        cout << " Catch Block №1. Класс MyException \n" << ex.what() << endl;
        cout << "Число = " << ex.get_data_state() << endl;
    }


}
// Конец материала про собственный класс Exception //



void func_for_few_catch_blocks(int value)
{
    if (value < 0)
    {
        throw "Число меньше 0"; // Броосаем исключение, если передаваемый аргумент меньше 0
    }
    if (value == 0)
    {
        throw exception("Число равняется 0"); // Броосаем еще одно исключение, если передаваемый аргумент равен 0
    }

    if (value == 1)
    {
        throw 1;
    }
    else
    {
        cout << "Переменная = " << value << endl;
    }

}

void few_catch_blocks()
{
    try
    {
        func_for_few_catch_blocks(1);
    }
    catch (const exception& ex)  // Тут у нас класс exception. Обрабатываем исключительную ситуацию, если число меньше == 0
    {
        cout << " Catch Block №1. Класс Exception \n" << ex.what() << endl;
    }
    catch (const char* ex) // Тут у нас строка. Обрабатываем исключительную ситуацию, если число меньше 0
    {
        cout << " Catch Block №2. Строка \n" << ex << endl;
    }
    catch (...) // Если мы ловим три точки, то мы поймаем всё что угодно, что бросил throw
    {
        cout << "Что-то пошло не так... \n";
    }
}



void func_for_throw(int value)
{
    if (value < 0)
    {
        throw exception("Число меньше 0"); // Броосаем исключение, если передаваемый аргумент меньше 0
    }
    else
    {
        cout << "Переменная = " << value << endl;
    }

}

void Key_Word_Throw()
{
    try
    {
        func_for_throw(12);
    }
    catch (const exception& ex) // Обрабатываем исключительную ситуацию
    {
        cout << ex.what() << endl;
    }
}


void try_catch()
{
    ifstream file;
    file.exceptions(ifstream::badbit | ifstream::failbit); // По умолчанию в классе ifstream - отключеная обработка исключений, чтобы её включить нужно выполнить этот код

    try // Если код в блоке try не выявил ошибок, то блок catch не сработает
    {
        file.open("zkcsi123k.txt");
        cout << "Файл успешно открылся \n";
    }
    catch (const ifstream::failure& ex) // Если код в блоке try сгенерировало исключительную ситуацию, тогда отработает блок catch
    {
        cout << ex.what() << endl;
        cout << ex.code() << endl;
        cout << "Ошибка открытия файла \n";
    }
}


// Начало материала про Потоковый ввод вывод в файл //

class N_Point
{
public:
    N_Point()
    {
        x = y = z = 0;
    }
    N_Point(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    // Делаем классы дружественные, чтобы при перегрузке операторов был доступ к private полям
    friend ostream& operator <<(ostream& os, const N_Point& point);
    friend istream& operator >>(istream& is, N_Point& point);

private:
    int x, y, z;
};

ostream& operator <<(ostream& os, const N_Point& point) // Перегружаем оператор "<<"
{
    os << point.x << " " << point.y << " " << point.z << endl;

    return os;
}


istream& operator >>(istream& is, N_Point& point) // Перегружаем оператор ">>"
{
    is >> point.x >> point.y >> point.z;
    return is;
}


void Work_With_File_Reload_Operators_In_Out()
{

    N_Point point(101, 55, 12);

    cout << point; // Теперь у нас работает оператор <<.

    fstream file;

    file.open("file_2.txt", fstream::in | fstream::out | fstream::app);

    if (!file.is_open())
    {
        cout << "Файл не удалось открыть\n";
    }
    else
    {
        cout << "Файл успешно открыт\n";

        // file << point << endl; // Запись объекта в файл

        N_Point newpoint;

        while (!file.eof())
        {
            N_Point newpoint;

            file >> newpoint; // Чтение объекта из файла

            if (file.eof())
            {
                break;
            }

            cout << newpoint;
        }

    }
    file.close();
}
// Конец материала про Потоковый ввод вывод в файл //





void Work_With_File_Fstream()
{
    fstream file;

    // Открываем файл для чтения и записи
    file.open("file.txt", fstream::in | fstream::out | fstream::app); // Параметр - in, использование файла для чтения; out - запись в файл;app - предыдущие данные не стирались // Тут мы используем побитовое или ( | )
    if (!file.is_open())
    {
        cout << "Файл не удалось открыть\n";
    }
    else
    {
        int choise;
        string data;
        cout << "Файл успешно открыт\n";
        cout << "Вы хотите считать информацию или записать?\n";
        cout << "Введите 1, чтобы записать данные в файл\nВведите 2, чтобы считать данные из файла \n";
        do
        {
            cout << "Выбор: ";
            cin >> choise;
        } while (choise > 2 || choise < 1);

        if (choise == 1)
        {

            cout << "Введите данные для записи в файл: ";
            SetConsoleCP(1251);
            cin >> data;
            file << data << "\n";
            SetConsoleCP(861);
        }
        else
        {
            cout << "Вывод данныых из  файла \n";
            while (!file.eof())
            {
                data = " ";
                file >> data;
                cout << data << endl;
            }
        }

    }
    file.close();
}



void Work_With_File_Reading_Writing_Object()
{
    class Point
    {
    public:
        Point()
        {
            x, y, z = 0;
        }
        Point(int x, int y, int z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }
        void print()
        {
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl;
            cout << "Z = " << z << endl;
        }
    private:
        int x, y, z;
    };

    Point point(118, 0, 67);

    ofstream file; // Для записи данных в файл

    file.open("newfile.txt", ofstream::app);

    file.write((char*)&point, sizeof(Point)); // В метод write, 1-ый аргумент - нужно привести к указателю на char и передать ссылку на наш объект, 2-ой аргумент размер в байтах типа данных(класса)

    file.close();

    ifstream file2; // Для чтения данных из файла

    file2.open("newfile.txt");
    Point point_read; // Создаём объект в котором будут записаны считуемые данные


    while (file2.read((char*)&point_read, sizeof(Point))); // Принимаем в себя параметры те же, что и метод write, но нужно передать 1-ым параметров ему ссылку на объект, в который мы хотим считать данные
    {
        point_read.print();
    }

    file2.close();
}



void Work_With_File_Reading()
{
    // fstream - библиоетека для работы с файлами
    // ifstream - класс. чтение данных из файла

    ifstream file;
    string phone_number;

    file.open("myfile.txt");

    if (!file.is_open())
    {
        cout << "Не удалось открыть файл \n";
    }
    else
    {
        cout << "Выполняется работа с файлом... \n";
        char ch;
        while (file.get(ch)) // Метод - get, считывает данные из файла посимвольно, также метод get - возвращает true, пока в файле есть символы
        {
            cout << ch;
        }

        file.close();

        file.open("myfile.txt");
        cout << " \n ================================== \n";

        while (!file.eof()) // Метод - eof, возвращает true - когда дойдет до конца файла
        {
            file >> phone_number; // Оператор " >> " , считывает данные до пробела
            cout << "Номер телефона из файла: " << phone_number << endl;
        }
        file.close();

        file.open("myfile.txt");
        cout << " \n ================================== \n";

        string str;
        while (!file.eof())
        {
            getline(file, str); // Считывает строку
            cout << "Номер телефона из файла: " << str << endl;
        }
    }

    file.close();
}

void Work_With_File_Writing()
{
    // fstream - библиоетека для работы с файлами
   // ofstream - класс. сохранение данных в файл

    ofstream file; // Создаём объект класса ofstream

    file.open("myfile.txt", ofstream::app); // Открываем файл // После названия файла можно указать, чтобы при открывании файла, данные не стирались, а добавлялись

    file << "Data \n"; // Записываем данные в файл

    int num = 0;
    cout << "Введите число, которое хотите записать в файл: ";
    cin >> num;
    file << num;

    file.close(); // Закрываем файл


}

void Learning_OOP_Virutal_Rombical_Inheritance()
{
    // Ромбовидное наследование //
    class Character
    {
    public:
        Character()
        {
            cout << "Конструктор Character \n";
        }
    private:
        int hp;
    };



    class Orc :public virtual Character // Виртуальное наследование
    {
    public:
        Orc()
        {
            cout << "Конструктор Orc \n";
        }
    };



    class Warrior :public virtual Character // Виртуальное наследование
    {
    public:
        Warrior()
        {
            cout << "Конструктор Warrior \n";
        }
    };



    class OrcWarrior :public Orc, public Warrior
    {
    public:
        OrcWarrior()
        {
            cout << "Конструктор OrcWarrior \n";
        }
    };

    /*Так как мы используем ромбовидное наследование, данные не будут удвавиться, то есть
     у нас не будет вызываться конструктор класса Character 2 раза */

    OrcWarrior ow;

}



void Learning_OOP_Interface()
{
    class Interface_Bicycle // Интерфейс. Является абстрактным классам, т.к. имеет в себе виртуальный метод
    {
    public:
        void virtual Twist_the_Wheel() = 0;
        void virtual Ride() = 0;

    };


    class Simple_Bike :public Interface_Bicycle // Реализовываем интерфейс
    {
    public:
        void Twist_the_Wheel() override
        {
            cout << "Метод Twist_the_Wheel, class - Simple_Bike \n";
        }
        void Ride() override
        {
            cout << "Метод Ride, class - Simple_Bike \n";
        }
    };


    class BMX :public Interface_Bicycle // Реализовываем интерфейс
    {
    public:
        void Twist_the_Wheel() override
        {
            cout << "Метод Twist_the_Wheel, class - BMX \n";
        }
        void Ride() override
        {
            cout << "Метод Ride, class - BMX \n";
        }
    };


    class Human
    {
    public:
        void RideOn(Interface_Bicycle& bicycle) // Сюда мы пердеаем ссылку на объект, который реализовывает в себе интерфейкс класса выше
        {
            cout << "Крутим руль \n";
            bicycle.Twist_the_Wheel();

            cout << "ЕДЕМ \n";
            bicycle.Ride();
        }
    };

    Human h;

    Simple_Bike sb;

    BMX bmx;

    h.RideOn(sb);
    cout << endl;
    h.RideOn(bmx);
}



void Learning_OOP_Many_Inheritance_Same_Methods()
{
    class Car
    {
    public:
        void Use() // Одинаковый метод у двух классов
        {
            cout << "Driving...\n ";
        }
    };

    class Plane
    {
    public:
        void Use() // Одинаковый метод у двух классов
        {
            cout << "Flying...\n ";
        }
    };

    class FlyingCar :public Car, public Plane // Множественное наследование
    {

    };

    FlyingCar fc;

    ((Car)fc).Use(); // Нужно привести объект класса FlyingCar к классу, чей метод мы хотим использовать
    ((Plane)fc).Use(); // Нужно привести объект класса FlyingCar к классу, чей метод мы хотим использовать



}


void Learning_OOP_Many_Inheritance()
{
    class Car
    {
    public:
        void Drive()
        {
            cout << "Driving...\n ";
        }
    };

    class Plane
    {
    public:
        void Fly()
        {
            cout << "Flying...\n ";
        }
    };

    class FlyingCar :public Car, public Plane // Множественное наследование
    {

    };

    FlyingCar fc;
    fc.Drive();
    fc.Fly();
}

void Learning_OOP_Virutal_Method_Base_Class()
{
    class Msg
    {
    public:
        Msg(string msg)
        {
            this->msg = msg;
        }
        virtual string Get_Msg()
        {
            return msg;
        }
    private:
        string msg;
    };

    class Braket_Msg :public Msg
    {
    public:
        Braket_Msg(string msg) :Msg(msg)
        {

        }
        string Get_Msg() override
        {
            return "(" + Msg::Get_Msg() + ")"; // вызов виртуального метода базового класса
        }
    };

    class Printer
    {
    public:
        void print_msg(Msg* msg)
        {
            cout << msg->Get_Msg() << endl;
        }
    };

    Braket_Msg m("Привет!");

    Printer p;
    p.print_msg(&m);
}


void Learning_OOP_Delegate_Constructor()
{
    class Human
    {
    public:
        Human()
        {
            name = "Неизвестно";
            age = 0;
            day_birth = 0;
        }
        Human(string name) :Human() // Делегирующий конструктор // Поля age и day_birth инициализируются нулям, т.к. эта логика описана в конструкторе по умолчанию // То есть, сначала выполняется конструктор по умолчанию, потом этот
        {
            this->name = name;
        }
        Human(string name, int age) :Human(name) // Делегирующий конструктор // Сначала выполняется конструктор  name, потом по умолчанию, в конс.умол. все поля иницилазириуются 0, потом присваивается имя, а потом и возраст
        {
            this->age = age;
        }
        Human(string name, int age, int day_birth) :Human(name, age) // Делегирующий конструктор
        {
            this->day_birth = day_birth;
        }
        void print_stats()
        {
            cout << "Имя: " << name << endl;
            cout << "Возраст: " << age << endl;
            cout << "День Рождения: " << day_birth << endl;
            cout << endl;
        }
    private:
        string name;
        int age;
        int day_birth;
    };

    Human human;
    human.print_stats();

    Human human1("Дмитрий");
    human1.print_stats();

    Human human2("Александр", 21);
    human2.print_stats();

    Human human3("Владимир", 23, 11);
    human3.print_stats();
}






// Начало материала про - ЧИСТО виртуальный деструктор //

class A_1
{
public:
    A_1()
    {

    }
    virtual ~A_1() = 0; // Чисто Виртуальный деструктор
};

A_1::~A_1() {}; // Нужно вынести реализацию виртуального деструктора вне класса, чтобы всё работало

class B_1 : public A_1
{
public:
    B_1()
    {

    }
    ~B_1() override
    {

    }
};


void Learning_OOP_Just_Virutal_Destructor()
{

}
// Конец материала про - ЧИСТО виртуальный деструктор //



void Learning_OOP_Virutal_Destructor()
{
    class A
    {
    public:
        A()
        {
            cout << "Выделена динамическая память, объект класса А \n";
        }
        virtual ~A() // Виртуальный деструктор
        {
            cout << "Очищена динамическая память, объект класса А \n";
        }
    };

    class B : public A
    {
    public:
        B()
        {
            cout << "Выделена динамическая память, объект класса B \n";
        }
        ~B() override
        {
            cout << "Очищена динамическая память, объект класса B \n";
        }
    };

    // Т.к. мы сделали деструктор виртуальным, мы не получим утечку памяти.

    A* b_ptr = new B;

    delete b_ptr;
}


void Learning_OOP_abstract_class_Polymorphism()
{
    class Weapon // Абстрактный класс
    {
    public:
        virtual void Shoot() = 0; // Функция виртуальная // Класс становится абстрактным

        void Reload() // В абстрактном классе могут реализовываться не только виртуальные функции, также обычные
        {
            cout << "Reloading.... \n";
        }
    };


    class Gun :public Weapon
    {
    public:
        void Shoot() override
        {
            cout << "BAAANG !!!" << endl;
        }
    };

    class TommyGun :public Weapon
    {
    public:
        void Shoot() override // Другая реализация для функции Shoot() // Ключевое слово override - необязательно, но нужно для контролирования метода ( чтобы мы не внесли никаких изменений в функцию ( название,тип и т.д.))
        {
            cout << "BAAANG !!! BAAANG !!! BAAANG !!! BAAANG !!!" << endl;
        }
    };

    class Knife :public Weapon
    {
    public:
        void Shoot() override
        {
            cout << "VJUUUUHHHH" << endl;
        }
    };

    class Player
    {
    public:
        void Shoot(Weapon* weapon) // Все классы, которые являются наследниками класса weapon, будут иметь метод Shoot
        {
            weapon->Shoot();
        }
    };

    Knife knife;
    Gun gun;
    TommyGun tommygun;

    Player player;
    player.Shoot(&knife);
    player.Shoot(&gun);
    gun.Reload();
    player.Shoot(&tommygun);

}




void Learning_OOP_virtual_functions_Polymorphism()
{
    class Gun
    {
    public:
        virtual void Shoot() // Делаем метод виртуальным. Для переопределения в классе наследнике ( сделать другую реализации )
        {
            cout << "BAAANG !!!" << endl;
        }
    };

    class TommyGun :public Gun
    {
    public:
        void Shoot() override // Другая реализация для функции Shoot() // Ключевое слово override - необязательно, но нужно для контролирования метода ( чтобы мы не внесли никаких изменений в функцию ( название,тип и т.д.))
        {
            cout << "BAAANG !!! BAAANG !!! BAAANG !!! BAAANG !!!" << endl;
        }
    };

    class Player
    {
    public:
        void Shoot(Gun* gun) // Все классы, которые являются наследниками класса weapon, будут иметь метод Shoot
        {
            gun->Shoot();
        }
    };

    Gun gun;
    TommyGun tommygun;
    Player player;

    Gun* weapon = &tommygun; // Хранит ссылку на объект TommyGun // Указатель на пистолет может хранить и класс пистолет и класс пистолет-пулемёт, т.к он класс наследник
    Gun* weapon_2 = &gun; // Хранит ссылку на объект Gun

    weapon->Shoot(); // Здесь вызывается метод из класса TommyGun
    weapon_2->Shoot(); // Здесь вызывается метод из класса Gun

    player.Shoot(&tommygun); // Хоть в параметер у нас требуется указатель на объект класса Gun, мы можем использовать указатель на объект класса TommyGun

}


void Learning_OOP_Constructors_Base_Class_Inheritance()
{
    class A
    {
    public:
        A()
        {
            msg = "Empty message";
        }

        A(string msg)
        {
            this->msg = msg;
        }

        void print_msg()
        {
            cout << msg << endl;
        }
    private:
        string msg;

    };

    class B : public  A
    {
    public:
        B() :A("A message") // После двоеточия указываем какой именно конструктор класса A мы хотим использовать
        {

        }

    };

    B value;
    value.print_msg();

}


void Learning_OOP_Constructors_Destructors_Inheritance()
{
    class A
    {
    public:
        A()
        {
            cout << "Конструктор класса A \n";
        }
        ~A()
        {
            cout << "Деструктор класса A \n";
        }
    };

    class B : public  A
    {
    public:
        B()
        {
            cout << "Конструктор класса B \n";
        }
        ~B()
        {
            cout << "Деструктор класса B \n";
        }
    };

    class C : public  B
    {
    public:
        C()
        {
            cout << "Конструктор класса C \n";
        }
        ~C()
        {
            cout << "Деструктор класса C \n";
        }
    };

    C c;
}




void Learning_OOP_Modificators_Inheritance()
{
    class A
    {
    public:
        string msg_1 = "1 message";

    private:
        string msg_2 = "2 message";

    protected:
        string msg_3 = "3 message";
    };

    class B : public  A
    {
    public:
        void print()
        {
            cout << msg_1 << endl; // Выводим строку из поля public, класс A
            cout << msg_3 << endl; // Выводим строку из поля protected, класс A
        }

    };
    B b;
    b.print();
}




void Learning_OOP_Inheritance()
{
    class Human
    {
    protected:
        string name;
        string surname;
        int age;
    };


    class Student : public Human // Наследуем public поля класса Human
    {
    public:
        Student()
        {
            name = "None";
            surname = "None";
            age = 0;
        }
        Student(string name, string surname, int age)
        {
            this->name = name;
            this->surname = surname;
            this->age = age;
            group = rand() % 300 + 20;
        }
        int group;

        void Learn()
        {
            cout << name << surname << age << "учится \n" << "группа: " << group << "а \n";
        }
    };

    class Extramural_student : public Student // Класс студента заочника. // Унаследовал класс Student, который в свою очередь был унаследован классом Human
    {
    public:
        Extramural_student(string name, string surname, int age)
        {
            this->name = name;
            this->surname = surname;
            this->age = age;
            group = rand() % 300 + 20;
        }

        void Learn()
        {
            cout << name << surname << age << "учится на заочном обучении \n" << "группа: " << group << "а \n";
        }
    };


    class Professor : public Human // Наследуем public поля класса Human
    {
    public:
        string subject;
    };

    Student student("Дмитрий", "Дубинин", 18);
    student.Learn();


    Extramural_student ext_st("Владимир", "Пупкин", 22);
    ext_st.Learn();

}




void Learning_OOP_Agregation_Composition()
{
    // Пример агрегации. Жестко НЕ привязан к одному классу // Классы использующие друг друга, независимы
    class Cap
    {
    private:
        string color = "red";
    public:
        string Get_color()
        {
            return color;
        }

    };

    class Model
    {
    public:
        void Wear_Cap()
        {
            cout << "Class - Model \n Надел кепку, цвет -  " << cap.Get_color() << endl; // Агрегация
        }
    private:
        Cap cap;
    };

    // Пример композиции
    class Human
    {
    public:
        void think()
        {
            brain.think(); // Композиция. Жесткая привязка одного объекта/класса (Brain) к другому (Human)
        }

        void Wear_Cap()
        {
            cout << "Class - Human \n Надел кепку, цвет -  " << cap.Get_color() << endl; // Агрегация
        }

    private:
        class Brain
        {
        public:
            void think()
            {
                cout << "Thinking..." << endl;
            }
        };
        Brain brain; // Пример композиции
        Cap cap; // Пример агрегации.
    };

    Human human;
    human.think();
    human.Wear_Cap();

    Model model;
    model.Wear_Cap();
}



void Learning_OOP_Arr_Class_Objects()
{
    class Pixel
    {
    public:
        Pixel() // Конструктор по умолчанию для создания массива
        {
            red = green = blue = 0;
        }

        Pixel(int red, int green, int blue)
        {
            this->red = red;
            this->green = green;
            this->blue = blue;
        }

        string get_info()
        {
            return "Pixel \n red: " + to_string(red) + "\n green: " + to_string(green) + "\n blue: " + to_string(blue);
        }
    private:
        int red;
        int green;
        int blue;
    };

    const int LENGTH = 10;
    Pixel array[LENGTH] = {
        Pixel(0,11,23)
    };
    cout << array[0].get_info() << endl;


    Pixel* arr = new Pixel[5];

    delete[] arr;
}



void Learning_OOP_Inner_Class()
{
    class Image
    {
    private:
        class Pixel // Вложенный класс
        {
        public:
            Pixel(int red, int green, int blue)
            {
                this->red = red;
                this->green = green;
                this->blue = blue;
            }
            string get_info()
            {
                return "Pixel \n red: " + to_string(red) + "\n green: " + to_string(green) + "\n blue: " + to_string(blue);
            }
        private:
            int red;
            int green;
            int blue;
        };
        Pixel pixels[5]
        {
            Pixel(0,4,64),
            Pixel(12,33,11),
            Pixel(0,0,255),
            Pixel(34,44,128),
            Pixel(82,91,156)
        };

    public:
        void get_image_info()
        {
            for (int i = 0; i < 5; i++)
            {
                cout << pixels[i].get_info() << endl;
            }
        }
    };

    Image dog;
    dog.get_image_info();
}


// Начало материала про static методы //
class Carrot
{
public:


    Carrot(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        count++;
    }
    static int Get_count() // Статистический метод
    {
        // weight = 200;  Вот так мы сделать не можем, т.к. метод статический и не может изменять не статические переменные
        return count;
    }

    static void Change_color(Carrot& carrot_value, string change_color) // Указывая в аргументах ссылку на объект, мы можем менять значение передаваемого объекта
    {
        carrot_value.color = change_color;
    }

private:
    static int count; // Объявляем статическую переменную. Её значение будет одно для всех объектов класса
    int weight;
    string color;
};

int Carrot::count = 0; // Инициализируем статическую переменную вне класса


void Learning_OOP_Static_Methods()
{
    Carrot a(120, "orange");
    Carrot b(220, "red");
    Carrot c(130, "orange");

    c.Change_color(c, "brown"); // Изменяем цвет именно этому объекту
    Carrot::Change_color(c, "red"); // Изменяем цвет именно этому объекту, с помощью класса


    cout << Carrot::Get_count() << endl;
}
// Конец материала про static методы //



// Начало материала про static //
class Potato
{
public:
    static int count; // Объявляем статическую переменную. Её значение будет одно для всех объектов класса

    Potato(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        count++;
        id = count;
    }

    int Get_Id()
    {
        return id;
    }
private:
    int weight;
    string color;
    int id;
};

int Potato::count = 0; // Инициализируем статическую переменную вне класса

void Learning_OOP_Key_Word_Static()
{
    Potato pot(500, "brown");
    Potato pot2(300, "green");
    Potato pot3(300, "green");
    Potato pot4(200, "red");

    cout << "Кол-во объектов: " << Potato::count << endl;

    // Тут выводим id объектов //
    cout << pot.Get_Id() << endl;
    cout << pot2.Get_Id() << endl;
    cout << pot3.Get_Id() << endl;
    cout << pot4.Get_Id() << endl;

}
// Конец материала про static //




 // Начало материала про дружественный класс//
class New_Human; // Создаем прототипы классов
class New_Apple;

class New_Apple
{
    friend New_Human; // Делаем класс New_Human - дружественным
private:
    int weight;
    string color;
public:
    New_Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
    }
};

class New_Human
{
public:
    void take_apple(New_Apple& apple_value)
    {
        cout << "Method take_apple \n";
        cout << "Weight - " << apple_value.weight << endl;
        cout << "Color - " << apple_value.color << endl;
    }
};


void Learning_OOP_Friend_Class()
{
    New_Apple apple(250, "green");
    New_Human human;
    human.take_apple(apple);

}

// Конец материала про дружественный  класс //







void String_Class()
{
    class MyString
    {
    public:
        MyString() // Конструктор класса, без параметров
        {
            str = nullptr;
            length = 0;
        }

        MyString(const char* str) // Конструктор с параметрами, для передачи строки, которую он будет хранить
        {
            length = strlen(str); // Получаем кол-во символов в строке

            this->str = new char[length + 1]; // Выделяем память, где будет храниться наша строка, +1 т.к. надо место для \0

            for (int i = 0; i < length; i++) // Копируем символы строки в массив нашего класса
            {
                this->str[i] = str[i];
            }
            this->str[length] = '\0'; // закрываем строку детерминирующим нулём
        }

        ~MyString() // Деструктор
        {
            delete[] this->str;
        }

        MyString(const MyString& other) // Конструктор копирования
        {
            length = strlen(other.str);

            this->str = new char[length + 1];

            for (int i = 0; i < length; i++)
            {
                this->str[i] = other.str[i];
            }
            this->str[length] = '\0';
        }

        MyString(MyString&& other) // Конструктор перемещения
        {
            this->length = other.length;
            this->str = other.str;

            other.str = nullptr;
        }

        MyString& operator = (const MyString& other) // перегруженный оператор присваивания, вызывается когда нужно присвоить значение одного объекта другому
        {
            // логика та же, что и в конструкторе, за исключением того что нужно позабоиться об освобождении ресурсов объекта, если до копирования в него новой строки, он уже содержал что-либо

            if (this->str != nullptr)
            {
                delete[] str;
            }

            length = strlen(other.str);

            this->str = new char[length + 1];

            for (int i = 0; i < length; i++)
            {
                this->str[i] = other.str[i];
            }
            this->str[length] = '\0';

            return *this;
        }

        MyString operator + (const MyString& other) // перегруженный оператор сложения, для конкатенации строк
        {
            // Создаем новый объект, где будем хранить результат конкатенации строк и который будет результатом работы перегруженного оператора
            MyString newstr;

            // Получаем кол-во символов в обеих объектах для конкатенации
            int this_length = strlen(this->str);
            int other_length = strlen(other.str);

            newstr.length = this_length + other_length;

            newstr.str = new char[this_length + other_length + 1]; // Выделяем место в памяти под результат сложения строк

            // Копируем данные из двух слагаемых строк в новую
            int i = 0;

            for (; i < this_length; i++)
            {
                newstr.str[i] = this->str[i];
            }

            for (int j = 0; j < other_length; j++, i++)
            {
                newstr.str[i] = other.str[j];
            }

            newstr.str[this_length + other_length] = '\0';

            return newstr; // Возвращаем результат конкатенации
        }

        bool operator ==(const MyString& other) // Перегрузка оператора равенства строк
        {
            if (this->length != other.length)
            {
                return false;
            }

            for (int i = 0; i < this->length; i++)
            {
                if (this->str[i] != other.str[i])
                {
                    return false;
                }
            }
            return true;
        }

        bool operator !=(const MyString& other) // Перегрузка оператора НЕ равенства строк
        {
            return !(this->operator==(other));
        }

        bool operator >(const MyString& other)
        {
            if (this->length > other.length)
            {
                return true;
            }
            return false;
        }

        char& operator [](int index)
        {
            return this->str[index];
        }

        int Length()
        {
            return length;
        }

        void print()
        {
            cout << str << endl;
        }

    private:
        char* str; // Указатель на массив char, хранит символы, которые мы передали наш объект
        int length; // Длина строки
    };
    MyString str("Text12");
    MyString str2("Tex1");
    MyString result = str + str2;

    str.print();
    cout << str.Length() << endl;

    str2.print();
    cout << str2.Length() << endl;

    result.print();
    cout << result.Length() << endl;

    bool equal = str == str2;
    if (equal) cout << "Strings are equal \n";
    if (!equal) cout << "Strings are NOT equal \n";

    str[0] = 'M';
    cout << "Вывод 0 элемента 1-ой строки: " << str[0] << endl;


}



// Начало материала про дружественный метод класса //
class Human; // Создаем прототипы классов
class Apple;

class Human
{
public:
    void take_apple(Apple& apple); // Прототип функции ( его реалзиация после функции main )
};

class Apple
{
private:
    int weight;
    string color;
public:
    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
    }
    friend void Human::take_apple(Apple& apple); // Дружественный метод класса
};


void Learning_OOP_Friend_Class_Method()
{
    Apple apple(200, "red");
    Human first;
    first.take_apple(apple);
}


void Human::take_apple(Apple& apple) // Реализация функции. Метод нужно вывести вне класса, чтобы всё работало
{
    cout << "Method take_apple \n";
    cout << "Weight - " << apple.weight << endl;
    cout << "Color - " << apple.color << endl;
}

// Конец материала про дружественный метод класса //





// Начало материала про вынесение метода из класса //
class MyClass
{
public:
    void print_msg(); // Прототип метода
};

void MyClass::print_msg() // Реализация самого метода
{
    cout << "This method is out of the class \n";
}

void Learning_OOP_Method_Out_Of_Class()
{
    MyClass a;
    a.print_msg();
}
// Конец материала про вынесение метода из класса //



// Начало материала про дружественные функции //

class Test; // Прототип класса

class Point
{
private:
    int x;
    int y;
public:
    Point()  // Конструктор Класса по умолчанию  № 1
    {
        x = 0;
        y = 0;
        cout << "Адрес конструктора: " << this << "\n"; // При вызове класса, мы получим его адрес
    }


    Point(int value_x, int value_y) // Конструктор Класса № 2
    {
        x = value_x;
        y = value_y;
        cout << "Адрес конструктора: " << this << "\n"; // При вызове класса, мы получим его адрес
    }

    void print()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

    friend void Friend_f_ChangeX(Point& value, Test& test_value); // Делаем функцию дружественной для работы с полями private

};

class Test
{
private:
    int data;

    friend void Friend_f_ChangeX(Point& value, Test& test_value); // Делаем функцию дружественной для работы с полями private
};

void Learning_OOP_Friend_Functions_Classes() // Основная функция
{

    Point a(11, 33);
    Test test;
    Friend_f_ChangeX(a, test);
    a.print();
}



void Friend_f_ChangeX(Point& value, Test& test_value) // Дружественная функция
{
    value.x = -1; // Доступ к классу Point
    test_value.data = 100; // Дружественная функция может имеет доступ к другим классам, в нашем случае - Test
}

// Конец материала про дружественные функции //




void Learning_OOP_Peregruzka_Operatora_Index()
{
    class Test
    {
    private:
        int arr[5] = { 1,2,3,4,5 };
    public:
        int& operator[](int index)
        {
            return arr[index];
        }
    };

    Test a;

    cout << a[2] << endl;
}

void Learning_OOP_Peregruzka_Operatora_Sum()
{
    class Point
    {
    private:
        int x;
        int y;
    public:
        Point()  // Конструктор Класса по умолчанию  № 1
        {
            x = 0;
            y = 0;
            cout << "Адрес конструктора: " << this << "\n"; // При вызове класса, мы получим его адрес
        }


        Point(int value_x, int value_y) // Конструктор Класса № 2
        {
            x = value_x;
            y = value_y;
            cout << "Адрес конструктора: " << this << "\n"; // При вызове класса, мы получим его адрес
        }

        Point& operator ++() // Перегрузка оператора префиксного инкремента
        {
            this->x++;
            this->y++;

            return *this;
        }

        Point& operator ++(int value) // Перегрузка оператора постфиксного инкремента (Значение предеается, чтобы компилятор понял, это постфиксная)
        {
            Point temp(*this); // Запоминаем текущее состояние объекта ( Создаем копию текующего объекта )

            this->x++;
            this->y++;

            return temp;
        }

        Point operator +(const Point& other) // Перегрузка оператора сложения
        {
            Point temp;
            temp.x = this->x + other.x;
            temp.y = this->y + other.y;

            return temp;
        }

        Point operator -(const Point& other) // Перегрузка оператора вычитания
        {
            Point temp;
            temp.x = this->x - other.x;
            temp.y = this->y - other.y;

            return temp;
        }

        void print()
        {
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }

    };

    Point a(55, 11);
    Point b(22, 33);

    Point c = a - b;

    cout << "Операция вычитания. Класс - c \n";
    c.print();

    ++c;

    cout << "Операция префиксного инкремента. Класс - c \n";
    c.print();

    Point d = c++;

    cout << "Операция постфиксного инкремента. Класс - d \n";
    d.print();

    cout << "Операция постфиксного инкремента. Класс - c \n";
    c.print();
}

void Learning_OOP_Peregruzka_Logical_Operators_Sravnenia()
{
    class Point
    {
    private:
        int x;
        int y;
    public:
        Point()  // Конструктор Класса по умолчанию  № 1
        {
            x = 0;
            y = 0;
            cout << "Адрес конструктора: " << this << "\n"; // При вызове класса, мы получим его адрес
        }


        Point(int value_x, int value_y) // Конструктор Класса № 2
        {
            x = value_x;
            y = value_y;
            cout << "Адрес конструктора: " << this << "\n"; // При вызове класса, мы получим его адрес
        }

        bool operator == (const Point& other) // Перегрузка оператора равенства
        {
            return this->x == other.x && this->y == other.y;
        }

        bool operator != (const Point& other) // Перегрузка оператора НЕравенства
        {
            return !(this->x == other.x && this->y == other.y);
        }

        int get_x() // Метод Геттер // Получаем значение - x
        {
            return x;
        }

        void set_x(int x) // Метод Сеттер // Устанавливаем значения для - x
        {
            this->x = x; // Мы здесь используем ключевое слово this, чтобы дать компилятору понять, что мы обращаемся имеено к "x", который находится в классе и присваеиваем ему значение, которое передал пользователь.
        }

        void print()
        {
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl;
        }
    };

    Point a(1, 5);
    Point b(1, 5);

    a.print();
    b.print();

    bool check = a == b;

    if (check == true)
    {
        cout << "Данные равны \n";
    }
    else
    {
        cout << "Данные не равны \n";
    }


    Point c(3, 5);
    Point d(1, 5);

    c.print();
    d.print();

    bool check2 = c != d;

    if (check2 == true)
    {
        cout << "Данные НЕ равны \n";
    }
    else
    {
        cout << "Данные равны \n";
    }
}

void Learning_OOP_Peregruzka_Operatora_Prisvaivania()
{
    class MyClass
    {
    private:
        int Size;
    public:
        int* data;
        MyClass(int size) // Конструктор
        {
            this->Size = size;
            this->data = new int[size];

            for (int i = 0; i < size; i++)
            {
                data[i] = rand() % 700 + 20;
            }

            cout << "Running.... CLASS \n" << "Адрес: " << this << endl << endl;
        }

        MyClass(const MyClass& other) // Конструктор Копирования
        {
            this->Size = other.Size;
            this->data = new int[other.Size];

            for (int i = 0; i < other.Size; i++)
            {
                this->data[i] = other.data[i];
            }

            cout << "Running.... Конструктор Копирования \n" << "Адрес: " << this << endl << endl;
        }

        MyClass& operator = (const MyClass& other) // Оператор Присваивания
        {
            cout << "Running.... Оператор Присваивания \n" << "Адрес: " << this << endl << endl;

            this->Size = other.Size;

            delete[] this->data;

            this->data = new int[other.Size];

            for (int i = 0; i < other.Size; i++)
            {
                this->data[i] = other.data[i];
            }

            return *this; // Возвращаем адрес указателя на наш текущий объект, которому мы выполнили присваивание.
                            // Делается для того, чтобы мы могли выполнить данное присваивание: a = b = c;
        }

        ~MyClass() // Деструктор
        {
            cout << "Finished CLASS \n" << "Адрес: " << this << endl << endl;
            delete[] data;
        }
    };

    MyClass a(11);
    MyClass b(8);
    MyClass c(4);

    a = b = c;


}

void Learning_OOP_Constructor_Copirovania()
{
    class MyClass
    {
    private:
        int Size;
    public:
        int* data;
        MyClass(int size) // Конструктор
        {
            this->Size = size;
            this->data = new int[size];

            for (int i = 0; i < size; i++)
            {
                data[i] = rand() % 700 + 20;
            }

            cout << "Running.... CLASS \n" << "Адрес: " << this << endl << endl;
        }

        MyClass(const MyClass& other) // Конструктор Копирования
        {
            this->Size = other.Size;
            this->data = new int[other.Size];

            for (int i = 0; i < other.Size; i++)
            {
                this->data[i] = other.data[i];
            }

            cout << "Running.... Конструктор Копирования \n" << "Адрес: " << this << endl << endl;
        }

        ~MyClass() // Деструктор
        {
            cout << "Finished CLASS \n" << "Адрес: " << this << endl << endl;
            delete[] data;
        }

        void Print()
        {
            for (int i = 0; i < Size; i++)
            {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    };

    MyClass a(10);
    MyClass b(a); // Копируем в класс b, польностью класс a

    a.Print();
    b.Print();
}


void Learning_OOP_KeyWord_this()
{
    class Point
    {
    private:
        int x;
        int y;
    public:
        Point()  // Конструктор Класса по умолчанию  № 1
        {
            x = 0;
            y = 0;
            cout << "Адрес конструктора: " << this << "\n"; // При вызове класса, мы получим его адрес
        }


        Point(int value_x, int value_y) // Конструктор Класса № 2
        {
            x = value_x;
            y = value_y;
            cout << "Адрес конструктора: " << this << "\n"; // При вызове класса, мы получим его адрес
        }

        int get_x() // Метод Геттер // Получаем значение - x
        {
            return x;
        }

        void set_x(int x) // Метод Сеттер // Устанавливаем значения для - x
        {
            this->x = x; // Мы здесь используем ключевое слово this, чтобы дать компилятору понять, что мы обращаемся имеено к "x", который находится в классе и присваеиваем ему значение, которое передал пользователь.
        }

        void print()
        {
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl;
        }
    };

    cout << "Класс a \n";
    Point a;
    a.set_x(100);
    a.print();




    cout << "Класс b \n";
    Point b(1, 3);

}

void Victorina()
{
    cout << "Добро пожаловать в Викторину! Решите примеры за определенное время!" << endl;
    Sleep(2000);

    int count = 0;
    int i = 1;
    while (i <= 5)
    {
        cout << endl;
        int num1 = rand() % (i * 50) + 1;
        int num2 = rand() % (i * 40) + 1;
        cout << num1 << "+" << num2 << endl;
        cout << "Решите данный пример за " << 10 - i << " секунд: ";

        int val = 0;
        thread t1([&]()
            {
                cin >> val;
            });
        this_thread::sleep_for(std::chrono::seconds(10 - i));
        t1.detach();

        if (val == num1 + num2)
        {
            count++;
            cout << "Правильно! \n";
        }
        else
        {
            cout << endl;
            cout << "Не Правильно! \n";
        }
        i++;
    }
    cout << endl;
    if (count == 5) cout << "Отлично справился! Всё правильно! \n" << "Правильных ответов: " << count << endl;
    if (count == 4 || count == 3) cout << "Неплохо справился, но можно лучше \n" << "Правильных ответов: " << count << endl;
    if (count == 2 || count == 1) cout << "Да нуууу... поднатужься немного \n" << "Правильных ответов: " << count << endl;
    if (count == 0) cout << "Чел.. иди матан подучи \n" << "Правильных ответов: " << count << endl;
}



void Learning_OOP_Destructor_Classa()
{
    class MyClass
    {
    public:
        MyClass() // Конструктор
        {
            cout << "Running.... CLASS" << endl;
        }

        ~MyClass() // Деструктор
        {
            cout << "Finished CLASS" << endl << endl;
        }
    };

    cout << "Main Function" << endl;

    if (true)
    {
        cout << "If Condition \n" << endl;
        MyClass a;
        cout << "End of IF Condition" << endl;
    }
    cout << "End OF Main Function" << endl;
}

void Learning_OOP_Constructor_Classa_Peregruzka()
{
    class Point
    {
    private:
        int x;
        int y;
    public:
        Point()  // Конструктор Класса по умолчанию  № 1
        {
            x = 0;
            y = 0;
        }


        Point(int value_x, int value_y) // Конструктор Класса № 2
        {
            x = value_x;
            y = value_y;
        }

        Point(int* arr, int size_arr) // Конструктор Класса № 3
        {
            for (int i = 0; i < size_arr; i++)
            {
                arr[i] = rand() % 5670 + 1;
                cout << arr[i] << endl;
            }
        }

        int get_x() // Метод Геттер // Получаем значение - x
        {
            return x;
        }

        void set_x(int value_x) // Метод Сеттер // Устанавливаем значения для - x
        {
            x = value_x;
        }

        void print()
        {
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl;
        }
    };

    Point a;
    a.print();

    Point b(1, 4);
    b.print();

    int size = 10;
    int* array = new int[size];
    Point c(array, size);


}

void Learning_OOP_Constructor_Classa()
{
    class Point
    {
    private:
        int x;
        int y;
    public:
        Point(int value_x, int value_y) // Конструктор Класса
        {
            x = value_x;
            y = value_y;
        }

        int get_x() // Метод Геттер // Получаем значение - x
        {
            return x;
        }

        void set_x(int value_x) // Метод Сеттер // Устанавливаем значения для - x
        {
            x = value_x;
        }

        void print()
        {
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl;
        }
    };

    Point a(7, 6);

    a.print();
}

void Learning_OOP_Incapsulation()
{
    class CoffeGrinder
    {
    private:
        int check_voltage()
        {
            int volt = 100 + rand() % 225;
            return volt;
        }

    public:
        void Start()
        {
            int voltage = check_voltage();
            if (voltage > 250 || voltage < 180)
            {
                cout << "Повышенное напряжение!" << endl;
                cout << "Вольт: " << voltage << endl;
            }
            else
            {
                cout << "Кофе машина работает...." << endl;
                cout << "Вольт: " << voltage << endl;
            }
        }
    };

    CoffeGrinder a;
    a.Start();

}

void Learning_OOP_Methods_Get_Set()
{
    class Point
    {
    private:
        int x;
        int y;
    public:
        int get_x() // Метод Геттер // Получаем значение - x
        {
            return x;
        }

        void set_x(int value_x) // Метод Сеттер // Устанавливаем значения для - x
        {
            x = value_x;
        }

        void print()
        {
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl;
        }
    };

    Point a;

    a.print();
}

void Learning_OOP_Modificators()
{
    class Point
    {
        // Модификатор - public //
       // Доступ к объектам класса - есть у всех//
    public:
        int x;
        int y;
        // Модификатор - private //
       // Доступ к объектам класса - есть только у данного класса или дружественным классам/функциям //
    private:
        int z;
        // Модификатор - protected //
        // Доступ к объектам - Тоже самое что и private, но также есть доступ при наследовании //
    protected:
        int n;
    };
}

int Learning_OOP_Methods()
{
    class Human
    {
    public:
        int age;
        int weight;
        string name;

        void print()
        {
            cout << "Имя - " << name << endl;
            cout << "Возраст - " << age << endl;
            cout << "Вес - " << weight << endl;
        }
    };

    Human first;
    first.age = 25;
    first.weight = 80;
    first.name = "Дмитрий";
    first.print();

    return 0;
}

int Learning_OOP_Class()
{
#define or ||
#define and &&

    class Diary
    {
    public:
        int Math_Grade;
        int Physics_Grade;
        int Chemic_Grade;
        int Geo_Grade;
        int Bio_Grade;
        int PE_Grade;
        int Draw_Grade;
        int English_Grade;
    };

    class Student
    {
    public:
        int id;
        string pass;
        string name;
        string surname;
        string fathers_name;
        string clas;
    };

    int choose_Role;
    int id;
    string pass;

    Student s1;
    s1.id = 1;
    s1.pass = "123qwer";
    s1.name = "Дмитирй";
    s1.surname = "Дубинин";
    s1.fathers_name = "Денисович";
    s1.clas = "11-Б";

    Diary s1_Diary;

    s1_Diary.Math_Grade = 8;
    s1_Diary.Physics_Grade = 6;
    s1_Diary.Chemic_Grade = 9;
    s1_Diary.Geo_Grade = 10;
    s1_Diary.Bio_Grade = 8;
    s1_Diary.PE_Grade = 12;
    s1_Diary.Draw_Grade = 11;
    s1_Diary.English_Grade = 11;


    cout << "\t Приветствуем вас в электронном дневнике! \n";
    cout << "\t Для начала определимся кем вы являетесь. Вы преподаватель или ученик? \n";
    cout << "1) Преподаватель \n";
    cout << "2) Ученик \n";
    do
    {
        cout << "Введите соответствующуую цифру: ";
        cin >> choose_Role;
    } while (choose_Role < 1 or choose_Role > 2);

    if (choose_Role == 2)
    {
        cout << "\t Приветствую вас учащийся нашей школы! \n";
        do
        {
            cout << "Введите ваш id: ";
            cin >> id;
        } while (id != s1.id);

        do
        {
            cout << "Введите ваш пароль: ";
            cin >> pass;
        } while (pass != s1.pass);
        cout << endl;
        cout << "Здравствуйте, " << s1.name << endl;
        cout << "Вот ваши данные: \n";
        cout << "\t Имя - " << s1.name << endl;
        cout << "\t Фамилия - " << s1.surname << endl;
        cout << "\t Отчество - " << s1.fathers_name << endl;
        cout << "\t Класс - " << s1.clas << endl;

        cout << "--------------------------------------- \n";

        cout << "Ваши оценки: \n";
        cout << "Математика: " << s1_Diary.Math_Grade << endl;
        cout << "Физика: " << s1_Diary.Physics_Grade << endl;
        cout << "Химия: " << s1_Diary.Chemic_Grade << endl;
        cout << "География: " << s1_Diary.Geo_Grade << endl;
        cout << "Биология: " << s1_Diary.Bio_Grade << endl;
        cout << "Рисование: " << s1_Diary.Draw_Grade << endl;
        cout << "Английский язык: " << s1_Diary.English_Grade << endl;
    }



    return 0;
    system("pause");
}

void ternar_operator()
{
#define or ||
#define and &&

    int age = 0;
    do
    {
        cout << "Введите ваш возраст ( не меньше 0, не больше 150: ";
        cin >> age;
    } while (age <= 0 or age > 150);

    if (age > 0 and age <= 6)
    {
        cout << "Детсадовец" << endl;
    }
    else if (age > 6 and age <= 12)
    {
        cout << "Пиздюк" << endl;
    }


    // Тернарный оператор. После знака вопроса (?) идёт если условие верно, после двоеточия (:) если условие НЕверно //

     /*В данной конструкции после первого знака вопроса будет выводится если условие верно, далее идёт двоеточие, если после двоеточия условие верно, то выполняется
     после знака вопроса конструкция, и после последнего двоеточие будет выполнятся если два наших условия будет НЕВЕРНЫ*/
    (age > 12 and age <= 18) ? (cout << "Подросточек вонючий" << endl) : (age > 18 and age <= 55) ? (cout << "Взрослый типочек" << endl) : (cout << "Дед" << endl);


}

void conditional_compilation()
{
#define если if
#define вывод cout
#define ввод cin
#define сумма(x,y) ((x)+(y))
#define умножь(x,y) ((x)*(y))
#define DEBUG // Если закомментировать данное определение, тело в ifdef НЕ будет выполнено

#ifdef DEBUG
    вывод << сумма(55, 11) << endl;
#else
    вывод << умножь(55, 11) << endl;
#endif
}


string good()
{
    return "You are a good person!";
}

string bad()
{
    return "You are a bad person!";
}

void show_answer(string(*func)())
{
    cout << func() << endl;
}

int string_len(char str[])
{
    int count = 0;
    char space = ' ';
    while (true)
    {
        int i = 0;
    check_again:
        if (str[i] == space)
        {
            i++;
            goto check_again;
        }
        else if (str[i] != '\0')
        {
            count++;
            i++;
            goto check_again;
        }
        else
        {
            break;
        }
    }
    return count;
}

int add_arr_elem(int*& arr, int& size, const int index, const int value)
{
    if (index < 0 || index >= size)
    {
        cout << "Индекс элемента должен быть больше либо равным 0 и меньше либо равным " << size - 1 << endl;
        return 0;
    }
    bool check = false;
    size++;
    int* new_arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            new_arr[i] = value;
            i++;
            check = true;
        }
        if (check == true)
        {
            new_arr[i] = arr[i - 1];
        }
        else
        {
            new_arr[i] = arr[i];
        }
    }

    delete[] arr;

    arr = new_arr;
}

void push_back(int*& arr, int& size, const int value)
{
    int* new_arr = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i];
    }
    new_arr[size] = value;
    size++;

    delete[] arr;

    arr = new_arr;
}

void pop_back(int*& arr, int& size)
{
    size--;
    int* new_arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i];
    }

    delete[] arr;

    arr = new_arr;
}

void main_dynamical_arr_copy()
{
    int size = 10;
    int* arr1 = new int[size];
    int* arr2 = new int[size];

    fill_arr(arr1, size);
    fill_arr(arr2, size);

    cout << "First Array = " << endl;
    show_arr(arr1, size);

    cout << "Second Array = " << endl;
    show_arr(arr2, size);

    cout << "========================= \n";

    copy_arr(arr1, arr2, 10);

    cout << "First Array = " << endl;
    show_arr(arr1, size);

    cout << "Second Array = " << endl;
    show_arr(arr2, size);

    delete[] arr1, arr2;
}

void fill_arr(int* const arr, int const size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;
    }
}

void show_arr(int* const arr, int const size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copy_arr(int* paste_arr, int* copy_arr, int const size)
{
    delete[] paste_arr;

    paste_arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        paste_arr[i] = copy_arr[i];
    }

}

template <typename T>
void swap_values_ref(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

inline constexpr uint32_t fnv1a(const char* str, uint32_t hash = 2166136261UL)
{
    return *str ? fnv1a(str + 1, (hash ^ *str) * 16777619ULL) : hash;
}

void dynamical_dbl_arr()
{
    int rows = 3;
    int cols = 4;
    int** arr = new int* [rows];

    // Выделяем память под колонки //
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 500;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Очищаем колонки двумерного массива //
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    // Очищаем строки двумерного массива //
    delete[] arr;
}



void swap_values(int* ptr_a, int* ptr_b)
{
    int swap = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = swap;
}

void main_for_func_swap_values()
{
    int a = 5;
    int b = 11;
    cout << "a - " << a << endl;
    cout << "b - " << b << endl;

    swap_values(&a, &b);
    cout << "Swapping values..... \n" << "Result: \n";
    cout << "a - " << a << endl;
    cout << "b - " << b << endl;
}


int fact_recurse(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    return n * fact_recurse(n - 1);
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);

}

void double_arr()
{
    srand(time(NULL));

    const int ROW = 6;
    const int COL = 2;

    int dbl_array[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            dbl_array[i][j] = rand() % 50;
        }
    }


    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << dbl_array[i][j] << " ";
        }
        cout << endl;
    }
}

void GenerateRandomNums()
{
    srand(time(NULL));

    const int N = 10;

    int arr[N];

    for (int i = 0; i < N;)
    {
        int count = 0;
        int random_value = rand() % 10;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == random_value)
            {
                count++;
            }
        }
        if (count == 0)
        {
            arr[i] = random_value;
            i++;
        }
    }


    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
}

void BubbleSort()
{
    int n = 0;

    cout << "Сортировка пузырьком! \n";
    do
    {
        cout << "Сколько элементов собираетесь отсортировать? ( не меньше 2, не больше 256): ";
        cin >> n;
    } while (n > 256 || n < 2);

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите элемент массива №" << i << ": ";
        cin >> arr[i];
    }

    int swap = -1;
    int temp = 0;
    while (swap != 0)
    {
        swap = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap++;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    cout << "Отсортированные элементы: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void draw_rectangle()
{
    int height = 0;
    int width = 0;
    cout << "Создайте прямогульник! \n";
    cout << "Введите высоту прямоугольника: ";
    cin >> height;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    for (int i = 0; i < height; i++)
    {
        cout << "*";
        for (int j = 1; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Access()
{
    int n = 20;
    int stop = 0;
    bool check = false;
    cout << "Введите число: ";
    cin >> stop;

    for (int i = 0; i < n; i++)
    {
        cout << "The checking is going - " << i << " times \n";
        if (i == stop)
        {
            cout << "Access granted \n";
            check = true;
            break;
        }
    }
    if (check == false) cout << "Access denied\n";
}

void find_sum_odd_num()
{
    int n = 0;
    float sum = 0;
    cout << "Введите кол-во чисел (не больше 256): ";
    do
    {
        cin >> n;
    } while (n > 256 || n < 1);

    int* numbers_arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите число: ";
        cin >> numbers_arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (numbers_arr[i] % 2 != 0)
        {
            sum += numbers_arr[i];
        }
        else {
            continue;
        }
    }
    cout << "Сумма всех нечетных чисел = " << sum;


}

void line()
{
    int num_of_symb = 0;
    cout << "Введите кол-во символов (не больше 256): ";
    do
    {
        cin >> num_of_symb;
    } while (num_of_symb > 256 || num_of_symb < 1);


    int value_of_symb = 0;
    cout << "Выберите один символ, который будет использоваться\n";
    cout << "1) # \n";
    cout << "2) $ \n";
    cout << "3) @ \n";
    cout << "Введите номер символа: ";
    do
    {
        cin >> value_of_symb;
    } while (value_of_symb < 1 || value_of_symb > 3);

    int type_of_line = 0;
    cout << "Выберите направление линии \n";
    cout << "1) Горизонтальная \n";
    cout << "2) Вертикальная \n";
    cout << "Введите номер типа линии: ";
    do
    {
        cin >> type_of_line;
    } while (type_of_line < 1 || type_of_line > 2);

    if (type_of_line == 1)
    {
        switch (value_of_symb)
        {
        case 1:
            while (num_of_symb > 0)
            {
                cout << "#";
                num_of_symb -= 1;
            }
        case 2:
            while (num_of_symb > 0)
            {
                cout << "$";
                num_of_symb -= 1;
            }
        case 3:
            while (num_of_symb > 0)
            {
                cout << "@";
                num_of_symb -= 1;
            }
        }
    }
    else if (type_of_line == 2)
    {
        switch (value_of_symb)
        {
        case 1:
            while (num_of_symb > 0)
            {
                cout << "# \n";
                num_of_symb -= 1;
            }
        case 2:
            while (num_of_symb > 0)
            {
                cout << "$ \n";
                num_of_symb -= 1;
            }
        case 3:
            while (num_of_symb > 0)
            {
                cout << "@ \n";
                num_of_symb -= 1;
            }
        }
    }


}

void discount()
{
    float first_price = 0;
    float discount = 0;
    cout << "\t \t" << "Узнайте скидку на товар! \n \n";

    cout << "Введите изначальную цену товара: ";
    cin >> first_price;

    cout << "Введите скидку на данный товар: "; \
        cin >> discount;

    float price_with_discount = (first_price * discount) / 100;
    float final_price = first_price - price_with_discount;

    cout << "Изначальная цена - " << first_price << endl;
    cout << "Скидка на товар - " << discount << endl;
    cout << "Цена товара со скидкоц = " << final_price << endl;
}

void Quiz()
{
    string answer;
    cout << "\t \t" << "Опрос! \n";
    cout << "\t \t" << "Какая лучшая страна в мире? \n";
    cout << "\t \t" << "Варианты ответа: \n";

    cout << "\t" << "a) Украина \n";
    cout << "\t" << "б) Россия \n";
    cout << "\t" << "в) США \n";
    cout << "\t" << "г) Германия \n";

    cout << "\t \t" << "Введите просто букву: ";
    cin >> answer;

    switch (fnv1a(answer.c_str()))
    {
    case fnv1a("а"):
        cout << "Ти зробив вiрний вибiр, козаче \n";
        break;
    case fnv1a("б"):
        cout << "Москалюка, пошел отсюда! \n";
        break;
    case fnv1a("в"):
        cout << "Пендос, блять, Обама - быдло ты ебанное блять \n";
        break;
    case fnv1a("г"):
        cout << "ФАШИСТ, ГИТЛЕР КАПУТ, АААААА \n";
        break;
    default:
        cout << "Такого варианта ответа нет, додик. \n";
        break;
    }
}

void isOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " - Чётное";
    }
    else
    {
        cout << num << " - Нечётное";
    }
}

int factorial(int num)
{
    int fact = 1;
    while (num > 0)
    {
        fact *= num;
        num -= 1;
    }
    return fact;
}


