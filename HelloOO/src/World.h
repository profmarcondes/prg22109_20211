/*
 * World.h
 *
 *  Created on: Dec 16, 2020
 *      Author: hugom
 */

#ifndef WORLD_H_
#define WORLD_H_

#include <iostream>
#include <string>
using namespace std;


class World {

public:
	World();
	World(string n);
	void sayHello();
	void sayHi();
	void sayGoodbye();
	virtual ~World();

private:
	string _name;
	void say(string n);

};


#endif /* WORLD_H_ */
