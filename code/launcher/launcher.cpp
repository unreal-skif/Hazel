#include "launcher.h"

launcher::launcher()
{}

launcher::~launcher()
{}

void launcher::run() {
	while (true);
}

int main(int argc, char** argv) {
	log::Init();

	CORE_LOG_WARN("Test warn");
	int a = 444;
	LOG_FATAL("Test fatal! int a = {0}", a);

	launcher* pLauncher = new launcher();
	pLauncher->run();
	delete pLauncher;
}