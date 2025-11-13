// 函数: _Z16UpdateBestColorsRK7MeshMapPiP10ColorRgbaIRK5Vec3IS4_
// 地址: 0xc1e45c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg4
int64_t i = 0
int64_t var_10 = v0.q
v0.d = 0x40000000
v0:4.d = 0x40000000
int128_t v1
v1.d = fconvert.s(1f)
v1:4.d = fconvert.s(1f)
int128_t v2
v2.q = 0
int32_t var_8 = *(arg4 + 8)

do
    int64_t x11_2 = sx.q(*arg2)
    int64_t x11_3
    void* x12_5
    int128_t v3
    int128_t v4
    int64_t x13_1
    
    if (x11_2.d == 0xffffffff)
        x11_3 = zx.q(*(&var_10 + i))
    label_c1e50c:
        *arg2 = x11_3.d
        *arg3 = *(arg5 + i)
        x13_1 = sx.q(arg2[1])
        x12_5 = arg1 + muls.dp.d(x11_3.d, 0xc)
        
        if (x13_1.d == 0xffffffff)
            arg2[1] = x11_3.d
            *(arg3 + 4) = *(arg5 + i)
        else
        label_c1e52c:
            int32_t* x13_2 = arg1 + x13_1 * 0xc
            v3.d = *x13_2
            v4.d = x13_2[1]
            v3:4.d = *x12_5
            v4:4.d = *(x12_5 + 4)
            int128_t v3_4 = vsub_f32(v0, v3)
            int128_t v3_5 = vmul_f32(v3_4, v3_4, 0)
            int128_t v4_3 = vsub_f32(v2, v4)
            uint128_t v3_6 = vadd_f32(v3_5, vmul_f32(v4_3, v4_3, 0))
            
            if ((vcgt_f32(v3_6, vdup_laneq_s32(v3_6, 1)).d & 1) != 0)
                arg2[1] = x11_3.d
                *(arg3 + 4) = *(arg5 + i)
    else
        int32_t* x12_1 = arg1 + x11_2 * 0xc
        x11_3 = sx.q(*(&var_10 + i))
        v3.d = *x12_1
        v4.d = x12_1[1]
        int32_t* x12_2 = arg1 + x11_3 * 0xc
        v3:4.d = *x12_2
        v4:4.d = x12_2[1]
        int128_t v3_1 = vsub_f32(v2, v3)
        int128_t v3_2 = vmul_f32(v3_1, v3_1, 0)
        int128_t v4_1 = vsub_f32(v2, v4)
        uint128_t v3_3 = vadd_f32(v3_2, vmul_f32(v4_1, v4_1, 0))
        
        if ((vcgt_f32(v3_3, vdup_laneq_s32(v3_3, 1)).d & 1) != 0)
            goto label_c1e50c
        
        x13_1 = sx.q(arg2[1])
        x12_5 = arg1 + muls.dp.d(x11_3.d, 0xc)
        
        if (x13_1.d != 0xffffffff)
            goto label_c1e52c
        
        arg2[1] = x11_3.d
        *(arg3 + 4) = *(arg5 + i)
    int64_t x13_5 = sx.q(arg2[2])
    int32_t x13_7
    
    if (x13_5.d != 0xffffffff)
        int32_t* x13_6 = arg1 + x13_5 * 0xc
        v3.d = *x13_6
        v4.d = x13_6[1]
        v3:4.d = *x12_5
        v4:4.d = *(x12_5 + 4)
        int128_t v3_7 = vsub_f32(v2, v3)
        int128_t v3_8 = vmul_f32(v3_7, v3_7, 0)
        int128_t v4_5 = vsub_f32(v1, v4)
        uint128_t v3_9 = vadd_f32(v3_8, vmul_f32(v4_5, v4_5, 0))
        x13_7 = vcgt_f32(v3_9, vdup_laneq_s32(v3_9, 1)).d
    
    if (x13_5.d == 0xffffffff || (x13_7 & 1) != 0)
        arg2[2] = x11_3.d
        *(arg3 + 8) = *(arg5 + i)
    
    int64_t x13_9 = sx.q(arg2[3])
    int32_t x12_8
    
    if (x13_9.d != 0xffffffff)
        int32_t* x13_10 = arg1 + x13_9 * 0xc
        v3.d = *x13_10
        v4.d = x13_10[1]
        v3:4.d = *x12_5
        v4:4.d = *(x12_5 + 4)
        int128_t v3_10 = vsub_f32(v0, v3)
        int128_t v3_11 = vmul_f32(v3_10, v3_10, 0)
        int128_t v4_7 = vsub_f32(v1, v4)
        uint128_t v3_12 = vadd_f32(v3_11, vmul_f32(v4_7, v4_7, 0))
        x12_8 = vcgt_f32(v3_12, vdup_laneq_s32(v3_12, 1)).d
    
    if (x13_9.d == 0xffffffff || (x12_8 & 1) != 0)
        arg2[3] = x11_3.d
        *(arg3 + 0xc) = *(arg5 + i)
    
    i += 4
while (i != 0xc)
