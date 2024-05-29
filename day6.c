int main()
{


// declaration of the variables
    int a, b;
    float res;
    a = 21;
    b = 5;
    printf(" Implicit Type Casting: \n") ;
    printf("Result: %d", a / b); // it loses some information

    printf(" \n Explicit Type Casting: \n");
    // use cast () operator to convert int data to float
    res = (float)21 / 5;
    printf(" The value of float variable (res): %f" , res);
}
