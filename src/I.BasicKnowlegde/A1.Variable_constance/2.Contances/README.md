### Note

const = readonly -> cannot change value after defen
syntax: const int num = 10

! But we can changes it by using pointer
int num1 = 10;
int num2 = 20;

const int* ptr = &num1;
*ptr = 100; //error because constand before pointer
ptr = &num2; //valid

---

int* const ptr = &num1;
*ptr = 100; valid
ptr = &num2; //error because const stand before pointer

---

we cannot assign from the normal pointer -> const variable
int num1 = 10;
const int num2 = 20;

int\* ptr = &num1; //valid
ptr = &num2; error
