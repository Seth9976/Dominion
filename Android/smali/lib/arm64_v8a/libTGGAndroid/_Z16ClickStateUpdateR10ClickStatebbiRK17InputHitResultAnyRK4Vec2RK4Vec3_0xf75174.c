// 函数: _Z16ClickStateUpdateR10ClickStatebbiRK17InputHitResultAnyRK4Vec2RK4Vec3
// 地址: 0xf75174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
*(arg1 + 0x32c) = 0
*(arg1 + 0x328) = 0
int128_t v2 = *(arg1 + 0x124)
int128_t var_140 = *(arg1 + 0x134)
int128_t var_130 = *(arg1 + 0x144)
int128_t var_160 = *(arg1 + 0x114)
int128_t var_150 = v2
int128_t var_100 = *(arg1 + 0x174)
int128_t var_f0 = *(arg1 + 0x184)
int128_t var_120 = *(arg1 + 0x154)
int128_t var_110 = *(arg1 + 0x164)
int128_t var_c0 = *(arg1 + 0x1b4)
int128_t var_b0 = *(arg1 + 0x1c4)
int128_t var_e0 = *(arg1 + 0x194)
int128_t var_d0 = *(arg1 + 0x1a4)
int128_t var_80 = *(arg1 + 0x1f4)
int128_t var_70 = *(arg1 + 0x204)
int128_t var_a0 = *(arg1 + 0x1d4)
int128_t var_90 = *(arg1 + 0x1e4)
int128_t v0 = *(arg5 + 0x30)
int128_t v3 = *arg5
v2 = *(arg5 + 0x10)
*(arg1 + 0x134) = *(arg5 + 0x20)
*(arg1 + 0x144) = v0
*(arg1 + 0x114) = v3
*(arg1 + 0x124) = v2
v0 = *(arg5 + 0x70)
v3 = *(arg5 + 0x40)
v2 = *(arg5 + 0x50)
*(arg1 + 0x174) = *(arg5 + 0x60)
*(arg1 + 0x184) = v0
*(arg1 + 0x154) = v3
*(arg1 + 0x164) = v2
v0 = *(arg5 + 0xb0)
v3 = *(arg5 + 0x80)
v2 = *(arg5 + 0x90)
*(arg1 + 0x1b4) = *(arg5 + 0xa0)
*(arg1 + 0x1c4) = v0
*(arg1 + 0x194) = v3
*(arg1 + 0x1a4) = v2
v0 = *(arg5 + 0xf0)
v3 = *(arg5 + 0xc0)
v2 = *(arg5 + 0xd0)
*(arg1 + 0x1f4) = *(arg5 + 0xe0)
*(arg1 + 0x204) = v0
*(arg1 + 0x1d4) = v3
*(arg1 + 0x1e4) = v2
*(arg1 + 0x314) = *arg6
int64_t x9 = *arg7
*(arg1 + 0x324) = *(arg7 + 8)
*(arg1 + 0x31c) = x9
int64_t result
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4
int128_t v5
result, v0_1, v1_1, v2_1, v3_1, v4, v5 = (**(arg1 + 0x214))(arg1 + 0x214)

if (result == InputHitResultNone::Comparator)
    int64_t x0_2 = (**(arg1 + 0x114))(arg1 + 0x114)
    result, v0_1, v1_1, v2_1, v3_1, v4, v5 = (*var_160.q)(&var_160)
    
    if (x0_2 != result)
        *(arg1 + 0x328) = 1
    else
        result, v0_1, v1_1, v2_1, v3_1, v4, v5 = x0_2(arg1 + 0x114, &var_160)
        
        if ((result.d & 1) == 0)
            *(arg1 + 0x328) = 1

