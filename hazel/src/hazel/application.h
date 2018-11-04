#pragma once

#include "core.h"

namespace hazel {

	class HAZEL_API application
	{
	public:
		application();
		virtual ~application();

		void run();
	};

	application* create_application();

}