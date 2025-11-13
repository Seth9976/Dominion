// 函数: _ZN13MoveComponentI6DomLoc15DomMoveCallbackE4MoveERK9LocationTIS0_E9MoveStyle9MoveFlagsRKS1_
// 地址: 0xae90ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1d20)
int32_t x8_6

if (x8 != 0)
    if (x8 != 1)
        goto label_ae9188
    
    int32_t x8_1 = *(arg1 + 0x220)
    
    if (x8_1 == 0 || x8_1 != *arg2 || *(arg1 + 0x228) != *(arg2 + 8)
            || *(arg1 + 0x230) != *(arg2 + 0x10) || *(arg1 + 0x234) != *(arg2 + 0x14)
            || *(arg1 + 0x238) != *(arg2 + 0x18))
        goto label_ae9188
    
    x8_6 = *(arg1 + 0x22c)
    goto label_ae9178

int32_t x8_7 = *(arg1 + 0x158)

if (x8_7 != 0 && x8_7 == *arg2 && *(arg1 + 0x160) == *(arg2 + 8)
        && *(arg1 + 0x168) == *(arg2 + 0x10) && *(arg1 + 0x16c) == *(arg2 + 0x14)
        && *(arg1 + 0x170) == *(arg2 + 0x18))
    x8_6 = *(arg1 + 0x164)
label_ae9178:
    
    if (x8_6 != *(arg2 + 0xc))
        goto label_ae9188
    
    return 

label_ae9188:
int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (*(arg1 + 0x158) != 0)
    v1 = *(arg1 + 0x168)
    v2 = *(arg1 + 0x158)
    *(arg1 + 0x28) = *(arg1 + 0x178)
    *(arg1 + 0x18) = v1
    *(arg1 + 8) = v2
    v1 = *(arg1 + 0x1a8)
    v3 = *(arg1 + 0x188)
    v2 = *(arg1 + 0x198)
    *(arg1 + 0x68) = *(arg1 + 0x1b8)
    *(arg1 + 0x58) = v1
    *(arg1 + 0x48) = v2
    *(arg1 + 0x38) = v3
    v1 = *(arg1 + 0x1d8)
    v0 = *(arg1 + 0x1e8)
    v2 = *(arg1 + 0x1c8)
    *(arg1 + 0xa8) = *(arg1 + 0x1f8)
    *(arg1 + 0x98) = v0
    *(arg1 + 0x88) = v1
    *(arg1 + 0x78) = v2

v0 = *(arg1 + 0x178)
v2 = *(arg1 + 0x158)
*(arg1 + 0xc0) = *(arg1 + 0x168)
*(arg1 + 0xd0) = v0
*(arg1 + 0xb0) = v2
v0 = *(arg1 + 0x1b8)
v3 = *(arg1 + 0x188)
v2 = *(arg1 + 0x198)
*(arg1 + 0x100) = *(arg1 + 0x1a8)
*(arg1 + 0x110) = v0
*(arg1 + 0xe0) = v3
*(arg1 + 0xf0) = v2
v2 = *(arg1 + 0x1d8)
v0 = *(arg1 + 0x1e8)
int64_t x9_14 = *(arg1 + 0x1f8)
v1 = *(arg1 + 0x1c8)
*(arg1 + 0x1d2c) = 0
*(arg1 + 0x130) = v2
*(arg1 + 0x140) = v0
*(arg1 + 0x150) = x9_14
*(arg1 + 0x120) = v1
int128_t var_90_1 = *(arg2 + 0x20)
int128_t var_b0_1 = *arg2
int128_t var_60_1 = *(arg2 + 0x50)
int128_t var_50_1 = *(arg2 + 0x60)
int128_t var_80_1 = *(arg2 + 0x30)
int128_t var_70_1 = *(arg2 + 0x40)
int64_t x8_13 = *(arg2 + 0xa0)
int64_t var_10_1 = x8_13
int128_t var_30_1 = *(arg2 + 0x80)
int128_t var_20_1 = *(arg2 + 0x90)
int128_t var_40_1 = *(arg2 + 0x70)
int128_t* entry_x4
int128_t var_d0_1 = *entry_x4
int128_t var_c0_1 = entry_x4[1]
*(arg1 + 0x230) = *(arg2 + 0x10)
*(arg1 + 0x240) = var_90_1
*(arg1 + 0x220) = var_b0_1
*(arg1 + 0x270) = var_60_1
*(arg1 + 0x280) = var_50_1
*(arg1 + 0x250) = var_80_1
*(arg1 + 0x260) = var_70_1
*(arg1 + 0x2a0) = var_30_1
*(arg1 + 0x2b0) = var_20_1
*(arg1 + 0x2c0) = x8_13
*(arg1 + 0x290) = var_40_1
*(arg1 + 0x2c8) = arg3
*(arg1 + 0x2cc) = arg4.d
*(arg1 + 0x2f0) = 0
*(arg1 + 0x1d20) = 1
*(arg1 + 0x2d0) = var_d0_1
*(arg1 + 0x2e0) = var_c0_1
void* x8_14 = *(arg1 + 0x2d0)

if (*(x8_14 + 0x2c) == 0)
    return CardWhat(gDomClient + 0x20728, zx.q(*(x8_14 + 0x98))) __tailcall
