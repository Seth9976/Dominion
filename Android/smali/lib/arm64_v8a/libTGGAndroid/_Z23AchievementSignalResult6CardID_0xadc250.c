// 函数: _Z23AchievementSignalResult6CardID
// 地址: 0xadc250
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_88 = 0
int32_t var_d08
int32_t x19

if (arg1 == 0)
    x19 = 0
else
    x19 = 1
    GameAssert(true)
    int32_t var_88_1 = 1
    var_d08 = arg1

int32_t var_34 = 0x1c
void* x0 = DomGetContext()
int128_t var_80
__builtin_memset(&var_80, 0, 0x48)
int64_t var_d10 = 0
return TriggerEvents(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_34, 1, &var_80, 0, &var_d08, zx.q(x19))
