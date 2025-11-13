// 函数: _ZN19AppInterfaceGameApp18UpcallStartForRealEv
// 地址: 0x9a83a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(*gAppInterface + 0x28) = AppGetWindowSize()
XTraceAndLog("GameAppInit")
memset(gClientStorage, 0, 0x7918)
memset(gServerStorage, 0, 0x1230)
*gClient = gClientStorage
GameClientInit()
*gClient = 0
*gServer = gServerStorage
GameServerInit()
*gServer = 0
CardLookupInit()
return DomCampaignInit() __tailcall
