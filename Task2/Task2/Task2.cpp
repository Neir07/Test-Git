﻿// Це попередні оголошення функцій, які знаходяться в файлі io.cpp
int readNumber();
void writeAnswer(int x);

int main()
{
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y);
    return 0;
}
