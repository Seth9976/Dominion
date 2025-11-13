// 函数: _Z25Draw3DGetInstanceMatrices14MaterialAttribP4Mat4
// 地址: 0xc92a0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_7 = *(gDraw3DData + "center_landscape_col_2")
int64_t x9 = sx.q(*(gDraw3DData + "Off"))
Mat4* x20 = arg2
int32_t i_6

i_6 = i_7 s> 1 ? i_7 : 1

int128_t v0
int128_t v2
int128_t v3

if (arg1 == 0x60)
    uint64_t i_3 = zx.q(i_6)
    int32_t* x9_2 = gDraw3DData + (x9 << 2) + "s"
    uint64_t i
    
    do
        int64_t x11_1 = sx.q(*x9_2)
        x9_2 = &x9_2[1]
        i = i_3
        i_3 -= 1
        void* x11_2 = gDraw3DData + x11_1 * 0x1a0
        v0 = *(x11_2 + 0x5d0)
        v2 = *(x11_2 + 0x5b0)
        v3 = *(x11_2 + 0x5a0)
        *(x20 + 0x20) = *(x11_2 + 0x5c0)
        *(x20 + 0x30) = v0
        *x20 = v3
        *(x20 + 0x10) = v2
        x20 += 0x40
    while (i != 1)
else
    int128_t var_c0
    int128_t var_80
    int128_t v1
    
    if (arg1 != 0x61)
        uint64_t i_5 = zx.q(i_6)
        int32_t* x23_2 = gDraw3DData + (x9 << 2) + "s"
        uint64_t i_1
        
        do
            int64_t x8_4 = sx.q(*x23_2)
            x23_2 = &x23_2[1]
            void* x8_5 = gDraw3DData + x8_4 * 0x1a0
            v2 = *(x8_5 + 0x5b0)
            int128_t var_60_2 = *(x8_5 + 0x5c0)
            int128_t var_50_2 = *(x8_5 + 0x5d0)
            var_80 = *(x8_5 + 0x5a0)
            int128_t var_70_2 = v2
            Mat4Multiply(gDraw3DData + 0x188, &var_80)
            v0, v1, v2, v3 = Mat4Multiply(gDraw3DData + 0x208, &var_c0)
            i_1 = i_5
            i_5 -= 1
            int128_t var_e0
            *(x20 + 0x20) = var_e0
            int128_t var_d0
            *(x20 + 0x30) = var_d0
            int128_t var_100
            *x20 = var_100
            int128_t var_f0
            *(x20 + 0x10) = var_f0
            x20 += 0x40
        while (i_1 != 1)
    else
        uint64_t i_4 = zx.q(i_6)
        int32_t* x23_1 = gDraw3DData + (x9 << 2) + "s"
        uint64_t i_2
        
        do
            int64_t x8_1 = sx.q(*x23_1)
            x23_1 = &x23_1[1]
            void* x8_2 = gDraw3DData + x8_1 * 0x1a0
            v2 = *(x8_2 + 0x5b0)
            int128_t var_60_1 = *(x8_2 + 0x5c0)
            int128_t var_50_1 = *(x8_2 + 0x5d0)
            var_80 = *(x8_2 + 0x5a0)
            int128_t var_70_1 = v2
            v0, v1, v2, v3 = Mat4Multiply(gDraw3DData + 0x188, &var_80)
            v2 = var_c0
            i_2 = i_4
            i_4 -= 1
            int128_t var_a0
            *(x20 + 0x20) = var_a0
            int128_t var_90
            *(x20 + 0x30) = var_90
            *x20 = v2
            int128_t var_b0
            *(x20 + 0x10) = var_b0
            x20 += 0x40
        while (i_2 != 1)
return zx.q(i_6)
