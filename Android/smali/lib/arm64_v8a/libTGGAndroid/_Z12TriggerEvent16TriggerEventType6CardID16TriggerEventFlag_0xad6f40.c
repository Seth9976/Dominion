// 函数: _Z12TriggerEvent16TriggerEventType6CardID16TriggerEventFlag
// 地址: 0xad6f40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
int32_t var_98 = 0
int32_t var_d18
int32_t x20

if (arg2 == 0)
    x20 = 0
else
    x20 = 1
    GameAssert(true)
    int32_t var_98_1 = 1
    var_d18 = arg2

int32_t var_44 = x21
void* x0 = DomGetContext()
int128_t var_90
__builtin_memset(&var_90, 0, 0x48)

if (x21 == 6)
    var_90.d = 3
    var_90:8.d = 1

int64_t var_d20 = 0
return TriggerEvents(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_44, 1, &var_90, zx.q(arg3), &var_d18, 
    zx.q(x20))
