#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1,b2;

  initBox(&b1,3.0,4.0,5.0,6.0);  
  assertEquals("ul=(3.0,4.0),w=5.0,h=6.0", boxToString(b1,2), "boxToString(b1,2)");

  initBox(&b2,1.15932,2.323232,3.7731662,4.91390);
  assertEquals("ul=(1.2,2.3),w=3.8,h=4.9", boxToString(b2,2), "boxToString(b2,2)");
  assertEquals("ul=(1,2),w=4,h=5", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=(1.159,2.323),w=3.773,h=4.914", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(1.1593,2.3232),w=3.7732,h=4.9139", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
