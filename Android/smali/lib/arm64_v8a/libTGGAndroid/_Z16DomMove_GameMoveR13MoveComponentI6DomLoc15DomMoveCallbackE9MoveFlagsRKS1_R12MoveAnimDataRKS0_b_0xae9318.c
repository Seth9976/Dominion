// 函数: _Z16DomMove_GameMoveR13MoveComponentI6DomLoc15DomMoveCallbackE9MoveFlagsRKS1_R12MoveAnimDataRKS0_b
// 地址: 0xae9318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoveComponent<DomLoc, DomMoveCallback>& x19 = arg1
int128_t var_108
int128_t v4

if ((arg6.d & 1) != 0)
    int128_t var_d4_1 = *(arg5 + 0x30)
    int128_t var_e4_1 = *(arg5 + 0x20)
    int128_t var_f4_1 = *(arg5 + 0x10)
    int128_t var_104_1 = *arg5
    int128_t var_94_1 = *(arg5 + 0x70)
    int128_t var_a4_1 = *(arg5 + 0x60)
    int128_t var_b4_1 = *(arg5 + 0x50)
    int128_t var_c4_1 = *(arg5 + 0x40)
    *(x19 + 8) = 1
    *(x19 + 0xc) = var_108
    *(x19 + 0x4c) = var_d4_1
    *(x19 + 0x3c) = var_e4_1
    *(x19 + 0x2c) = var_f4_1
    *(x19 + 0x1c) = var_104_1
    *(x19 + 0xb0) = 1
    *(x19 + 0x8c) = var_94_1:0xc.d
    *(x19 + 0x7c) = var_a4_1
    *(x19 + 0x6c) = var_b4_1
    *(x19 + 0x5c) = var_c4_1
    *(x19 + 0xb4) = var_108
    *(x19 + 0xf4) = var_d4_1
    *(x19 + 0xe4) = var_e4_1
    *(x19 + 0xd4) = var_f4_1
    *(x19 + 0xc4) = var_104_1
    *(x19 + 0x134) = var_94_1:0xc.d
    *(x19 + 0x104) = var_c4_1
    *(x19 + 0x114) = var_b4_1
    *(x19 + 0x124) = var_a4_1
    *(x19 + 0x158) = 1
    v4 = var_108
    *(x19 + 0x18c) = var_e4_1
    *(x19 + 0x19c) = var_d4_1
    *(x19 + 0x17c) = var_f4_1
    *(x19 + 0x15c) = v4
    *(x19 + 0x16c) = var_104_1
    *(x19 + 0x1dc) = var_94_1:0xc.d
    *(x19 + 0x1bc) = var_b4_1
    *(x19 + 0x1cc) = var_a4_1
    *(x19 + 0x1ac) = var_c4_1
    *(x19 + 0x1d20) = 0
    return 

int32_t x8_1 = *(x19 + 0x1d20)
int32_t x20_1 = arg2
int128_t v3

if (x8_1 s>= 1)
    int32_t x23_1 = 0
    
    do
        if (*(x19 + muls.dp.d(x23_1, 0xd8) + 0x2c8) == 0xa)
            int64_t x9_7 = x19 + sx.q(x23_1) * 0xd8
            int128_t v0
            int128_t v1
            int128_t v2
            arg1, v0, v1, v2, v3, v4 =
                memmove(x9_7 + 0x220, x9_7 + 0x2f8, muls.dp.d(x8_1 + not.d(x23_1), 0xd8))
            x23_1 -= 1
            x8_1 = *(x19 + 0x1d20) - 1
            *(x19 + 0x1d20) = x8_1
        
        x23_1 += 1
    while (x8_1 s> x23_1)

var_108.d = 1
int128_t var_e4 = *(arg5 + 0x20)
int128_t var_d4 = *(arg5 + 0x30)
int128_t var_104 = *arg5
int128_t var_f4 = *(arg5 + 0x10)
int128_t var_a4 = *(arg5 + 0x60)
int128_t var_94 = *(arg5 + 0x70)
int128_t var_c4 = *(arg5 + 0x40)
int128_t var_b4 = *(arg5 + 0x50)

if (x8_1 s>= 1)
    int64_t x9_9 = zx.q(x8_1) + 1
    void* x10_4 = x19 + mulu.dp.d(x8_1, 0xd8) + 0x1f0
    
    while (*x10_4 == 3)
        x9_9 -= 1
        x8_1 -= 1
        x10_4 -= 0xd8
        *(x19 + 0x1d20) = x8_1
        
        if (x9_9 s<= 1)
            goto label_ae9550

int128_t var_78
int64_t var_68

if (x8_1 == 0x20)
    v3 = var_108
    int128_t var_60_1 = *arg3
    int128_t var_50_1 = *(arg3 + 0x10)
    *(x19 + 0x1d40) = var_f4
    *(x19 + 0x1d20) = v3
    *(x19 + 0x1d30) = var_104
    *(x19 + 0x1d70) = var_c4
    *(x19 + 0x1d80) = var_b4
    *(x19 + 0x1d50) = var_e4
    *(x19 + 0x1d60) = var_d4
    *(x19 + 0x1dc0) = var_68
    *(x19 + 0x1db0) = var_78
    *(x19 + 0x1da0) = var_94
    *(x19 + 0x1d90) = var_a4
    *(x19 + 0x1dc8) = 6
    *(x19 + 0x1dcc) = x20_1
    *(x19 + 0x1df0) = 0
    *(x19 + 0x1de0) = var_50_1
    *(x19 + 0x1dd0) = var_60_1
else if (x8_1 != 0)
    int128_t var_60_2 = *arg3
    int128_t var_50_2 = *(arg3 + 0x10)
    *(x19 + 0x1d20) = x8_1 + 1
    void* x8_5 = x19 + muls.dp.d(x8_1, 0xd8)
    *(x8_5 + 0x220) = var_108
    *(x8_5 + 0x230) = var_104
    *(x8_5 + 0x240) = var_f4
    *(x8_5 + 0x270) = var_c4
    *(x8_5 + 0x280) = var_b4
    *(x8_5 + 0x250) = var_e4
    *(x8_5 + 0x260) = var_d4
    *(x8_5 + 0x2c0) = var_68
    *(x8_5 + 0x290) = var_a4
    *(x8_5 + 0x2a0) = var_94
    *(x8_5 + 0x2b0) = var_78
    *(x8_5 + 0x2c8) = 6
    *(x8_5 + 0x2cc) = x20_1
    *(x8_5 + 0x2f0) = 0
    *(x8_5 + 0x2d0) = var_60_2
    *(x8_5 + 0x2e0) = var_50_2
else
label_ae9550:
    MoveComponent<DomLoc, DomMoveCallback>::Move(x19, &var_108, 6, zx.q(x20_1))
