# ArraysSortBy
TARgv17 HomeWork: Arrays

Merge of two sorted arrays. You have array A for N elements and array B for M elements. also you have array C for N+M elements, write a function, that join two sorterd arrays in new big sorted arrays C.int imin = 0;

Homework - Array Join
You shall write a function to join 2 sorted arrays.

    For example, array A=[3], array B=[6]. The joined array will be C=[3, 6]
    For example, array A=[12], array B=[11]. The joined array will be C=[11, 12]
    For example, array A=[5, 8], array B=[11, 12]. The joined array will be C=[5, 8, 11, 12]
    For example, array A=[3, 5, 8, 12, 16], array B=[12]. The joined array will be C=[3, 5, 6, 8, 11, 12, 12]
    For example, array A=[3, 5, 8, 12, 16], array B=[6, 11, 12]. The joined array will be C=[3, 5, 6, 8, 11, 12, 12, 16]

function header:

int joinSortedArray(int arrA[], int arrA_size, int arrB[], int arrB_size, int arrC[]);

first array 'A':

    int arrA[] // 'A' array name
    int arrA_size // 'A' array elements count

second array 'B'

    int arrB[] // 'B' array name
    int arrB_size // 'B' array elements count

output array 'C' have enough elememnts to store A and B arrays. so, it size more than arrA_size pluss arrB_size arrC_size>=arrA_size + arrB_size

    int arrC[] // 'C' array name

examples:

    int D10X5[5] = {1,2,3,4,5};
    int D20X10[10] = {2,3,5,5,8,12,13,17,18,20};
    int D10AndD20[20];

    std::cout << "\n D10 rolls:";
    for (int i=0; i<5; i++) std::cout << " " << D10X5[i];

    std::cout << "\n\n D20 rolls:";
    for (int i=0; i<10; i++) std::cout << " " << D20X10[i];

    joinSortedArray(D10X5,5, D20X10,10, D10AndD20);

    std::cout << "\n\n D10 + D20 rolls:";
    for (int i=0; i<15; i++) std::cout << " " << D10AndD20[i];

Output:
D10 rolls: 1 2 3 4 5
D20 rolls: 2 3 5 5 8 12 13 17 18 20
D10 + D20 rolls: 1 2 2 3 3 4 5 5 5 8 12 13 17 18 20
