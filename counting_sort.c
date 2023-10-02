#include<iostream>
using namespace std;
void sort(int arr[], int n, int k){
    int count[k+1]= {0}, b[n];
    for(int i = 0; i < n; i++)
        count[arr[i]]++;
    for (int i = 1; i <= k ; i++)
        count[i] = count[i]+count[i-1];
    for(int i = n-1; i >= 0 ; i--)
        b[--count[arr[i]]] = arr[i];
    for(int i = 0; i < n; i ++)
        arr[i] = b[i];
}
int main(){
    int n,k;
    cin >> n;
    cin >> k;
    int ip[n];
    for(int i = 0; i < n; i++)
        cin >> ip[i];
    sort(ip,n,k);
    for(int i = 0; i < n; i++)
        cout << ip[i] <<" ";
}