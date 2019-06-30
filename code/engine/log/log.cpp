#include "log/log.h"

std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
std::shared_ptr<spdlog::logger> Log::s_GameLogger;

void Log::Init() {
	spdlog::set_pattern("%^[%T] %n: %v%$");

	s_CoreLogger = spdlog::stdout_color_mt("CORE");
	s_CoreLogger->set_level(spdlog::level::trace);

	s_GameLogger = spdlog::stdout_color_mt("GAME");
	s_GameLogger->set_level(spdlog::level::trace);
}
