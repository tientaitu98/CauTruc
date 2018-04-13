#include <iostream>
#define size 100
using namespace std;

int findMin(int arr[], int n)
{
	int i;
    int min = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] <= min)
        {
            min = arr[i];
        }
    }
    return min;
}

int findMax(int arr[], int n)
{
	int i;
    int max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] >= max)
        {
            max = arr[i];
        }
    }
    return max;
}
void tuan3Int22036GiaTriLonNhatVaNhoNhat()
{
    int arr[999], i, n;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findMax(arr, n) << " " << findMin(arr, n);
}

void tuan3Int22036MaTran10()
{
    int n , arr[size][size] ;
    cin >> n ;
    for(int i = 0 ; i <= n; i++ )
    {
        for(int j = 0 ; j < n ; j++ )
        {
            cin >> arr[i][j] ;
        }
    }
    int vitridau[10000];
    int maxValue[10000] ;
    int d = 0 ;
    int max = 0 , count = 0 ,vitri = 0;
    for(int i = 0 ; i <= n; i++ )
    {
        for(int  j = 0 ; j < n; j++ )
        {
            if(arr[i][j] == 1 ) count++ ;
        }
        if(count > max ){
            max = count;
            vitri = i ;
            vitridau[d] = vitri ;
            maxValue[d] = max ;
            d++;
        }
        count = 0 ;
    }
    for(int i = 0 ; i < d;  i++ ) {
        if(maxValue[i] == max ){
            cout << vitridau[i] << endl;
            break;
        }
    }
}
int main()
{
    tuan3Int22036MaTran10();
}
