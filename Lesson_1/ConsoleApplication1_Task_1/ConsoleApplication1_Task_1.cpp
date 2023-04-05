#include <iostream>
#include <fstream>
#include <ctime>

void Init_File() //Создаем файл автоматически при запуске
{
    setlocale(LC_ALL, "Russian");
    int i;
    std::cout << "Файл создан автоматически.";
    std::ofstream f("in.txt");
    srand(time(0));
    const int N = 3 + rand() % 8;
    f << N << std::endl;
    const int M = 3 + rand() % 8;
    int* a = new int[N];
    int* b = new int[M];
    for (i = 0; i < N; i++)
    {
        a[i] = 0 + rand() % 10;
        f << a[i] << " ";
    }
    f << std::endl << M << std::endl;
    for (i = 0; i < M; i++)
    {
        b[i] = 0 + rand() % 10;
        f << b[i] << " ";
    }
    f.close();
    delete[] a;
    delete[] b;
}

int main()
{
    Init_File();
    int i, N, M, w; // Создаем массивы из файла in.txt (читаем данные из файла in.txt)
    std::ifstream f1("in.txt");
    f1 >> N;
    int* a = new int[N];
    for (i = 0; i < N; i++)
    {
        f1 >> a[i];
    }
    f1 >> M;
    int* b = new int[M];
    for (i = 0; i < M; i++)
    {
        f1 >> b[i];
    }
    f1.close();
    //////////////


    //меняем порядок массива и записываем его в файл out.txt
    std::ofstream f2("out.txt");
    for (i = M - 1; i > 0; i--)
    {
        w = b[i];
        b[i] = b[i - 1];
        b[i - 1] = w;
    }
    for (i = 0; i < N - 1; i++)
    {
        w = a[i];
        a[i] = a[i + 1];
        a[i + 1] = w;
    }
    f2 << M << std::endl;
    for (i = 0; i < M; i++)
    {
        f2 << b[i] << " ";
    }
    f2 << std::endl << N << std::endl;
    for (i = 0; i < N; i++)
    {
        f2 << a[i] << " ";
    }
    f2.close();
    delete[] a;
    delete[] b;
    return 0;
}