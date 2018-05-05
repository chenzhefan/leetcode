#include "merge_sa.h"

/*
*You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).
Follow up:
Could you do this in-place?
*/
/*
* first reverse up to down, then swap the symmetry
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/

void rotate_matrix(vector<vector<int> > &matrix)
{
    //first reverse up to down
    reverse(matrix.begin(), matrix.end());
    for(int i=0;i<matrix.size();i++)
    {
        //swap the symmetry
        for(int j=i+1;j<matrix[i].size();j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
