#pragma once


typedef unsigned int uint;
typedef enum suit
{
	Clubs = 1,
	Diamonds,
	Hearts,
	Spades
}Suits;

typedef enum value
{
	Ace = 1,
	Deuce,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King
}CardValue;

typedef struct card
{
	Suits suit;
	uint face;
	CardValue value;
}Card;

Card deck[52];

