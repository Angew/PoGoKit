/*
Copyright 2018 Petr Kmoch
Licensed under the Boost Software License Version 1.0
See accompanying file LICENSE or http://www.boost.org/LICENSE_1_0.txt
*/

#include "PoGoKit/RawData/Attacks.hh"

#include "PoGoKit/Common/Types.hh"

#include <string>


namespace PoGoKit::RawData {

class Attack
{
public:
	int power;
	Type type;
	std::string name;
	double duration;
};


class FastAttack : public Attack
{
public:
	double energyGain;
};


class ChargedAttack : public Attack
{
public:
	int bars;
};

} //namespace PoGoKit::RawData
