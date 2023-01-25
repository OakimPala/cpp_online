#include "Engine.h"

int main() {
	Engine engine(800, 600);
	
	while (engine.getState())
	{
		engine.draw();
	}
	
	return 0;
}