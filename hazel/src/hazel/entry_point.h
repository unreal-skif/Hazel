#pragma once

extern hazel::application* hazel::create_application();

int main(int argc, char** argv) {
	hazel::log::Init();

	HZ_CORE_WARN("Test warn");
	int a = 444;
	HZ_FATAL("Test fatal! int a = {0}", a);

	hazel::application* app = hazel::create_application();
	app->run();
	delete app;
}