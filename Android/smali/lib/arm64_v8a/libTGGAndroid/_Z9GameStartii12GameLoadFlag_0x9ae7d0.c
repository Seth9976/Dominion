// 函数: _Z9GameStartii12GameLoadFlag
// 地址: 0x9ae7d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameClient* x0 = GetClient()
void* x0_1 = GetActiveProfile()
ValidateOwnership(x0_1 + 0x18, 4, 0)
int64_t x0_4 = GameLatestVersion(GameSpecific_GameType(), false)
*(x0_1 + 0x40) = x0_4.d
*(GetActiveProfile() + 0x4330) =
    GameStartSetup(x0_4, x0, x0 + 0x50a8, x0_1 + 0x18, arg1, arg2, zx.q(arg3))
SaveProfiles()
GameSetupSetAILevel(x0 + 0x50b0, zx.q(GameSetupMinAILevel(x0_1 + 0x18)))
return LocalGameSaveXML(x0 + 0x50a8, *(x0 + 0x50a8)) __tailcall
