
/* 
 * The Composite implementation
 * 
 * Intent:
 *   Compose objects into tree structures to represent part-whole hierarchies.
 *   Composite lets clients treat individual objects and compositions of objects uniformly.
 * 
 * */

#include "composite.h"
#include "component.h"
#include "leaf_1.h"
#include "leaf_2.h"

int main() {
	Composite obj;
	Component * kek =new LeafFirst;
	Component * kek_1 =new LeafSecond;
	
	obj.addElement(kek);
	obj.addElement(kek_1);
	obj.DoSomethingForComponent(kek);
	obj.DoSomethingWithEveryOne();
	
	obj.removeElement(kek_1);
	obj.removeElement(kek);
	delete kek;
	delete kek_1;
	
	return 0;
}
