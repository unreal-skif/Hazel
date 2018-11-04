#include "hazel.h"

class sandbox : public hazel::application {
public:
	sandbox()
	{}

	~sandbox()
	{}
};

hazel::application* hazel::create_application() {
	return new sandbox();
}