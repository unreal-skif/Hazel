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

	CORE_LOG_WARN("Test warn");
	int a = 444;
	LOG_ERROR("Test error! int a = {0}", a);

	Launcher* pLauncher = new Launcher();
	pLauncher->Run();
	delete pLauncher;
}