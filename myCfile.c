#include <stdio.h> 

// main()
// {
// char str[100];
// printf("hello ssworld\n");
// scanf("%s", str);
// printf(str);

// }
// adding two input number
// int main()
// {   
//     int i,j,k;
    
//     printf("enter 2 values ");
//     scanf("%d",&i);
//     scanf("%d",&j);
    
//     k = i + j ;


//     printf("the addition of %d and %d is %d \n",i , j, k);
//     // return 0;




// }
// i=i+3 form numbers
// int main()
// {
//     int i=9, j=3, k;
//     i+=3;
//     printf("%d",i);
//     return i;
// }

// i=i+1 is same as i++ and i=i-1 is same as i--

// 
// main()

// { int i=6;
//   int *p;
//   p=&i;
//   printf ("%d \n",p);
//   printf ("%d \n",i);
//   printf ("%d \n",*p);



// }

// 

    

// 
// int main()
// { int i=1;
// int j=0;

// if (i==1)
// j=5;

// else j=6;
// printf ("%d",j);

 
// } 

// int main()
// { int result = 5==5;
//   printf ("%d",result);

// }

// {  int result = 5>=3;
//    printf ("%d \n", result);

// }
// { int i=6;
// if (i>10)

// { printf("your number is greater than 10");}
  
// else
//   {
//       printf ("your number is less than 10");
//   }
  


// }

//switch case statement
// { int i=2;

//   if (i==0)
//   { printf ("zero"); }

//   else if (i==1)
//   {printf ("one") ; }

//   else if (i==2)
//   {printf ("two"); }

// }

//alternative off i.e. the switch case statement

// { int i = 1 ;

//   switch (i)
//   { case 0:
//         printf ("zero \n");

//     case 1:
//         printf ("one \n");

//     default :
//         printf ("not a valid number");
//   }
// }

//    <while> loop functioning (check i, then print )

// {   int i = 1;
//     while (i<=5)
//     { printf ("see the magic of while loop \n");
//       i=i+1;
//     }
// }

// in while loop, (first print, then check )

// {    int i=6;
//     do 
//     {   printf ("hello india");

//     i=i+1;
//     }
//     while (i<=5);


    


// }


//      this is another <while> loop magic
// {
//     int i=1;
//     while (i<=5)
//     { printf ("this is while loop functioning \n"); 
//     i+=1;

//     }


// }


//    this is <for> loop fuctioning
// {   int i;

//     for (i=1; i<=5; i++)

// {   printf ("the possible values of i are %d \n", i);

// }


// }


// to swap 2 number (used a variable temp to swap)

//  {double first, second, temp;
//       printf("Enter first number: \n");
//       scanf("%lf", &first);
//       printf("Enter second number: \n");
//       scanf("%lf", &second);

//       // Value of first is assigned to temp
//       temp = first;

//       // Value of second is assigned to first
//       first = second;

//       // Value of temp (initial value of first) is assigned to second
//       second = temp;

//       printf("After swapping, firstNumber = %.2lf\n", first);
//       printf("After swapping, secondNumber = %.2lf", second);
//       return 0;
//  }

// to swap 2 number using pointer

// void swap(int *x,int *y)
// {
//     int t;
//      t   = *x;
//     *x   = *y;
//     *y   =  t;
// }


// int main()
// {
//     int num1,num2;

//     printf("Enter value of num1: ");
//     scanf("%d",&num1);
//     printf("Enter value of num2: ");
//     scanf("%d",&num2);

    
//     //calling the user defined function swap()
//     swap(&num1,&num2);

//     //displaying numbers after swapping
//     printf("After  Swapping \n num1 is: %d \n num2 is: %d\n",num1,num2);
// }

//to do array in ascending order


//    sorting elements of array in ascending order


// void main()
// {
//     int arr1[100];
//     int n, i, j, tmp;
	
	
       
       	

//     printf("Input the size of array : ");
//     scanf("%d", &n);

//        printf("Input %d elements in the array :\n",n);
//        for(i=0;i<n;i++)
//             {
// 	      printf("element - %d : ",i);
// 	      scanf("%d",&arr1[i]);
// 	    }

//     for(i=0; i<n; i++)
//     {
//         for(j=i+1; j<n; j++)
//         {
//             if(arr1[j] <arr1[i])
//             {
//                 tmp = arr1[i];
//                 arr1[i] = arr1[j];
//                 arr1[j] = tmp;
//             }
//         }
//     }
//     printf("\nElements of array in sorted ascending order:\n");
//     for(i=0; i<n; i++)
//     {
//         printf("%d  ", arr1[i]);
//     }
// 	        printf("\n\n");
// }

//     sorting elements of array using pointer


  
// Function to sort the numbers using pointers 


// void sort(int n, int* ptr) 
// { 
//     int i, j, t; 
  
//     // Sort the numbers using pointers 
//     for (i = 0; i < n; i++) { 
  
//         for (j = i + 1; j < n; j++) { 
  
//             if (*(ptr + j) < *(ptr + i)) { 
  
//                 t = *(ptr + i); 
//                 *(ptr + i) = *(ptr + j); 
//                 *(ptr + j) = t; 
//             } 
//         } 
//     } 
  
//     // print the numbers 
//     for (i = 0; i < n; i++) 
//         printf("%d ", *(ptr + i)); 
// } 
  
// // code 
// int main() 
// { 
//     int n = 5; 
//     int arr[] = { 0, 23, 14, 12, 9 }; 
  
//     sort(n, arr); 
// } 


#include<string.h>
 
struct Courses
{
   char  name[50];
   char  school[50];
   int   physicsmarks;
   int   mathsmarks;
    int totalmarks;
};
 
void main( )
{
   struct Courses C,*pc;
   
    // (C+0)->name;
    // strcpy( C, "Rohan");
    strcpy(C.school,  "dav");
    // strcpy (C->school,&ch);
   C.physicsmarks = 8;
   C.mathsmarks = 7;
   C.totalmarks = C.physicsmarks + C.mathsmarks;
   pc=&C;
   
   printf( "student name : %s\n", C.school);
    printf( "from the pointer : %d\n", pc->name+1);
//    printf( "school name : %s\n", C.school);
   printf( "physicsmarks : %d\n", C.physicsmarks);
    printf( "mathsmarks : %d\n", C.mathsmarks);
   printf("totalmarks : %d",C.totalmarks);

}