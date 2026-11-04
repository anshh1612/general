//SWAP
// Method 1: Using third variable
void swap1(int n1, int n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << n1 << " : " << n2 << endl;
}

// Method 2: Without third variable
void swap2(int n1, int n2) {
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout << n1 << " : " << n2 << endl;
}

// Method 3: Using ^ (OR)
void swap3(int n1, int n2) {
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;
    cout << n1 << " : " << n2 << endl;
}

// Method 4: Using pointers
void swap4(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    cout << *n1 << " : " << *n2 << endl;
}

    swap4(&n1, &n2);

    return 0;
}
