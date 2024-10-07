
// // #include <stdio.h>
// // void maion()
// // {

// //     int n, i;
// //     // Ask the user for the size of the array
// //     printf("Enter the number of elements in the array: ");
// //     scanf("%d", &n);

// //     int arr[n];

// //     // Take input for the array elements
// //     printf("Enter the elements of the array: \n");
// //     for (i = 0; i < n; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }

// //     // Reverse the array in place
// //     for (i = 0; i < n / 2; i++)
// //     {
// //         int temp = arr[i];
// //         arr[i] = arr[n - 1 - i];
// //         arr[n - 1 - i] = temp;
// //     }

// //     // Output the reversed array
// //     printf("Reversed array:\n");
// //     for (i = 0; i < n; i++)
// //     {
// //         printf("%d ", arr[i]);
// //     }

// //     return 0;
// // }

// // #include <stdio.h>

// // int main()
// // {
// //     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// //     int size = sizeof(arr) / sizeof(arr[0]);
// //     int evenCount = 0, oddCount = 0;

// //      for (int i = 0; i < size; i++)
// //     {
// //         if (arr[i] % 2 == 0)
// //         {
// //             evenCount++;
// //         }
// //         else
// //         {
// //             oddCount++;
// //         }
// //     }

// //     printf("Even numbers: %d\n", evenCount);
// //     printf("Odd numbers: %d\n", oddCount);

// //     return 0;
// // }

// #include <stdio.h>

// int main()
// {
//     char str[100];
//     int i, vowels = 0, consonants = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     for (i = 0; str[i] != '\0'; i++)
//     {
//         char ch = str[i];
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//         {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//             {
//                 vowels++;
//             }
//             else
//             {
//                 consonants++;
//             }
//         }
//     }

//     printf("Vowels: %d\n", vowels);
//     printf("Consonants: %d\n", consonants);

//     return 0;
// // }