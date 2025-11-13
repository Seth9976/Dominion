// 函数: _Z22SetActiveProfileBySloti
// 地址: 0x9df510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *(gGameSettings + 0x10)
void* x19

if ((arg1 & 0x80000000) != 0 || *(x9 + 0x1f2e0) s<= arg1)
    x19 = nullptr
else
    x19 = x9 + mulu.dp.d(arg1, 0x7cb8)

*(x9 + 0x1f2e4) = *(x19 + 0x4320)
SyncedDataSetAccount(x19 + 0x42f8)
*(x19 + 0x78a0) = 0
ProfileVerifyEntitlements(x19)
LocalGameExists(true)
return GameSpecific_OnSetProfile() __tailcall
