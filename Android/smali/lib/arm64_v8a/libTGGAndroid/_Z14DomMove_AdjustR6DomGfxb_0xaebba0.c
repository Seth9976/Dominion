// 函数: _Z14DomMove_AdjustR6DomGfxb
// 地址: 0xaebba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(arg1 + 0x9c))
int64_t x15 = *(gDomClient + 0x205e0)

if (*(x15 + x12 * 0x21d8 + 0x5c) == 6)
    return 

int64_t x11_1 = *(arg1 + 0xc8)
int32_t x16_1 = 0x15
int32_t x13_1 = *(arg1 + 0xa0)
int32_t x9_2 = *(arg1 + 0xa4)
int32_t x8_4 = *(arg1 + 0xb0)
DomGfx& x19_1 = arg1
int32_t x20_1 = arg2.d
int32_t x10_1

if (*(x15 + x12 * 0x21d8 + 0x21d0) == *(gDomClient + 0x1f8e4))
    x10_1 = 0x15
else
    x10_1 = 6

int128_t v0
v0.q = 0
v0:8.q = 0
int128_t var_150
__builtin_memset(&var_150, 0, 0x20)
int128_t var_130
__builtin_memset(&var_130, 0, 0x58)
var_150:8.d = x13_1
var_150:0xc.d = x8_4
int128_t var_140
var_140.q = x11_1
var_150.d = x10_1
var_150:4.d = x9_2
DomGfx& var_d8_1 = arg1
uint64_t x12_1

if (x9_2 != 6)
    if (x9_2 == 0x474)
        x9_2 = *(x15 + x12 * 0x21d8 + 0x68)
        v0.q = 0
        v0:8.q = 0
        x10_1 = 0x1d
        x11_1 = 0
        var_150:8.d = x13_1
        var_150:0xc.d = x8_4
        __builtin_memset(&var_140, 0, 0x70)
        var_150.d = 0x1d
        var_150:4.d = x9_2
    
    x12_1 = zx.q(*(x19_1 + 0x1f78))
    
    if (x12_1.d != 0 && (x20_1 & 1) == 0)
        goto label_aebd08
    
    goto label_aebd1c

int32_t entry_x17
int128_t v1
int128_t v2
int128_t v3
arg1, x16_1, entry_x17, v0, v1, v2, v3 =
    BoardAreaPile(CardWhat(gDomClient + 0x20728, zx.q(*(x19_1 + 0x98))))
x8_4 = *(x19_1 + 0xb0)
x9_2 = *(arg1 + 0x5c)
x11_1 = 0
v0.q = 0
v0:8.q = 0
x10_1 = 7
x13_1 = -1
__builtin_memset(&var_140, 0, 0x68)
var_150.d = 7
var_150:4.d = x9_2
var_150:8.d = 0xffffffff
var_150:0xc.d = x8_4
DomGfx& var_d8_2 = x19_1
x12_1 = zx.q(*(x19_1 + 0x1f78))

