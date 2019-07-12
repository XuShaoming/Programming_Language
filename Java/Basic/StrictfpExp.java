// https://www.geeksforgeeks.org/strictfp-keyword-java/

//Java program to illustrate strictfp modifier

public class StrictfpExp
{
    // calculating sum using strictfp modifier
    public strictfp double sum()
    {
        double num1 = 10e+10;

        double num2 = 6e+08;

        return (num1+num2);

    }

    public static strictfp void main(String[] args)
    {
        StrictfpExp t = new StrictfpExp();

        System.out.println(t.sum());
    }
}


/**

xu-Macbook:Basic xushaoming$ java StrictfpExp
1.006E11
*/
