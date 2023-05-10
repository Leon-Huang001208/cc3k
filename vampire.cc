#include "vampire.h"

Vampire::Vampire(int HP, int Atk, int Def, std::string Name, int Gold, bool move, bool compass) :
	Enemy{ HP, Atk, Def, Name, Gold, move, compass} {}

int Vampire::Combat(PC* pc) {


	int i = ceil(((double)100 / (double)(100 + getDef())) * pc->getAtk());
	setHP(getHP() - i);
	
	return i;

}

Vampire::~Vampire() {};
