#include "Cards.h"
#include <algorithm> 


Card::Card() {
	suit_index = 4;
	value_index = 13;
}
Card::Card(int card_index) {
	suit_index = card_index % 4;
	value_index = card_index / 4;
}
char Card::suit() const {
	static const char suits[] = { 'H','S','D','C','X' };
	return suits[suit_index];
}
char Card::value() const {
	static const char values[] = { '2','3','4','5','6','7','8',
		'9','T','J','Q','K','A','X' };
	return values[value_index];
}
std::string Card::str() const {
	std::string s;
	s += value();
	s += suit();
	return s;
}

Deck::Deck() {
	//for (int i = 0; i < 52; i++)
	//  cards[i] = Card(i);
	for (int i = 0; i < 52; i++) {
		Card c(i);
		cards[i] = c;
	}
	//used_count = 0;
	shuffle();
}

Card Deck::deal() {
	return cards[used_count++];
}

void Deck::shuffle() {
	for (int i = 0; i < 52; i++)
		std::swap(cards[i], cards[rand() % 52]);
	used_count = 0;
}

ThreeCardHand::ThreeCardHand(){
	Card cardArr[3];
	suit_index = 0;
	value_index = 0;
}

void ThreeCardHand::clear(){

	suit_index = {};
 

}
void ThreeCardHand::insert(const Card & c){

	value_index = {};
}
std::string ThreeCardHand::str() const{

	return std::string();
}
bool ThreeCardHand::eq(const Card & c){

	return false;
}
bool ThreeCardHand::gt(const Card & c){

	return false;
};
