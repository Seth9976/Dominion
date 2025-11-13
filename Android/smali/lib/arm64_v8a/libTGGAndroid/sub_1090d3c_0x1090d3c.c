// 函数: sub_1090d3c
// 地址: 0x1090d3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
double v14
double var_98 = v14
double v13
double var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
double v9
double var_70 = v9
double v8
double var_68 = v8
int64_t* x26 = *(arg2 + 8)
int64_t x22 = *(arg1 + 0x38)
void* x9 = *(arg2 + 0x18)
double v0
double v1

if (x26[x22] == 0)
    int64_t x23_1 = (x22 & 0xffffffff) << 0x20 s>> 0x1d
    int32_t x27_1 = *arg2
    int64_t x19_1 = *(x9 + 8)
    int64_t x24_1 = sx.q(x22.d)
    int64_t x8_5 = *(*(*(*(arg1 + 0x68) + 8) + 0x30) + x23_1)
    int64_t x8_6
    
    if (x8_5 s< 0)
        x8_6 = x8_5 + 1
    else
        x8_6 = x8_5
    
    int64_t x25_1 = x8_6 s>> 1
    int64_t x0_3
    x0_3, v0, v1 = malloc((0x100000000 + (x25_1 << 0x20)) s>> 0x1e)
    *(x26 + x23_1) = x0_3
    int64_t x9_2
    int64_t x19_2
    int64_t x24_2
    
    if (x25_1.d s<= 0)
        x26 = *(arg2 + 8)
        x9_2 = x24_1
        x19_2 = x26[x24_1]
        x24_2 = 0
    else
        v0.d = 0x321ee9ee
        v11.d = float.s(sx.d(x19_1))
        v1.d = fconvert.s(0.5f)
        v9.d = v11.d f* v1.d
        v0.d = v11.d f* 9.24999988e-09f
        v0.d = v0.d f* v9.d
        v8 = atan(fconvert.d(v0.d))
        double v0_1
        v0_1.d = 0x39c1fc8f
        v0_1.d = v11.d f* 0.000369999994f
        v0, v1 = atan(fconvert.d(v0_1.d))
        v1.d = float.s(x25_1.d)
        v1.d = fconvert.s(1f) f/ v1.d
        v1.d = v9.d f* v1.d
        int32_t var_a4_1 = v1.d
        v1.d = v11.d f* 4.99999987e-05f
        x26 = *(arg2 + 8)
        v0 = float.d(sx.q(x27_1))
            / vfma_f64(vfma_f64(fconvert.d(v1.d), v8, 2.2400000095367432), v0, 13.100000381469727)
        x19_2 = x26[x24_1]
        x24_2 = x25_1 & 0xffffffff
        v0.d = fconvert.s(v0)
        int64_t x28_1 = 0
        v14 = fconvert.d(v0.d)
        
        while (true)
            v1.d = var_a4_1
            v0.d = float.s(x28_1.d)
            v15.d = v1.d f* v0.d
            v0.d = v15.d f* 0.000739999989f
            v9 = atan(fconvert.d(v0.d)) * 13.100000381469727
            double v0_2
            v0_2.d = v15.d f* 1.84999998e-08f
            v0_2.d = v15.d f* v0_2.d
            v0, v1 = atan(fconvert.d(v0_2.d))
            v1.d = v15.d f* 9.99999975e-05f
            uint32_t temp0_4 =
                vcvtmd_s32_f64((vfma_f64(v9, v0, 2.2400000095367432) + fconvert.d(v1.d)) * v14)
            uint32_t x8_9
            
            if (x27_1 s> temp0_4)
                x8_9 = temp0_4
            else
                x8_9 = x27_1 - 1
            
            *(x19_2 + (x28_1 << 2)) = x8_9
            
            if (x24_2 - 1 == x28_1)
                break
            
            x27_1 = *arg2
            x28_1 += 1
        
        x9_2 = x24_1
    
    *(x19_2 + (x24_2 << 2)) = 0xffffffff
    arg2[x9_2 + 4] = x25_1.d
    
    if (arg3 != 0)
        goto label_1090d98
else if (arg3 != 0)
label_1090d98:
    v1.d = *(x9 + 0x1c)
    v0.d = *(arg3 + (sx.q(arg2[1]) << 2))
    v1.d = float.s(v1.d)
    vorbis_lsp_to_curve(arg4, x26[x22], zx.q(arg2[x22 + 4]), zx.q(*arg2), arg3, v0, v1)
    return 1
memset(arg4, 0, sx.q(arg2[x22 + 4]) << 2)
return 0
