// 函数: _Z21VersionUI2Asset_V0_V1R6UI2Def
// 地址: 0x100e9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8
double var_70 = v8
int32_t var_470[0x100]
memset(&var_470, 0, 0x400)
int64_t var_c70[0xff]
int64_t result = memset(&var_c70, 0, 0x800)

if (*(arg1 + 8) s>= 1)
    int64_t i = 0
    int64_t x28_1 = 0
    
    do
        int64_t x8_3 = zx.q(x28_1.d) << 0x20 s>> 0x1e
        AttribTable* x0_2 = *gUI2AttribTable
        DefMap* x2_1 = *macro_ptr_RectF
        *(&var_470 + x8_3) -= 1
        AttribMap* x20_1 = *arg1 + i * 0x18
        int64_t* x0_3
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        x0_3, v0_1, v1_1, v2_1 = AttribMapGetDef(x0_2, x20_1, x2_1, 0x76)
        v0_1.q = var_c70[sx.q(x28_1.d)]
        v1_1.q = *x0_3
        v2_1.q = x0_3[1]
        AttribTable* x0_4 = *gUI2AttribTable
        v8 = vadd_f32(v1_1, v0_1)
        double v0_2 = vadd_f32(v0_1, v2_1)
        double var_c80 = v8
        double var_c78_1 = v0_2
        result = AttribMapSetDef(x0_4, x20_1, 0x76, &var_c80)
        int32_t x9_3 = *(x20_1 + 0x10)
        int64_t x8_5 = sx.q(x28_1.d + 1)
        var_470[sx.q(x28_1.d + 1)] = x9_3
        var_c70[sx.q(x28_1.d + 1)] = v8
        
        if (x28_1.d + 1 s< 1 || x9_3 != 0)
            x28_1 = x8_5
        else
            int32_t j
            
            do
                x28_1 = x8_5 - 1
                
                if (x8_5 s< 2)
                    break
                
                void var_474
                j = *(&var_474 + (x8_5 << 2))
                x8_5 = x28_1
            while (j == 0)
        
        i += 1
    while (i s< sx.q(*(arg1 + 8)))

return result
