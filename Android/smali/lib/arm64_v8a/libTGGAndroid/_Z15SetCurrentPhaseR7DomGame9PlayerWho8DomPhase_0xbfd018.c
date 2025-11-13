// 函数: _Z15SetCurrentPhaseR7DomGame9PlayerWho8DomPhase
// 地址: 0xbfd018
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x19f4)
int32_t x19 = arg3
int32_t x21 = arg2
int64_t var_90

if (x8 == 3)
label_bfd080:
    int128_t var_70
    __builtin_memset(&var_70, 0, 0x48)
    int32_t var_24 = 2
    var_90 = 0
    TriggerEvents(arg1, zx.q(x21), &var_24, 1, &var_70, 0, nullptr, 0)
else if ((x19 & 0xfffffffe) != 2 && x8 == 2)
    goto label_bfd080

int32_t x8_1 = *(arg1 + 0x150c)

if (x8_1 - 3 u>= 4)
    int64_t var_78_1 = 0
    int32_t var_80_1 = 0
    int32_t var_88_1 = 0
    var_90.d = 0
    DomNotifyEffect(zx.q(x8_1 == 2 ? 1 : 0), 0x29, zx.q(x21), 0, zx.q(x19), 0, 0, 0)

*(arg1 + 0x19f4) = x19
