// 函数: _Z14GameAppDisposev
// 地址: 0x9a80fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gClient = gClientStorage
GameClientDispose()
*gClient = 0
*gServer = gServerStorage
GameServerDispose()
*gServer = 0
GameSettingsDispose()
CardLookupDispose()
return DomCampaignDispose() __tailcall
