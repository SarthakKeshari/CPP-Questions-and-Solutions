import java.util.Arrays;
import java.util.*;  
public class Main
{
  public static void main (String[]args)
  {
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter number of rows in matrix: ");
    int m = sc.nextInt();
    System.out.println("Enter number of columns in matrix: ");
    int n = sc.nextInt();
    int matrix[][] = new int[m][n];
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            System.out.println("Enter (" + (i+1) +","+(j+1)+") element value :");
            matrix[i][j] = sc.nextInt(); 
        }
    }
    solution (matrix, m, n);
  }

  public static void solution (int[][]matrix, int r, int c)
  {
    // printing original matrix
    System.out.println("\nOriginal Matrix:\n");
    for (int i = 0; i < r; ++i)
      {
	for (int j = 0; j < c; ++j)
	  {
	    System.out.print (matrix[i][j] + " ");
	  }
	System.out.println ("\n");
      }
    System.out.println ("\n\n");

    // extracting boundary elements in a 1d array
    int perimeterLength = 2 * (r + c - 2);
    int[] perimeterValues = new int[perimeterLength];
    for (int i = 0; i < c; ++i)
      {
	perimeterValues[i] = matrix[0][i];
	perimeterValues[i + c] = matrix[r - 1][i];
      }
    int i = 1, j = 2 * c;
    while (i < r - 1)
      {
	perimeterValues[j] = matrix[i][0];
	perimeterValues[j + r - 2] = matrix[i][c - 1];
	++i;
	++j;
      }
    // sorting the extracted 1d array
    Arrays.sort (perimeterValues);

    System.out.println ("\nSolution :\n");
    // printing the sorted boundary elements matrix
    int lastEl = 0;
    for (int l = 0; l < r; ++l)
      {
	if (l == 0)
	  {
	    for (int k = lastEl; k < c; ++k)
	      {
		System.out.print (perimeterValues[k] + " ");
	      }
	    lastEl += c;
	    System.out.println ("\n");
	  }
	else if (l == r - 1)
	  {
	    int startingIndex = ((perimeterLength - r) + 1);
	    for (i = startingIndex; i >= lastEl; --i)
	      {
		System.out.print (perimeterValues[i] + " ");
	      }
	  }
	else
	  {
	    System.out.print (perimeterValues[perimeterLength - l] + " ");
	    for (int k = 1; k < c - 1; ++k)
	      {
		System.out.print (matrix[l][k] + " ");
	      }
	    System.out.print (perimeterValues[lastEl] + " ");
	    lastEl += 1;
	    System.out.println ("\n");
	  }
      }
  }
}
