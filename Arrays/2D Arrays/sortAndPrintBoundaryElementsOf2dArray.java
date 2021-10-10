// question: Write a program in Java to sort the boundary elements of a Two Dimensional Matrix and print the sorted and original matrices.
// Constraints: The program MUST take input from the user for the dimensions of the matrix.

import java.util.*;
import java.util.Arrays;

public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number of rows in matrix: ");
    int m = sc.nextInt();
    System.out.println("Enter number of columns in matrix: ");
    int n = sc.nextInt();
    int matrix[][] = new int[m][n];
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        System.out.println(
          "Enter (" + (i + 1) + "," + (j + 1) + ") element value :"
        );
        matrix[i][j] = sc.nextInt();
      }
    }
    solution(matrix, m, n);
  }

  public static void solution(int[][] matrix, int r, int c) {
    // printing original matrix
    System.out.println("\nOriginal Matrix:\n");
    for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
        System.out.print(matrix[i][j] + " ");
      }
      System.out.println("\n");
    }
    System.out.println("\n\n");

    // extracting boundary elements in a 1d array

    // calculation the perimeter length of the matrix
    // top row length + bottom row length + left column + right column - 4 elements which were included in the row
    int perimeterLength = 2 * (r + c - 2);
    // array to store perimeter elements
    int[] perimeterValues = new int[perimeterLength];

    for (int i = 0; i < c; ++i) {
      // adding all the first row elements in the perimeterValues
      perimeterValues[i] = matrix[0][i];
      // adding all the bottom row elements in the perimeterValues after the first row's elements
      perimeterValues[i + c] = matrix[r - 1][i];
    }

    // j = 2*c because this will be the index after putting 2 rows in perimeterValues
    // i = 1 to r-1 becuase we'll be traversing from 2nd row to second last row
    int i = 1, j = 2 * c;
    while (i < r - 1) {
      // adding the first column elements in the perimeterValues after last row's elements
      perimeterValues[j] = matrix[i][0];
      // adding the last column elements in the perimeterValues after first column's elements
      perimeterValues[j + r - 2] = matrix[i][c - 1];
      ++i;
      ++j;
    }
    // sorting the perimeterValues array (array in which all the boundary elements are stored)
    Arrays.sort(perimeterValues);

    System.out.println("\nSolution :\n");

    // printing the sorted boundary elements matrix
    // here we just have to print the original matrix by replacing the boundary elements with
    // perimeterValues one by one in clockwise manner
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // will become
    // 1 2 3
    // 9 5 4
    // 8 7 6

    // lastEl = current position in perimeterValues
    int lastEl = 0;
    // printing row by row
    for (int l = 0; l < r; ++l) {
      if (l == 0) {
        // if first row, then print first (numberOfColumns)c elements of the perimeterValues
        for (int k = lastEl; k < c; ++k) {
          System.out.print(perimeterValues[k] + " ");
        }
        // add c to lastEl showing that we have traversed c elements of the perimeterValues array
        lastEl += c;
        System.out.println("\n");
      } else if (l == r - 1) {
        // if last row, then print the elements from the perimeterValues from (lastIndex - numberOfRows + 2)th element to lastEl in this order
        int startingIndex = ((perimeterLength - r) + 1);
        for (i = startingIndex; i >= lastEl; --i) {
          System.out.print(perimeterValues[i] + " ");
        }
      } else {
        // if any middle row, then:
        // 1. print value at (lastIndex of perimeterValues - rowCount(l)) from perimeterValues
        System.out.print(perimeterValues[perimeterLength - l] + " ");
        // 2. print non boundary elements exactly from the matrix
        for (int k = 1; k < c - 1; ++k) {
          System.out.print(matrix[l][k] + " ");
        }
        // 3. print element at lastEl from perimeterValues
        System.out.print(perimeterValues[lastEl] + " ");
        // move lastEl one step ahead
        lastEl += 1;
        System.out.println("\n");
      }
    }
  }
}
