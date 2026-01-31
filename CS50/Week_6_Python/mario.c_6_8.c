#include <cs50.h>
#include <stdio.h>

// التصريح (prototype)
int get_positive(void);

int main(void)
{
    int height = get_positive();

    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}

// التعريف (definition)
int get_positive(void){
    int n;
    // استخدام حلقة do-while لضمان إدخال عدد موجب
    do{
        int n = get_int("number?: ");
    }whlie(n < 1);
    return n;

}
