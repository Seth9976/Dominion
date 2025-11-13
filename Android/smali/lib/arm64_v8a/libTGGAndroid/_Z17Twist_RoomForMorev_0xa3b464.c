// 函数: _Z17Twist_RoomForMorev
// 地址: 0xa3b464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame* x19 = *(DomGetContext() + 8)
int128_t var_60
__builtin_memset(&var_60, 0, 0x50)
InsertKingdomPile(x19, zx.q(*(x19 + 0x1014)), &var_60, 0, 0)
AddExtraPiles(x19, &var_60)
return RunSetupAfterFns()
