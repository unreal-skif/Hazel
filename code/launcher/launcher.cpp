#include "Launcher.h"

Launcher::Launcher()
{}

Launcher::~Launcher()
{}

void Launcher::Run() {
	while (true);
}

int main(int argc, char** argv) {
	Log::Init();

	LOG_CORE_WARN("Test core warn");
	int a = 444;
	LOG_GAME_ERROR("Test game error! int a = {0}", a);

	std::unique_ptr<Launcher> Game = std::make_unique<Launcher>();
	Game->Run();	
}
