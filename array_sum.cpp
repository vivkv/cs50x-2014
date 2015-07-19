#include <iostream>
using namespace std;

int main()
{
    int arr[]={5,3,2,7,1,4,4,7};
    int num = 5;
    int sum =0;
    int compare_sum = 0;
    int high = 0,remain,quo ;
     int x= sizeof(arr)/sizeof(arr[0]) ;
     //sort(arr,arr + x);
     for(int i=0;i<x;i++)
     {
         sum += arr[i];
     }
     if(sum % num == 0){
        high = sum;
        cout<<"Highest : "<<high<<endl;
        return 0;
     }
     else{
        quo = sum/num;
        remain = sum - (num * quo);
      while(high <= 0){
        for(int i=0;i<x;i++)
        {
            compare_sum += arr[i];
            for(int j=i;j<x;j++)
            {
                if(i != j){
                    compare_sum += arr[j];
                    if(compare_sum == remain){
                        high = sum - remain;
                    }
                }
                else if(remain == arr[j]){
                       high = sum - remain;
                 }
            }
            compare_sum = 0;

         }
         if(quo > 0 && remain > 0){
            quo = quo -1;
            remain = sum - (num * quo);
         }
        }

     }
   cout<<high<<endl;
    return 0;
}
