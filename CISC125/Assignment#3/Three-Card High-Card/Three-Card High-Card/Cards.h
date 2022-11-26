#pragma once

#include <string>

class Card {

private:
	Card();
	int suit_index;
	int	value_index;
	


public:
	Card(); //constructor
	
	char suit() const;
	char value() const;
	std::string str() const;

	bool eq(const Card& c) const { return value_index == c.value_index; }
	bool gt(const Card& c) const { return value_index > c.value_index; }
};

class Deck {

private:
	Card cards[52];
	int used_count;
public:
	Deck();
	Card deal();
	void shuffle();
	int size() const { return 52 - used_count; }
};

class ThreeCardHand {

private:
	int suit_index, value_index;
	Card cardArr[3];
	int Player1, Player2;
	
public:
	ThreeCardHand();
	void clear();
	void insert(const Card& c);
	std::string str() const;
	bool eq(const Card& c);
	bool gt(const Card& c);


};



