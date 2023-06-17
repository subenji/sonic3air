#pragma once
#include "sonic3air/Game.h"
#include "APCpp/Archipelago.h"

namespace ArchipelagoIntegration
{
	void Init(const char *, const char *, const char *);
	void Start();
	void APItemClear();
	void APRecvItem(int64_t, bool);
	void APRecvLoc(int64_t);
	void APDeathLink();
}
