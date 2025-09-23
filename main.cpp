#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <string>
#include <random>
#include <windows.h>

using namespace std;

#define MAX_SIZE 52
#define HAND_SIZE 3

int dealerCards[HAND_SIZE];
int playerCards[HAND_SIZE];
string dealerResults[HAND_SIZE];
string playerResults[HAND_SIZE];

string getCardString(int card)
{
    string suits[] = { u8"♠", u8"♥", u8"♦", u8"♣" };
    string values[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };

    int suitIndex = (card - 1) / 13;
    int valueIndex = (card - 1) % 13;

    return values[valueIndex] + suits[suitIndex];
}

int getCardValue(int card)
{
    int valueIndex = (card - 1) % 13;

    if (valueIndex >= 10) // J Q K
    {
        return 10;
    }
    if (valueIndex == 0) // A
    {
        return 11;
    }
    return valueIndex + 1; // 2 ~ 10
}

int scoreIs(int hand[])
{
    int score = 0;
    int aceCount = 0;

    for (int i = 0; i < HAND_SIZE; ++i)
    {
        int value = getCardValue(hand[i]);
        score += value;
        if (value == 11) aceCount++;
    }

    while (score > 21 && aceCount > 0)
    {
        score -= 10;
        aceCount--;
    }

    return score;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand((unsigned)time(NULL));

    int cardDeck[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; ++i)
    {
        cardDeck[i] = i + 1;
    }

    random_shuffle(&cardDeck[0], &cardDeck[51]);

    dealerCards[0] = cardDeck[0]; playerCards[0] = cardDeck[1];
    dealerCards[1] = cardDeck[2]; playerCards[1] = cardDeck[3];
    dealerCards[2] = cardDeck[4]; playerCards[2] = cardDeck[5];

    for (int i = 0; i < HAND_SIZE; ++i)
    {
        dealerResults[i] = getCardString(dealerCards[i]);
        playerResults[i] = getCardString(playerCards[i]);
    }

    cout << "Dealer\tPlayer" << endl;
    cout << "-------------------" << endl;
    for (int i = 0; i < HAND_SIZE; ++i)
    {
        cout << dealerResults[i] << "\t" << playerResults[i] << endl;
    }

    int dealerScore = scoreIs(dealerCards);
    int playerScore = scoreIs(playerCards);

    cout << "\nDealer Score: " << dealerScore << endl;
    cout << "Player Score: " << playerScore << endl;

    if (playerScore > 21 || dealerScore > playerScore)
    {
        cout << "\nDealer Won!" << endl;
    }
    else
    {
        cout << "\nPlayer Won!" << endl;
    }
    
    return 0;
}
