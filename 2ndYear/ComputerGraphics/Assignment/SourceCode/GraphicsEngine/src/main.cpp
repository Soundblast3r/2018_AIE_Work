#include "GraphicsEngine.h"
#include "application.h"
#include <chrono>
int main() 
{
	bool gameRunning = true;
	
	GraphicsEngine * GraphicEngine = new GraphicsEngine();
	if (GraphicEngine->startup() == true) {
		while (gameRunning == true)
		{
			auto previousTime = std::chrono::steady_clock::time_point();
			auto currentTime = std::chrono::steady_clock::now();
			auto elapsed = previousTime - currentTime;

			float deltaTime = elapsed.count();
			printf("deltaTime: %i.%i\n", deltaTime);
			previousTime = currentTime;
			GraphicEngine->update(deltaTime);
			GraphicEngine->draw();
		}
		GraphicEngine->shutdown();
		
	}
	delete GraphicEngine;
	return 0;
}