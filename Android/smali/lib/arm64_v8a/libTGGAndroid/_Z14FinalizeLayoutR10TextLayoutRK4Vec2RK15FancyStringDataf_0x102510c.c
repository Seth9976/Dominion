// 函数: _Z14FinalizeLayoutR10TextLayoutRK4Vec2RK15FancyStringDataf
// 地址: 0x102510c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_20 = v8

if (*(arg1 + 0x28) == 0)
    return 

TextLayout& x19_1 = arg1
int128_t v0
float v1_1
arg1, v0, v1_1 = AlignmentGetOffsetPercent(zx.q(*(arg3 + 0x1c)))

if (*(x19_1 + 0x28) s< 1)
    *(x19_1 + 0x30) = *RECT0
    return 

v0.d = *(arg2 + 4)
void* i = *(x19_1 + 0x20)
v0.d = v0.d f- arg4.q.d
v0.d = v1_1 f* v0.d
uint64_t i_2
void* x10_1

do
    *(i + 0x14) = v0.d f+ *(i + 0x14)
    i_2 = zx.q(*(x19_1 + 0x28))
    x10_1 = *(x19_1 + 0x20)
    i += 0x40
while (i u<= x10_1 + (sx.q(i_2.d) << 6) - 0x40)

*(x19_1 + 0x30) = *RECT0

if (i_2.d s< 1)
    return 

v0.d = *RECT0
v1_1 = *(RECT0 + 4)
int32_t v2_1 = *(RECT0 + 8)
int32_t v3_1 = *(RECT0 + 0xc)
int32_t* x9_1 = x10_1 + 0x14
uint64_t i_1

do
    float v4_1 = x9_1[1]
    
    if (not(v4_1 == 0f))
        float v5_1 = x9_1[2]
        
        if (not(v5_1 == 0f))
            int32_t x11_4 = x9_1[-5]
            int32_t x10_2 = *x9_1
            
            if (x11_4 == 3)
                x10_2 = float.s(x10_2) f- x9_1[5]
            else if (x11_4 == 2)
                x10_2 = float.s(x10_2) f- x9_1[4]
            else if (x11_4 == 0)
                x10_2 = float.s(x10_2) f- x9_1[3]
            
            float v7_1 = x9_1[-1]
            float v19_1 = *(x19_1 + 0x30)
            float v16_1 = *(x19_1 + 0x34)
            float v20_1 = *(x19_1 + 0x38)
            float v17_1 = *(x19_1 + 0x3c)
            float v6_1 = float.s(x10_2)
            float v18_1 = v7_1 + v4_1
            v4_1 = v5_1 + v6_1
            
            if (not(v19_1 f!= v0.d) && not(v16_1 != v1_1) && not(v20_1 f!= v2_1) && v17_1 f== v3_1)
                *(x19_1 + 0x30) = v7_1
                *(x19_1 + 0x34) = x10_2
                *(x19_1 + 0x38) = v18_1
                *(x19_1 + 0x3c) = v4_1
            else if (v7_1 f!= v0.d || v1_1 != v6_1 || v18_1 f!= v2_1 || not(v4_1 f== v3_1))
                v5_1 = v19_1 < v7_1 ? v19_1 : v7_1
                
                v7_1 = v20_1 > v18_1 ? v20_1 : v18_1
                
                if (v16_1 < v6_1)
                    v6_1 = v16_1
                
                if (v17_1 > v4_1)
                    v4_1 = v17_1
                
                *(x19_1 + 0x30) = v5_1
                *(x19_1 + 0x34) = v6_1
                *(x19_1 + 0x38) = v7_1
                *(x19_1 + 0x3c) = v4_1
    
    i_1 = i_2
    i_2 -= 1
    x9_1 = &x9_1[0x10]
while (i_1 != 1)
