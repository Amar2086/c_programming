#include <stdio.h>
#include <stdarg.h>
#include <string.h>

// 1. Function that concatenates strings
char* concat_strings(int count, ...) {
    va_list args;
    va_start(args, count);
    
    // First pass: calculate total length needed
    va_list args_copy;
    va_copy(args_copy, args);
    int total_length = 1;  // for null terminator
    for (int i = 0; i < count; i++) {
        const char* str = va_arg(args_copy, const char*);
        total_length += strlen(str);
    }
    va_end(args_copy);
    
    // Allocate memory for the concatenated string
    static char result[1000];  // Note: static for simplicity; in real code, use dynamic allocation
    result[0] = '\0';
    
    // Second pass: concatenate strings
    for (int i = 0; i < count; i++) {
        const char* str = va_arg(args, const char*);
        strcat(result, str);
    }
    
    va_end(args);
    return result;
}

// 2. Function that finds the maximum value of different types
#define MAX(T) T max_##T(int count, ...) { \
    va_list args; \
    va_start(args, count); \
    T max = va_arg(args, T); \
    for (int i = 1; i < count; i++) { \
        T value = va_arg(args, T); \
        if (value > max) max = value; \
    } \
    va_end(args); \
    return max; \
}

MAX(int)
MAX(double)
MAX(long)

// 3. Function that performs different operations based on a format string
void format_print(const char* format, ...) {
    va_list args;
    va_start(args, format);
    
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'd': {
                    int value = va_arg(args, int);
                    printf("%d", value);
                    break;
                }
                case 'f': {
                    double value = va_arg(args, double);
                    printf("%.2f", value);
                    break;
                }
                case 's': {
                    char* value = va_arg(args, char*);
                    printf("%s", value);
                    break;
                }
            }
        } else {
            putchar(*format);
        }
        format++;
    }
    
    va_end(args);
    printf("\n");
}

int main() {
    // Testing string concatenation
    printf("1. String Concatenation:\n");
    char* result = concat_strings(3, "Hello, ", "Variadic ", "Functions!");
    printf("%s\n\n", result);
    
    // Testing type-specific maximum functions
    printf("2. Type-specific Maximums:\n");
    printf("Max int: %d\n", max_int(4, 10, 5, 15, 8));
    printf("Max double: %.2f\n", max_double(3, 3.14, 2.718, 1.414));
    printf("Max long: %ld\n\n", max_long(3, 1000000L, 2000000L, 1500000L));
    
    // Testing format printing
    printf("3. Custom Format Printing:\n");
    format_print("Int: %d, Float: %f, String: %s", 42, 3.14, "test");
    
    return 0;
}
//Last edited 44 minutes ag