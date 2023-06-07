#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 1000

typedef struct {
    int size;
    int list[100][2];
} numlist_t;

int countNumbers(char *input);
void fillList(char *input, numlist_t *numlist);
void sort_dec(numlist_t *numlist);
int isRepeat(int val, int *array, int index);

int main(int argc, char *argv[])
{
    char input[LENGTH];
    char *p_input = input;
    int numCounter;
    numlist_t mylist;
    numlist_t *p_list = &mylist;

    fgets(input, sizeof input, stdin);

    printf("%s", input);

    numCounter = countNumbers(p_input);

    // printf("%d\n", numCounter);

    // Fill number list
    fillList(p_input, p_list);

    printf("%d values read into array\n", mylist.size);
    printf("Before:\t");

    for (int i = 0; i < mylist.size; i ++)
    {
        printf("%4d", mylist.list[i][0]);
    }

    printf("\n");

    // Sort be decreasing order
    sort_dec(p_list);

    printf("After:\t");

    for (int i = 0; i < mylist.size; i ++)
    {
        printf("%4d", mylist.list[i][0]);
    }

    // Get unique integers

    // printf("\n");


}

int countNumbers(char *input)
{
    int counter = 0;
    // printf("%llu\n", strlen(input));

    for (size_t i = 0; i < strlen(input); i ++)
    {
        if (!isalpha(input[i]) & !isdigit(input[i]))
        {
            counter++;
        }
    }

    return counter;
}

void fillList(char *input, numlist_t *numlist)
{
    int index = 0;
    char temp[64];
    int tempIndex = 0;
    int buffer = 0;
    int elem;

    for (size_t i = 0; i < strlen(input); i ++)
    {
        if (!isalpha(input[i]) & !isdigit(input[i]))
        {
            buffer = atoi(temp);

            elem = isRepeat(buffer, *numlist->list, index);

            if (elem != -1)
            {
                numlist->list[elem][1] ++;
            }
            else
            {
                numlist->list[index][0] = buffer;
                index++;
            }

            tempIndex = 0;
            memset(temp,0,strlen(temp));
        }
        else
        {
            temp[tempIndex] = input[i];
            tempIndex += sizeof(input[i]);
        }
    }
    numlist->size = index;
}

void sort_dec(numlist_t *numlist)
{
    int temp1 = 0;
    int temp2 = 0;

    for (int j = 0; j < numlist->size - 1; j ++)
    {
        for (int i = 1; i < numlist->size; i ++)
        {
            if (numlist->list[i][0] > numlist->list[i-1][0])
            {
                temp1 = numlist->list[i][0];
                temp2 = numlist->list[i][1];
                numlist->list[i][0] = numlist->list[i-1][0];
                numlist->list[i][1] = numlist->list[i-1][1];
                numlist->list[i-1][0] = temp1;
                numlist->list[i-1][1] = temp2;
            }
        }
    }
}

int isRepeat(int val, int *array, int index)
{
    for (int i = 0; i <= index; i++)
    {
        printf("%d", array[i]);
        if (val == array[i])
        {
            return i;
        }
    }
    return -1;
}

void leaveUnique(numlist_t *numlist)
{

}