#pragma once

#include "core/core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

class Log {
public:
	ENGINE_API static void Init();

	ENGINE_API inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
		return s_CoreLogger;
	}

	ENGINE_API inline static std::shared_ptr<spdlog::logger>& GetGameLogger() {
		return s_GameLogger;
	}

private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
	static std::shared_ptr<spdlog::logger> s_GameLogger;
};

#define LOG_CORE_INFO(...)  ::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LOG_CORE_WARN(...)  ::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LOG_CORE_ERROR(...) ::Log::GetCoreLogger()->error(__VA_ARGS__)

#define LOG_GAME_INFO(...)       ::Log::GetGameLogger()->info(__VA_ARGS__)
#define LOG_GAME_WARN(...)       ::Log::GetGameLogger()->warn(__VA_ARGS__)
#define LOG_GAME_ERROR(...)      ::Log::GetGameLogger()->error(__VA_ARGS__)
