#pragma once

#include "core.h"
#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace hazel {

	class HAZEL_API log
	{
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

}

#define HZ_CORE_TRACE(...) ::hazel::log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)  ::hazel::log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)  ::hazel::log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...) ::hazel::log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...) ::hazel::log::GetCoreLogger()->critical(__VA_ARGS__)

#define HZ_TRACE(...)      ::hazel::log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)       ::hazel::log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)       ::hazel::log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)      ::hazel::log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)      ::hazel::log::GetClientLogger()->critical(__VA_ARGS__)
