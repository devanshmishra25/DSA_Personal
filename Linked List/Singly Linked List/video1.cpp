//replace x with 5 y's , video 1 that show why array for this method is costly and inefficient


#include <iostream>
#include <cstring>

using namespace std;

void replaceItems(char sequence[], char x, char y) {
    int size = strlen(sequence);

    for (int i = 0; i < size; i++) {
        if (sequence[i] == x) {
            for (int j = size - 1; j > i; j--) {
                sequence[j + 4] = sequence[j];
            }

            for (int j = 0; j < 5; j++) {
                sequence[i + j] = y;
            }

            size += 4;  // Update the size to reflect the inserted elements
            i += 4;  // Skip the newly added elements to avoid duplicate replacements
        }
    }

    // Print the new sequence
    for (int i = 0; i < size; i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;
}

int main() {
    const int maxLength = 100;
    char sequence[maxLength];
    char x = 'x';
    char y = 'y';

    cout << "Enter the sequence: ";
    cin.getline(sequence, maxLength);

    replaceItems(sequence, x, y);

    return 0;
}
