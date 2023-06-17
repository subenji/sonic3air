#include "sonic3air/pch.h"
#include "ArchipelagoIntegration.h"

namespace ArchipelagoIntegration
{
	/// <summary>
	/// Initialize Archipelago session.
	/// </summary>
	/// <param name="sIP">- Server IP:Port address</param>
	/// <param name="sSlot">- Player Slot</param>
	/// <param name="sPassword">- Connection password (optional)</param>
	void Init(const char *sIP, const char *sSlot, const char *sPassword = "")
	{
		AP_Init(sIP, "s3air", sSlot, sPassword);
		AP_SetItemClearCallback(APItemClear);
		AP_SetItemRecvCallback(APRecvItem);
		AP_SetLocationCheckedCallback(APRecvLoc);

		//AP_EnableQueueItemRecvMsgs(bool) - Enables or disables Item Messages for Items received for the current game.
		//Alternative to using the game's native item reception handler, if present. Defaults to on.

		AP_SetDeathLinkSupported(false);
		AP_SetDeathLinkRecvCallback(APDeathLink);

		// AP_RegisterSlotDataIntCallback(std::string, void (*f_slotdata)(int));
		// AP_RegisterSlotDataMapIntIntCallback(std::string, void (*f_slotdata)(std::map<int,int>));
		// Slot Data - persistent data for the slot saved on the server - requires a callback defined per string key
	}

	void Start()
	{
		AP_Start();
	}

	void APItemClear()
	{
		// Clear all item states
	}

	void APRecvItem(int64_t ID, bool bNotify)
	{
		//add item, notify player on bNotify
	}

	void APRecvLoc(int64_t ID)
	{
		//mark location as checked
	}

	void APDeathLink()
	{
		// process deathlink event
	}
}