if ((arg2.d & 1) == 0)
    if ((arg3.d & 1) != 0)
        *(arg1 + 0x10) = 0
        *(arg1 + 0x329) = 1
        *(arg1 + 0x32b) = 1
        v1_1 = *(arg1 + 0x134)
        v3_1 = *(arg1 + 0x114)
        v2_1 = *(arg1 + 0x124)
        *(arg1 + 0x44) = *(arg1 + 0x144)
        *(arg1 + 0x34) = v1_1
        *(arg1 + 0x24) = v2_1
        *(arg1 + 0x14) = v3_1
        v1_1 = *(arg1 + 0x174)
        v3_1 = *(arg1 + 0x154)
        v2_1 = *(arg1 + 0x164)
        *(arg1 + 0x84) = *(arg1 + 0x184)
        *(arg1 + 0x74) = v1_1
        *(arg1 + 0x64) = v2_1
        *(arg1 + 0x54) = v3_1
        v1_1 = *(arg1 + 0x1b4)
        v3_1 = *(arg1 + 0x194)
        v2_1 = *(arg1 + 0x1a4)
        *(arg1 + 0xc4) = *(arg1 + 0x1c4)
        *(arg1 + 0xb4) = v1_1
        *(arg1 + 0xa4) = v2_1
        *(arg1 + 0x94) = v3_1
        v0_1 = *(arg1 + 0x1f4)
        v2_1 = *(arg1 + 0x1d4)
        v3_1 = *(arg1 + 0x1e4)
        *(arg1 + 0x104) = *(arg1 + 0x204)
        *(arg1 + 0xf4) = v0_1
        *(arg1 + 0xe4) = v3_1
        *(arg1 + 0xd4) = v2_1
    else if (zx.d(*(arg1 + 8)) != 0)
        int64_t x0_10 = (*var_160.q)(&var_160)
        result, v0_1, v1_1, v2_1, v3_1, v4, v5 = (**(arg1 + 0x214))(arg1 + 0x214)
        
        if (x0_10 == result)
            result, v0_1, v1_1, v2_1, v3_1, v4, v5 = x0_10(&var_160, arg1 + 0x214)
            
            if ((result.d & 1) != 0)
                if (arg4 - *(arg1 + 0xc) s>= 0x1f4)
                    *(arg1 + 0x32c) = 1
                else
                    *(arg1 + 0x32b) = 1
                
                v3_1 = var_160
                *(arg1 + 0x134) = var_140
                *(arg1 + 0x144) = var_130
                *(arg1 + 0x114) = v3_1
                *(arg1 + 0x124) = var_150
                *(arg1 + 0x174) = var_100
                *(arg1 + 0x184) = var_f0
                *(arg1 + 0x154) = var_120
                *(arg1 + 0x164) = var_110
                *(arg1 + 0x1b4) = var_c0
                *(arg1 + 0x1c4) = var_b0
                *(arg1 + 0x194) = var_e0
                *(arg1 + 0x1a4) = var_d0
                *(arg1 + 0x1f4) = var_80
                *(arg1 + 0x204) = var_70
                *(arg1 + 0x1d4) = var_a0
                *(arg1 + 0x1e4) = var_90
    
    v0_1 = data_117eef8.o
    v1_1 = data_117ef08.o
    *(arg1 + 8) = 0
    v2_1 = data_117eed8.o
    v3_1 = data_117eee8.o
    v4 = data_117ef18.o
    v5 = data_117ef28.o
    *(arg1 + 0x234) = v0_1
    *(arg1 + 0x244) = v1_1
    v0_1 = data_117ef38.o
    v1_1 = data_117ef48.o
    *(arg1 + 0x214) = v2_1
    *(arg1 + 0x224) = v3_1
    v2_1 = data_117ef58.o
    v3_1 = data_117ef68.o
    *(arg1 + 0x254) = v4
    *(arg1 + 0x264) = v5
    *(arg1 + 0x274) = v0_1
    *(arg1 + 0x284) = v1_1
    v0_1 = data_117ef78.o
    v1_1 = data_117ef88.o
    v4 = data_117efb8.o
    v5 = data_117efc8.o
    *(arg1 + 0x294) = v2_1
    *(arg1 + 0x2a4) = v3_1
    *(arg1 + 0x2b4) = v0_1
    *(arg1 + 0x2c4) = v1_1
    v0_1 = data_117ef98.o
    v1_1 = data_117efa8.o
    *(arg1 + 0x2f4) = v4
    *(arg1 + 0x304) = v5
    *(arg1 + 0x2d4) = v0_1
    *(arg1 + 0x2e4) = v1_1
