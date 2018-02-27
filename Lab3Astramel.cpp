// Sasha Stramel
//LAB3 - Numeric Errors


#include <iostream>

using namespace std;

int main()
{
    //sum - using type short
    int n;
    
    cout << "Input an integer : " << endl;
    
    cin >> n;
    
    short sumshort(0);
    
    for (short i = 1; i <= n; i++)
    {
        sumshort += i;
    }
    
    cout << "The sum is : " << sumshort << endl << endl;
    //regular sum - using type long
    cout << "Input an integer : " << endl;
    
    cin >> n;
    
    long sum(0);
    
    for (long i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    cout << "The sum is : " << sum << endl << endl;
    
    // Factorial - using type long and float
    
    cout << "Input an integer : " << endl;

    cin >> n;
    
    float result(1);
    
    for (long j = 1; j <= n; ++j)
    {
        result *= j;
    }
    
    cout << "The result is : " << result << endl << endl;
    
    //factorial- using type double to store the result
    
    cout << "Input an integer : " << endl;
    
    cin >> n;
    
    double result2(1);
    
    for (long j = 1; j <= n; ++j)
    {
        result2 *= j;
    }
    
    cout << "The result is : " << result2 << endl << endl;
    
    //computing "strange" floating point number behavior - adding up n copies of the ratio 1 / n.
    
    cout << "Input an integer : " << endl;
    
    cin >> n;
    
    double outcome(1);
    
    float ratio = (1 / n);
    
    for (long j = 1; j < n; ++j)
    {
        outcome = (ratio * n);
    }
    
    (outcome - 1);
    
    cout << "The outcome is : " << outcome << endl << endl;
    
    //computing the puzzle - with i as type float
    
    for (float i = 3.4; i < 4.4; i += 0.2)
    {
        cout << "i = " << i << endl;
    }
    
    cout << endl;
    //computing the puzzle - changing i to type double
    
    for (double i = 3.4; i < 4.4; i += 0.2)
    {
        cout << "i = " << i << endl;
    }
    
    return 0;
}
