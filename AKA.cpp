#include "AKA.h"

int iterativeMax(EPRT_Score scores[], int size) {
    int maxScore = scores[0].score;
    for (int i = 1; i < size; ++i) {
        if (scores[i].score > maxScore) {
            maxScore = scores[i].score;
        }
    }
    return maxScore;
}

// Sequential search recursive function
int recursiveMax(EPRT_Score scores[], int index) {
    if (index == 0) {
        return scores[0].score;
    }
    int maxFromRest = recursiveMax(scores, index - 1);
    if (scores[index].score > maxFromRest) {
        return scores[index].score;
    } else {
        return maxFromRest;
    }
}
