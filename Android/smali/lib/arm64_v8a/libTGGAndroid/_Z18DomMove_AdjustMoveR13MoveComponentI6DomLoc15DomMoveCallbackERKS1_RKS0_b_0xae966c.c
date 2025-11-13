// 函数: _Z18DomMove_AdjustMoveR13MoveComponentI6DomLoc15DomMoveCallbackERKS1_RKS0_b
// 地址: 0xae966c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_d8
int128_t v4

if ((arg4.d & 1) != 0)
    int128_t var_b0 = *(arg3 + 0x30)
    int128_t var_c0 = *(arg3 + 0x20)
    int128_t var_d0 = *(arg3 + 0x10)
    int128_t var_d4 = *arg3
    int128_t var_70 = *(arg3 + 0x70)
    int128_t var_80 = *(arg3 + 0x60)
    int128_t var_90 = *(arg3 + 0x50)
    int128_t var_a0 = *(arg3 + 0x40)
    *(arg1 + 8) = 1
    *(arg1 + 0xc) = var_d8.o
    *(arg1 + 0x4c) = var_a0
    *(arg1 + 0x3c) = var_b0
    *(arg1 + 0x2c) = var_c0
    *(arg1 + 0x1c) = var_d0
    *(arg1 + 0xb0) = 1
    int96_t var_60
    *(arg1 + 0x8c) = var_60:8.d
    *(arg1 + 0x7c) = var_70
    *(arg1 + 0x6c) = var_80
    *(arg1 + 0x5c) = var_90
    *(arg1 + 0xb4) = var_d8.o
    *(arg1 + 0xf4) = var_a0
    *(arg1 + 0xe4) = var_b0
    *(arg1 + 0xd4) = var_c0
    *(arg1 + 0xc4) = var_d0
    *(arg1 + 0x134) = var_60:8.d
    *(arg1 + 0x104) = var_90
    *(arg1 + 0x114) = var_80
    *(arg1 + 0x124) = var_70
    *(arg1 + 0x158) = 1
    v4 = var_d8.o
    *(arg1 + 0x18c) = var_b0
    *(arg1 + 0x19c) = var_a0
    *(arg1 + 0x17c) = var_c0
    *(arg1 + 0x15c) = v4
    *(arg1 + 0x16c) = var_d0
    *(arg1 + 0x1dc) = var_60:8.d
    *(arg1 + 0x1bc) = var_80
    *(arg1 + 0x1cc) = var_70
    *(arg1 + 0x1ac) = var_90
    *(arg1 + 0x1d20) = 0
    return 

var_d8 = 1
int128_t var_b0_1 = *(arg3 + 0x20)
int128_t var_a0_1 = *(arg3 + 0x30)
int128_t var_d0_1 = *arg3
int128_t var_c0_1 = *(arg3 + 0x10)
int128_t var_70_1 = *(arg3 + 0x60)
int128_t var_60_1 = *(arg3 + 0x70)
int128_t var_90_1 = *(arg3 + 0x40)
int128_t var_80_1 = *(arg3 + 0x50)
uint64_t x9_3 = zx.q(*(arg1 + 0x1d20))

if (x9_3.d s>= 1)
    int64_t x8_2 = x9_3 + 1
    int32_t* x10_3 = arg1 + x9_3 * 0xd8 + 0x1f0
    
    while (*x10_3 == 3)
        x8_2 -= 1
        x9_3 = zx.q(x9_3.d - 1)
        x10_3 -= 0xd8
        *(arg1 + 0x1d20) = x9_3.d
        
        if (x8_2 s<= 1)
            goto label_ae9824

int128_t var_48
int64_t var_38

if (x9_3.d == 0x20)
    v4 = var_d8.o
    int128_t var_30 = *arg2
    int128_t var_20 = *(arg2 + 0x10)
    *(arg1 + 0x1d40) = var_c0_1
    *(arg1 + 0x1d30) = var_d0_1
    *(arg1 + 0x1d20) = v4
    *(arg1 + 0x1d50) = var_b0_1
    *(arg1 + 0x1d60) = var_a0_1
    *(arg1 + 0x1d70) = var_90_1
    *(arg1 + 0x1d80) = var_80_1
    *(arg1 + 0x1d90) = var_70_1
    *(arg1 + 0x1da0) = var_60_1
    *(arg1 + 0x1db0) = var_48
    *(arg1 + 0x1dc0) = var_38
    *(arg1 + 0x1dc8) = 0xa
    *(arg1 + 0x1df0) = 0
    *(arg1 + 0x1de0) = var_20
    *(arg1 + 0x1dd0) = var_30
    return 

if (x9_3.d == 0)
label_ae9824:
    MoveComponent<DomLoc, DomMoveCallback>::Move(arg1, &var_d8, 0xa, nullptr)
    return 

int128_t var_30_1 = *arg2
int128_t var_20_1 = *(arg2 + 0x10)
*(arg1 + 0x1d20) = x9_3.d + 1
void* x9_5 = arg1 + muls.dp.d(x9_3.d, 0xd8)
*(x9_5 + 0x220) = var_d8.o
*(x9_5 + 0x230) = var_d0_1
*(x9_5 + 0x240) = var_c0_1
*(x9_5 + 0x270) = var_90_1
*(x9_5 + 0x280) = var_80_1
*(x9_5 + 0x250) = var_b0_1
*(x9_5 + 0x260) = var_a0_1
*(x9_5 + 0x2c0) = var_38
*(x9_5 + 0x290) = var_70_1
*(x9_5 + 0x2a0) = var_60_1
*(x9_5 + 0x2b0) = var_48
*(x9_5 + 0x2c8) = 0xa
*(x9_5 + 0x2f0) = 0
*(x9_5 + 0x2d0) = var_30_1
*(x9_5 + 0x2e0) = var_20_1
