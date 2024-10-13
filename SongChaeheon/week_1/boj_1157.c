/*
���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. 
��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�. ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. 
�־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�. ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. 
��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET 26

int main() {
    char word[1000001];
    int frequency[ALPHABET] = { 0 };

    scanf("%s", word);
    
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]);  
        frequency[ch - 'a']++;
    }

    int max_freq = 0;
    char max_char = '?';
    int count = 0;

    for (int i = 0; i < ALPHABET; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
            max_char = 'A' + i;  
            count = 1;
        }
        else if (frequency[i] == max_freq) {
            count++;
        }
    }

    if (count > 1) {
        printf("?\n");
    }
    else {
        printf("%c\n", max_char);
    }

    return 0;
}
