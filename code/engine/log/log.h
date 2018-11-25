#pragma once

#include "core/core.h"
#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

class ENGINE_API log {
public:
	static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
		return s_CoreLogger;
	}

	inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
		return s_ClientLogger;
	}

private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
	static std::shared_ptr<spdlog::logger> s_ClientLogger;

};

#define CORE_LOG_TRACE(...) ::log::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_LOG_INFO(...)  ::log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_LOG_WARN(...)  ::log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_LOG_ERROR(...) ::log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_LOG_FATAL(...) ::log::GetCoreLogger()->critical(__VA_ARGS__)

#define LOG_TRACE(...)      ::log::GetClientLogger()->trace(__VA_ARGS__)
#define LOG_INFO(...)       ::log::GetClientLogger()->info(__VA_ARGS__)
#define LOG_WARN(...)       ::log::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...)      ::log::GetClientLogger()->error(__VA_ARGS__)
#define LOG_FATAL(...)      ::log::GetClientLogger()->critical(__VA_ARGS__)
