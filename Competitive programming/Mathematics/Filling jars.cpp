// Filling  jars

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int solve(int n, vector<vector<int>> operations) {
int arr[n];
for(int i=0 ; i<n ; i++){
    arr[i]=0;
}
int size =operations.size();
while(size--){
    int a = operations[size][0];
    int b = operations[size][1];
    int k =  operations[size][2];
    for(int i=a-1 ; i<=b-1 ; i++){
        arr[i] = arr[i] + k;
    }
}
int sum=0;
for(int x : arr){
    sum =sum+x;
}
  return sum/n;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    vector<vector<int>> operations(m);

    for (int i = 0; i < m; i++) {
        operations[i].resize(3);

        string operations_row_temp_temp;
        getline(cin, operations_row_temp_temp);

        vector<string> operations_row_temp = split(rtrim(operations_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int operations_row_item = stoi(operations_row_temp[j]);

            operations[i][j] = operations_row_item;
        }
    }

    int result = solve(n, operations);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
