#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

void sorting(int profit[], int weight[], float ratio[], int start, int end)
{
    printf("\nloop me hu");
    for (int i = 1; i < end; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (ratio[j]>ratio[j-1])
            {
                swap2(&ratio[j],&ratio[j-1]);
                swap(&profit[j],&profit[j-1]);
                swap(&weight[j],&weight[j-1]);
            }
            else
            {
                break;
            }
        } 
    }
    printf("\nloop se bahar aa gya hu\n");
}

void knapsack(int num, int weight[],int profit[], int max_weight)
{
    float x[20], tp =0;

    for (int i = 0; i < num; i++)
    {
        x[i] = 0;
    }
    int i;
    for (i = 0; i < num; i++)
    {
        if (weight[i]> max_weight)
        {
            break;
        }
        else
        {
            x[i] = 1.0;
            tp += profit[i];
            max_weight -= weight[i];
        }
    }
    if(i < num)
    {
        x[i] = max_weight/ weight[i];
        tp += x[i]*profit[i];
    }
    
    printf("\nThe contribution is:");
    for (int i = 0; i < num; i++)
    {
        printf("%f\t",x[i]);
    }
    printf("\nMaximum profit is : %f",tp);
}



int main(int argc, char const *argv[])
{
    
    int p[] = { 20,53,55,10};
    int w[] = {5,13,15,5};
    int object_num = sizeof(p)/sizeof(p[0]);
    int max_weight = 40;
    int profit = 0;
    float weight = 0;
    int kw[object_num];
    float profit_by_weight[object_num];
    for (int i = 0; i < 5; i++)
    {
         profit_by_weight[i] = (float)p[i]/w[i];
    }
    // sorting profit and weight in increasing order of profit by weight ratio 
    printf("sort karne jaa raha hu");
    sorting(p,w, profit_by_weight, 0,object_num);
    printf("sort kar liya\n");
    // initializing the sol array 
    

    //applying knapsack algorithm 
    knapsack(object_num,w,p,max_weight);
    printf("\nhahahaha\n");
    return 0;
}
