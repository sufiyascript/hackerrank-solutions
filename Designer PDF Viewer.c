#include <stdio.h>
#include <string.h>

int designerPdfViewer(int h_count, int* h, char* word)
{
    int maxHeight = 0;
    int length = strlen(word);

    for (int i = 0; i < length; i++)
    {
        int index = word[i] - 'a';

        if (h[index] > maxHeight)
        {
            maxHeight = h[index];
        }
    }

    return maxHeight * length;
}

int main()
{
    int h[26];
    char word[100];

    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &h[i]);
    }

    scanf("%s", word);

    int result = designerPdfViewer(26, h, word);

    printf("%d\n", result);

    return 0;
}
