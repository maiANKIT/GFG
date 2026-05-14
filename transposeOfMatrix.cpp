#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "mat is: " << endl;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = i + 1; j < mat[0].size(); j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    for(int i = 0; i<mat.size()/2; i++){

        for(int j = 0; j<mat[0].size(); j++){
            swap(mat[i][j], mat[mat.size() - i - 1][j]);
        }

    }

    cout << "final mat is: " << endl;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}