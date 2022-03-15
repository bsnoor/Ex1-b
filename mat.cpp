#include "mat.hpp"
#include <array>
#include "doctest.h"
#include <string>
#include <vector>
#include <iostream>

bool has_only_spaces(const std::string &str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (*it != ' ') {
        return false;
        }
    }
    return true;
}

void mat(int n , int k , char s , char t)
{
	 //int i, j;
	 int count =0;
	//int mat[n][k];
	if((n%2!=0 && k%2!=0)&& (n>0&&k>0)&& (s > '!'|| s< '~') && (k > '!'|| k < '~')
	){
	
	// To access rows of the square
	for (int i = 1; i <= n; i++)
	{
		// To access columns of the square
		for (int j = 1; j <= k; j++)
		{
	
			// For printing the required square pattern
			if (//(i == 1 || i == n || j == 1 || j == k) ||
				(i >= 2 && i <= n - 1 && j >= 2 && j <= k - 1) &&
				(i == 2 || i == n - 1 || j == 2 || j == k - 1))
			{
				// Prints star(*)
				cout<< t <<"\n";
			}
			
	if (i == 1 || i == n || j == 1 || j == k){
				cout<< s ;
				}
	
		cout<<endl;
	}
	}
	
   
}
}
  

//int main()
//{
	
	//mat(7,9,'@' ,'-');
//	return 0;
//}
