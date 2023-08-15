int main() {
    // Loop for the tens digit (0 to 8)
    for (int tens = 0; tens < 9; tens++) {
        // Loop for the units digit (tens + 1 to 9)
        for (int units = tens + 1; units < 10; units++) {
            // Calculate the combined number as 10 * tens + units
            int combined_number = 10 * tens + units;

            // Print the tens digit
            putchar('0' + tens);
            // Print the units digit
            putchar('0' + units);
            
            // Print a comma and space if it's not the last combination
            if (combined_number != 89) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    // Print the last combination: 89
    putchar('8');
    putchar('9');
    
    return 0;
}