else if (zx.d(*(arg1 + 8)) == 0)
    *(arg1 + 0xc) = arg4
    *(arg1 + 8) = 1
    v0_1 = *(arg1 + 0x144)
    v3_1 = *(arg1 + 0x114)
    v2_1 = *(arg1 + 0x124)
    *(arg1 + 0x234) = *(arg1 + 0x134)
    *(arg1 + 0x244) = v0_1
    *(arg1 + 0x214) = v3_1
    *(arg1 + 0x224) = v2_1
    v0_1 = *(arg1 + 0x184)
    v3_1 = *(arg1 + 0x154)
    v2_1 = *(arg1 + 0x164)
    *(arg1 + 0x274) = *(arg1 + 0x174)
    *(arg1 + 0x284) = v0_1
    *(arg1 + 0x254) = v3_1
    *(arg1 + 0x264) = v2_1
    v0_1 = *(arg1 + 0x1c4)
    v3_1 = *(arg1 + 0x194)
    v2_1 = *(arg1 + 0x1a4)
    *(arg1 + 0x2b4) = *(arg1 + 0x1b4)
    *(arg1 + 0x2c4) = v0_1
    *(arg1 + 0x294) = v3_1
    *(arg1 + 0x2a4) = v2_1
    v0_1 = *(arg1 + 0x204)
    v3_1 = *(arg1 + 0x1d4)
    v2_1 = *(arg1 + 0x1e4)
    *(arg1 + 0x2f4) = *(arg1 + 0x1f4)
    *(arg1 + 0x304) = v0_1
    *(arg1 + 0x2d4) = v3_1
    *(arg1 + 0x2e4) = v2_1
    int32_t x24_1 = *(arg1 + 0x10)
    int64_t x0_14 = (**(arg1 + 0x114))(arg1 + 0x114)
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    result, v0_2, v1_2, v2_2, v3_2 = (**(arg1 + 0x14))(arg1 + 0x14)
    char x8_29
    
    if (x0_14 == result)
        result, v0_2, v1_2, v2_2, v3_2 = x0_14(arg1 + 0x114, arg1 + 0x14)
        
        if (x24_1 s< arg4 || (result.d & 1) == 0)
            x8_29 = 0
        else
            x8_29 = 1
    else
        x8_29 = 0
    
    *(arg1 + 0x32d) = x8_29
    *(arg1 + 0x10) = arg4
    *(arg1 + 0x329) = 1
    v0_2 = *(arg1 + 0x144)
    v3_2 = *(arg1 + 0x114)
    v2_2 = *(arg1 + 0x124)
    *(arg1 + 0x34) = *(arg1 + 0x134)
    *(arg1 + 0x44) = v0_2
    *(arg1 + 0x14) = v3_2
    *(arg1 + 0x24) = v2_2
    v0_2 = *(arg1 + 0x184)
    v3_2 = *(arg1 + 0x154)
    v2_2 = *(arg1 + 0x164)
    *(arg1 + 0x74) = *(arg1 + 0x174)
    *(arg1 + 0x84) = v0_2
    *(arg1 + 0x54) = v3_2
    *(arg1 + 0x64) = v2_2
    v0_2 = *(arg1 + 0x1c4)
    v3_2 = *(arg1 + 0x194)
    v2_2 = *(arg1 + 0x1a4)
    *(arg1 + 0xb4) = *(arg1 + 0x1b4)
    *(arg1 + 0xc4) = v0_2
    *(arg1 + 0x94) = v3_2
    *(arg1 + 0xa4) = v2_2
    v0_2 = *(arg1 + 0x204)
    v3_2 = *(arg1 + 0x1d4)
    v2_2 = *(arg1 + 0x1e4)
    *(arg1 + 0xf4) = *(arg1 + 0x1f4)
    *(arg1 + 0x104) = v0_2
    *(arg1 + 0xd4) = v3_2
    *(arg1 + 0xe4) = v2_2
else if (arg4 - *(arg1 + 0xc) s>= 0x1f4)
    int64_t x0_6 = (*var_160.q)(&var_160)
    result = (**(arg1 + 0x214))(arg1 + 0x214)
    
    if (x0_6 == result)
        result = x0_6(&var_160, arg1 + 0x214)
        
        if ((result.d & 1) != 0)
            *(arg1 + 0x32a) = 1

if (*(x26 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
