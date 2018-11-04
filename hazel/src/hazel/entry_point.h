#pragma once

extern hazel::application* hazel::create_application();

int main(int argc, char** argv) {
	hazel::application* app = hazel::create_application();
	app->run();
	delete app;
}