if (x12_1.d == 0 || (x20_1 & 1) != 0)
label_aebd1c:
    
    if (x12_1.d != 0 || *(x19_1 + 0x3b0) != 1 || *(x19_1 + 0x3b8) != x10_1
            || *(x19_1 + 0x3c0) != x13_1 || *(x19_1 + 0x3c4) != x8_4 || *(x19_1 + 0x3c8) != x11_1
            || *(x19_1 + 0x3bc) != x9_2)
        DomMoveCallback* x1_1
        DomLoc* x2_1
        bool x3_1
        int128_t var_d0
        
        if ((x20_1 & 1) == 0)
            if (*(x19_1 + 0x2c) != 0 || *(x19_1 + 0x128) == 0)
                v0.d = *(x19_1 + 0xc)
                
                if (not(v0.d f== 0f))
                    int128_t var_3c_1 = *(x19_1 + 0x1c)
                    int128_t var_4c_1 = *(x19_1 + 0xc)
                    *(x19_1 + 0x308) = 0
                    v2 = var_d0
                    int128_t var_b0
                    *(x19_1 + 0x32c) = var_b0
                    int128_t var_c0
                    *(x19_1 + 0x31c) = var_c0
                    *(x19_1 + 0x30c) = v2
                    int128_t var_80
                    *(x19_1 + 0x35c) = var_80
                    int128_t var_70
                    *(x19_1 + 0x36c) = var_70
                    int128_t var_90
                    *(x19_1 + 0x34c) = var_90
                    int128_t var_a0
                    *(x19_1 + 0x33c) = var_a0
                    *(x19_1 + 0x3ac) = var_3c_1:0xc.d
                    int128_t var_50
                    *(x19_1 + 0x38c) = var_50
                    *(x19_1 + 0x39c) = var_4c_1
                    int128_t var_60
                    *(x19_1 + 0x37c) = var_60
                    *(x19_1 + 0x3b0) = 0
                    v2 = var_d0
                    *(x19_1 + 0x3c4) = var_c0
                    *(x19_1 + 0x3d4) = var_b0
                    *(x19_1 + 0x3b4) = v2
                    *(x19_1 + 0x404) = var_80
                    *(x19_1 + 0x414) = var_70
                    *(x19_1 + 0x3e4) = var_a0
                    *(x19_1 + 0x3f4) = var_90
                    *(x19_1 + 0x454) = var_3c_1:0xc.d
                    *(x19_1 + 0x434) = var_50
                    *(x19_1 + 0x444) = var_4c_1
                    *(x19_1 + 0x424) = var_60
                    *(x19_1 + 0x1f78) = 0
            
            var_d0 = zx.o(0)
            int128_t var_c0_2 = zx.o(0)
            var_d0.q = x19_1
            var_d0:8.d = 0
            var_c0_2:8.d = 0x100
            x1_1 = &var_d0
            x2_1 = &var_150
            x3_1 = false
        else
            x1_1 = &var_d0
            x2_1 = &var_150
            x3_1 = true
            var_d0 = zx.o(0)
            int128_t var_c0_1 = zx.o(0)
            var_d0.q = x19_1
            var_d0:8.d = 0
            var_c0_1:8.d = 0x100
        DomMove_AdjustMove(x19_1 + 0x258, x1_1, x2_1, x3_1)
else
label_aebd08:
    
    if (x12_1.d s>= 1)
        int64_t i_4
        
        if (x12_1.d != 1)
            i_4 = x12_1 & 0xfffffffe
            void* __offset(DomGfx, 0x564) x13_2 = x19_1 + 0x564
            int64_t i_3 = i_4
            int64_t i
            
            do
                int32_t x15_1 = *(x13_2 - 0xec)
                
                if (x15_1 == 1)
                    x16_1 = *(x13_2 - 0xe4)
                
                int32_t x0_3 = *(x13_2 - 0x14)
                
                if (x0_3 == 1)
                    entry_x17 = *(x13_2 - 0xc)
                
                arg1 = zx.q(x0_3 == 1 ? 1 : 0)
                int32_t x15_3 = (x16_1 == x10_1 ? 1 : 0) & (x15_1 == 1 ? 1 : 0)
                int32_t x16_2 = entry_x17 == x10_1 ? 1 : 0
                
                if (x15_3 == 1)
                    entry_x17 = *(x13_2 - 0xe0)
                
                x16_1 = x16_2 & arg1.d
                
                if (x16_1 != 0)
                    arg1 = zx.q(*(x13_2 - 8))
                
                entry_x17 = (entry_x17 != x9_2 ? 1 : 0) | (x15_3 ^ 1)
                int32_t x15_5 = arg1.d == x9_2 ? 1 : 0
                
                if ((entry_x17 & 1) == 0)
                    *(x13_2 - 0xd8) = x8_4
                    
                    if ((x15_5 & x16_1) != 0)
                        *x13_2 = x8_4
                else if ((x15_5 & x16_1) != 0)
                    *x13_2 = x8_4
                
                i = i_3
                i_3 -= 2
                x13_2 += 0x1b0
            while (i != 2)
            
            if (i_4 != x12_1)
                goto label_aebf10
        else
            i_4 = 0
        label_aebf10:
            int64_t i_2 = x12_1 - i_4
            int32_t* x11_3 = x19_1 + i_4 * 0xd8 + 0x48c
            int64_t i_1
            
            do
                if (x11_3[-5] == 1 && x11_3[-3] == x10_1 && x11_3[-2] == x9_2)
                    *x11_3 = x8_4
                
                i_1 = i_2
                i_2 -= 1
                x11_3 = &x11_3[0x36]
            while (i_1 != 1)
