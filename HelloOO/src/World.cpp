/*
 * World.cpp
 *
 *  Created on: Dec 16, 2020
 *      Author: hugom
 */

#include "World.h"
#include "TheRing.h"

World::World() {
	_name = "World";
	say("Constructing");
}

World::World(string n) {
	_name = n;
	say("Constructing");

}

World::~World() {
	say("Destroying");
}

void World::sayHello(){
	say("Hello");
}
void World::sayHi(){
	say("Hi");
}
void World::sayGoodbye(){
	say("Goodbye");
}
void World::say(string what){
	cout << what << " " << _name << "!" << endl;

}
