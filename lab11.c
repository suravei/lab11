#include<stdio.h>
#include<math.h>
#define SIZE 20

int array_input(int array[]);
void insert_test(int array[],int size);

int main(void)
{ 
  int array[SIZE];
  int size;
  size = array_input(array); 
  insert_test(array, size);
}

int array_input(int array[])
{
  int temp, i;
  int index;
  printf("Enter data set -> ");
  for(index = 0; index < SIZE; index++)
    {
      scanf("%d",&temp);
      if(temp != -1)
      array[index] = temp;
      else
      break;
    }
 
  printf("\n\nSize of data set: %d",index);
  return(index);
}

void insert_test(int array[], int size)
{
  double tot, dig, newt;
  int i, ii, iii, loop, q;
  double a;

  tot = 0; 
 
  for(loop = (size - 1); loop >= 0; loop--)
  {
    tot = tot + array[loop];
  }//sum
 
  dig = 0;
 
  for(i = 0; i < size; i++)
  {
    ii = 0;
    ii = array[i+1] - array[i];//diff

    if(ii > 1)
    {
      dig =  array[i] + 1;
    }
    else
    {
      dig = 0;
    }
    
    while(dig < array[i+1] && dig != 0)
    {
      newt = dig + tot;
  
      a =  newt / (size + 1);
  
      if((a - floor(a)) == 0)
      {
        printf("\nDigit to add to set: %.0lf", dig);
        printf("\nArray %d", array[i]);
        printf("\nNumber found between index: %d, %d", i, i+1);
        printf("\nAverage with new digit: %.0lf / %d = %.1lf", newt, size + 1, a);
        break;
      }
      else 
      {
        for(q = 0; q < ii; q++)
        {
        dig++;
        }
      }
    }
    if((a - floor(a)) == 0)
    {
      break;
    }

 }
    if(((a - floor(a)) != 0))
    {
       printf("\nDigit to add to set: no such value");
       
    }
}