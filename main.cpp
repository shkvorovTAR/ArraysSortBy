#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

//Funckija sortirovki v obwij massiv
int joinSortedArray(int arrA[], int arrB[], int arrC[],
                                int arrA_size, int arrB_size)
{
    //Vvodim peremennqe dlja ispolzovanija v cikle
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < arrA_size) {
        arrC[k] = arrA[i];
        i += 1;
        k += 1;
    }
    while (j < arrB_size) {
        arrC[k] = arrB[j];
        j += 1;
        k += 1;
    }

    //sort - operator sortirovki massiva //sort[first, last)
    sort(arrC, arrC + arrA_size + arrB_size);
    return(0);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Zaplnjaem Pervqe dva massiva
    int arrA[] = { 3,8,10,15 };
    int arrB[] = { 4,9,20 };
    //S4iaajem razmer elementov massiva
    int arrA_size = sizeof(arrA) / sizeof(arrA[0]);
    int arrB_size = sizeof(arrB) / sizeof(arrB[0]);
    //S4itaem razmer buduwego-otsortirovnnogo massiva
    int arrC[arrA_size + arrB_size];

    //Srazu vqvodim pervqi i vtoroi massivq
    qDebug() << "-------------------------------";
    qDebug() << "First Array :  ";
    for (int i=0; i < arrA_size; i++)
        cout << " " << "[" << arrA[i] << "]";
    qDebug() << " ";
    qDebug() << "Second Array : ";
    for (int i=0; i < arrB_size; i++)
        cout << " " << "[" << arrB[i] << "]";
    qDebug() << " ";

    //Vqzqvaem funkciju //Vqvodim otsortirovannqi massiv
    joinSortedArray(arrA, arrB, arrC, arrA_size, arrB_size);
    qDebug() << "-------------------------------";
    qDebug() << "Sorted Array : ";
    for (int i=0; i < arrA_size + arrB_size; i++)
        cout << " " << "[" << arrC[i] << "]";
    qDebug() << " ";
    qDebug() << "-------------------------------";

    return a.exec();
}
