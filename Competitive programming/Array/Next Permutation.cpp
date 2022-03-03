#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class BruteForce
{

private:
    vector<string> v;
    void permutate(string s, int l, int r)
    {

        if (l == r)
        {
            v.push_back(s);
            return;
        }
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permutate(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }

public:
    void func(string s, string key)
    {
        int r = s.length() - 1;
        permutate(s, 0, r);
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] == key)
            {
                cout << v[i + 1] << endl;
                return;
            }
        }
        cout << v[0] << endl;
        return;
    }
};

class OptimalApproach
{

    private : 
    void reverse(int arr[],int n,int start,int end){
        while (start<=end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
    }
public:
    void func(int arr[], int n)
    {
        int index1 = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i+1])
            {
                index1 = i;
                break;
            }
        }

        int index2 = -1;
        if (index1 == -1)
        {
            cout << arr[0] << endl;
            return;
        }

        else
        {
            for (int i = n-1; i >=0 ; i--)
            {
                if(arr[i] > arr[index1]){
                    index2 = i;
                    break;
                }
            }
            
        }

      swap(arr[index1],arr[index2]);
      reverse(arr,n,index1+1,n-1);
      for (int i = 0; i < n; i++)
      {
          cout<<arr[i];
      }
      
         













    }
} OA;

int main()
{
    string s = "123";
    string key = "132";
    BruteForce bf;
    bf.func(s, key);
    int arr[3] = {1,2,3};
    OA.func(arr,3);
}