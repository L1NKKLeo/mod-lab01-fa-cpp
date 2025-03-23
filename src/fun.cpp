// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char* str) {
    unsigned int count = 0;
    bool inWord = false;
    bool hasDigits = false;

    while (*str) {
        if (*str != ' ') {
            if (!inWord) {
                inWord = true;
                hasDigits = false;
            }
            if (*str >= '0' && *str <= '9') {
                hasDigits = true;
            }
        }
        else if (inWord) {
            if (!hasDigits) {
                count++;
            }
            inWord = false;
        }
        str++;
    }
    if (inWord) {
        if (!hasDigits) {
            count++;
        }
    }
    return count;
}

unsigned int faStr2(const char* str) {
    unsigned int count = 0;
    bool inWord = false;
    bool validWord = true;
    bool firstChar = true;

    while (*str) {
        if (*str != ' ') {
            if (!inWord) {
                inWord = true;
                validWord = (*str >= 'A' && *str <= 'Z');
                firstChar = true;
            }
            else if (firstChar) {
                firstChar = false;
            }
            else if (!(*str >= 'a' && *str <= 'z')) {
                validWord = false;
            }
        }
        else if (inWord) {
            if (validWord) {
                count++;
            }
            inWord = false;
        }
        str++;
    }
    if (inWord) {
        if (validWord) {
            count++;
        }
    }
    return count;
}

unsigned int faStr3(const char* str) {
    unsigned int wordCount = 0;
    unsigned int totalLength = 0;
    unsigned int currentLength = 0;
    bool inWord = false;

    while (*str) {
        if (*str != ' ') {
            if (!inWord) {
                inWord = true;
                currentLength = 0;
            }
            currentLength++;
        }
        else if (inWord) {
            wordCount++;
            totalLength += currentLength;
            inWord = false;
        }
        str++;
    }
    if (inWord) {
        wordCount++;
        totalLength += currentLength;
    }

    if (wordCount == 0) {
        return 0;
    }
    return (totalLength + wordCount / 2) / wordCount;
}
