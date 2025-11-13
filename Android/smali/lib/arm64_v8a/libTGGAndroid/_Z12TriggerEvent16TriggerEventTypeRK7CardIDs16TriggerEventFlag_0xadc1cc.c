// 函数: _Z12TriggerEvent16TriggerEventTypeRK7CardIDs16TriggerEventFlag
// 地址: 0xadc1cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24 = arg1
void* x0 = DomGetContext()
int128_t var_70
__builtin_memset(&var_70, 0, 0x48)

if (arg1 == 6)
    var_70.d = 3
    var_70:8.d = 1

int64_t var_80 = 0
return TriggerEvents(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_24, 1, &var_70, zx.q(arg3), arg2, 
    zx.q(*(arg2 + 0xc80)))
