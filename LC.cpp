#include <iostream>
using namespace std;
#include <math.h>



//Problem 852
int peakindexv1(int arr[],int n){
    for(int i=1;i<n-1;i++){
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return i;
        }
    }
}

int peakindexv2(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start <end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else {
            end = mid;
        
        }
        mid = start + (end-start)/2;
    }
    return start;
}

//Problem 724
int pivotindex(int arr[],int n){
    int sum = 0;
    for (int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    // int start =0;
    // int end = n-1;
    int leftsum = 0;
    int rightsum = sum;
    for(int i=0;i<n;i++){
        rightsum = rightsum - arr[i];
        if (leftsum == rightsum){
            return i;
        }
        leftsum = leftsum + arr[i];
    }
    return -1;
}

int main(){

    int arr[3] = {2,1,-1};
    // cout<<peakindexv2(arr,4)<<endl;
    cout<<pivotindex(arr,3)<<endl;
    //Prob 7
    // int n;
    // cin>>n;
    // while(n!=0){
    //     int digit = n%10;
    //     cout<<digit;
    //     n = n/10;
        
    // }


    //Prob 7 alternate
    // int ans =0;
    // while(n!=0){
    //     int digit = n%10;
    //     ans = ans*10 + digit;
    //     n = n/10;
    // }
    // cout<<ans<<endl;


    //Problem 1009
    // int sum=0;
    // int i=0;
    // while(n!=0){
    //     int bit = n&1;
    //     if (bit==1){
    //         bit = 0;
    //         sum = sum + bit*pow(10,i);
    //     }
    //     else{
    //         bit = 1;
    //         sum = sum + bit*pow(10,i);
    //     }
    //     n = n>>1;
    //     i++;
    // }
    // i=0;
    // int sum1 = 0;
    // while(sum!=0){
    //     int digit = sum%10;
    //     sum1 = sum1 + digit*pow(2,i);
    //     sum = sum/10;
    //     i++;
    // }
    // cout<<sum1<<endl; 


    //Problem1009 alternate
    // int m =n;
    // int mask=0;
    // while(m!=0){
    //     mask = (mask<<1)|1;
    //     m = m>>1;
    // }
    // int ans = (~n) &mask;
    // cout<<ans<<endl;
    // return ans;


    //Problem 231
    // int count=0;
    // if (n<0){
    //     return false;
    // }
    // while(n!=0){
    //     if (n&1 ==1){
    //         count++;
    //     }
    //     n = n>>1;
    // }
    // if (count ==1){
    //     cout<<"True"<<endl;
    // }
    // else{
    //     cout<<"False"<<endl;
    // }


    //Problem 442
    // int result[100];
    // for (int i = 0; i < nums.size(); ++i) {
    //     int index = std::abs(nums[i]) - 1; 
    //     if (nums[index] < 0) {
    //         result.push_back(std::abs(nums[i])); 
    //     } else {
    //         nums[index] = -nums[index];
    //     }
    // }
    
    
    
}