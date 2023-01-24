string changeData (int x) {
    if (x == 1) {
        return "A";
    } else if (x == 11) {
        return "J";
    } else if (x == 12) {
        return "Q";
    } else if (x == 13) {
        return "K";
    } else if (x == 10) {
        return "10";
    } else {
        string s = to_string(x);
        return s;
    }
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permutasiInt(int arr[4], int first, int last) {
    if (first == last) {
        for (int i = 0; i <= last; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = first; i <= last; i++) {
            swap(arr[first], arr[i]);
            permutasiInt(arr, first+1, last);
            swap(arr[first], arr[i]);
        }
    }
}

int changeType (string x) {
    char c[x.length()];
    int i=0;

    // ALGORITMA
    // Instansiasi for loop
    while (i < x.length()) {
        c[i] = x[i];
        i++;
    }

    if (c[0] == 'A') {
        return 1;
    } else if (c[0] == 'K') {
        return 11;
    } else if (c[0] == 'Q') {
        return 12;
    } else if (c[0] == 'J') {
        return 13;
    } else if (c[0] == '1' && c[1] == '0') {
        return 10;
    } else {
        return (int)c[0]-48 ;
    }
}

// Operator:
// 0 -> +
// 1 -> -
// 2 -> *
// 3 -> /

float operat0r (int opr, float x, float y) {
    if (opr == 0) {
        return x+y;
    } else if (opr == 1) {
        return x-y;
    } else if (opr == 2) {
        return x*y;
    } else if (opr == 3) {
        return (float)x/(float)y;
    }
}

char changeOperator (int opr) {
    if (opr == 0) {
        return '+';
    } else if (opr == 1) {
        return '-';
    } else if (opr == 2) {
        return '*';
    } else if (opr == 3) {
        return '/';
    }
}

float operate1 (int a, int b, int c, int d, int op1, int op2, int op3) {
    // (a ops b) ops (c ops d)
    float res = operat0r(op2, operat0r(op1, a, b), operat0r(op3, c, d));
    return res;
}

float operate2 (int a, int b, int c, int d, int op1, int op2, int op3) {
    float res = operat0r(op1, a, operat0r(op3, operat0r(op2, b, c), d));
    return res;
}

float operate3 (int a, int b, int c, int d, int op1, int op2, int op3) {
    float res = operat0r(op1, a, operat0r(op2, b, operat0r(op3, c, d)));
    return res;
}

float operate4 (int a, int b, int c, int d, int op1, int op2, int op3) {
    float res = operat0r(op3, operat0r(op2, operat0r(op1, a, b), c), d);
    return res;
}

float operate5 (int a, int b, int c, int d, int op1, int op2, int op3) {
    float res = operat0r(op3, operat0r(op1, a, operat0r(op2, b, c)), d);
    return res;
}




