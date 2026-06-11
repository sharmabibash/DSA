// 1

/*#include <stdio.h>

// Tail recursive function
long long factorialTail(int n, long long result) {
    if (n == 0 || n == 1)
        return result;

    return factorialTail(n - 1, result * n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld\n", n, factorialTail(n, 1));
    }

    return 0;
}*/



// 2 


/*#include <stdio.h>

int fibTail(int n, int a, int b) {
    if (n == 0)
        return a;

    return fibTail(n - 1, b, a + b);
}

int main() {
    int n;

    printf("Enter term: ");
    scanf("%d", &n);

    printf("Fibonacci = %d\n", fibTail(n-1, 0, 1));

    return 0;
}*/





// 3


/*#include <stdio.h>

int sumTail(int n, int result) {
    if (n == 0)
        return result;

    return sumTail(n - 1, result + n);
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sumTail(n, 0));

    return 0;
}*/




// Tower

#include <stdio.h>

void hanoi(int n, char source, char aux, char dest) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, dest);
        return;
    }

    hanoi(n - 1, source, dest, aux);
    printf("Move disk %d from %c to %c\n", n, source, dest);
    hanoi(n - 1, aux, source, dest);
}

int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}


