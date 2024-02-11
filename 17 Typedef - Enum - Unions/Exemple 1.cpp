#include <iostream>
#include <string>
using namespace std;

struct maStruct { 
	int x;
	char txt;
	short y;
};

union monUnion {
	int x;
	char txt;
	short y;
};

int main() {
	maStruct struct1;
	monUnion union1;

	struct1.x = 1;
	struct1.txt = 'A';
	struct1.y = 40;

	union1.x = 1;
	union1.txt = 'A';
	union1.y = 40;
}

