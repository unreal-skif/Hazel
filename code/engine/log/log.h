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

	ENGINE_API inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
		return s_ClientLogger;
	}

private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
	static std::shared_ptr<spdlog::logger> s_ClientLogger;
};

#define CORE_LOG_INFO(...)  ::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_LOG_WARN(...)  ::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_LOG_ERROR(...) ::Log::GetCoreLogger()->error(__VA_ARGS__)

#define LOG_INFO(...)       ::Log::GetClientLogger()->info(__VA_ARGS__)
#define LOG_WARN(...)       ::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...)      ::Log::GetClientLogger()->error(__VA_ARGS__)
