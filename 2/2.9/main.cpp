void foo() {}

int main() { 
    {
        int i = 0;
    } // it only exists in this scope, gets deleted after
    int i = 1;
    return 0; }
