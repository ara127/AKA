#ifndef AKA_H_INCLUDED
#define AKA_H_INCLUDED

struct EPRT_Score {
    char name[50];
    char nim[20];
    int score;
};

int iterativeMax(EPRT_Score scores[], int size);
int recursiveMax(EPRT_Score scores[], int index);

#endif // AKA_H_INCLUDED
