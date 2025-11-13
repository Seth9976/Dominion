// 函数: _Z17DomZoomExtraGroupP22DomAssociatedCardGroup
// 地址: 0xaf5628
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 == 1)
    return DomZoom(*(gDomClient + 0x205e0) + zx.q(*(arg1 + 0xc)) * 0x21d8) __tailcall

*(gDomClient + 0x1f0a8) = arg1
int32_t x8_3 = *(gDomClient + 0x1d00c)
int32_t x8_4

x8_4 = x8_3 == 3 ? x8_3 : 1

*(gDomClient + 0x1d010) = x8_4
*(gDomClient + 0x1d00c) = 4

if (*arg1 s< 1)
    return 

int64_t i = 0
void* __offset(DomAssociatedCardGroup, 0xc) x22_1 = arg1 + 0xc

do
    uint64_t x8_6 = zx.q(*x22_1)
    x22_1 += 0xc
    void* x8_7 = *(gDomClient + 0x205e0) + x8_6 * 0x21d8
    int128_t var_130_1
    __builtin_memset(&var_130_1, 0, 0x20)
    var_130_1:8.d = 2
    int128_t var_120_1
    var_120_1:8.d = 0
    int32_t var_108 = 1
    int32_t var_100_1 = 0x24
    var_130_1.q = x8_7
    int32_t var_f8_1 = 0xffffffff
    int32_t var_f4_1 = i.d
    MoveComponent<DomLoc, DomMoveCallback>::Move(x8_7 + 0x258, &var_108, 6, 1)
    i += 1
while (i s< sx.q(*arg1))
