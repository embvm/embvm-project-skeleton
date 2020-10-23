/*
 * Copyright © 2020 Embedded Artistry LLC.
 * See LICENSE file for licensing information.
 */

#include <platform.hpp>

volatile bool abort_program_ = false;

int main()
{
	auto& platform = VirtualPlatform::inst();
	platform.startBlink();

	while(!abort_program_)
	{
		// spin
	}

	return 0;
}
