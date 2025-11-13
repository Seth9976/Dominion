// 函数: _Z25FindBestInsertionNeighborR5RTreeRK4BBox
// 地址: 0xfa453c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_10 = entry_v8.q
void* result = *arg1

if (*(result + 0x20) != 0)
    uint128_t v0
    v0.d = *arg2
    uint128_t v1
    v1.d = *(arg2 + 4)
    uint128_t v3
    v3.d = *(arg2 + 8)
    uint128_t v2
    v2.d = *(arg2 + 0xc)
    uint128_t v4
    v4.d = *(arg2 + 0x10)
    uint128_t v5
    v5.d = *(arg2 + 0x14)
    float v6 = 0f
    int128_t v16_1 = vdup_laneq_s32(v0, 0)
    int128_t v7_1 = vdup_laneq_s32(v2, 0)
    int128_t v17_1 = vdup_laneq_s32(v4, 0)
    int128_t v18_1 = vdup_laneq_s32(v1, 0)
    int128_t v19_1 = vdup_laneq_s32(v5, 0)
    int128_t v20_1 = vdup_laneq_s32(v3, 0)
    int128_t v21
    v21.q = 0
    
    do
        int32_t* x11_1 = *(result + 0x20)
        void* x9_1 = result + 0x28
        int32_t* x10_2 = *x9_1
        int32_t x10_1
        int128_t v22
        int128_t v23
        int128_t v24
        int128_t v25
        int128_t v26
        int128_t v27
        
        if (x11_1[8] == 0 || x10_2[8] == 0)
            v22.d = *x11_1
            v23.d = x11_1[1]
            v25.d = x11_1[2]
            v24.d = x11_1[3]
            v26.d = x11_1[4]
            v27.d = x11_1[5]
            x9_1 = result + 0x28
            
            if (v22.d f> v0.d)
                v22.d = v22.d
            else
                v22.d = v0.d
            
            if (v24.d f< v2.d)
                v24.d = v24.d
            else
                v24.d = v2.d
            
            if (v23.d f> v1.d)
                v23.d = v23.d
            else
                v23.d = v1.d
            
            v22.d = v24.d f- v22.d
            
            if (v26.d f< v4.d)
                v24.d = v26.d
            else
                v24.d = v4.d
            
            v23.d = v24.d f- v23.d
            
            if (v25.d f> v3.d)
                v25.d = v25.d
            else
                v25.d = v3.d
            
            v24.d = *x10_2
            v26.d = x10_2[1]
            v22.d = vmax_f32(v22.d, v6)
            v23.d = vmax_f32(v23.d, v6)
            
            if (v27.d f< v5.d)
                v27.d = v27.d
            else
                v27.d = v5.d
            
            v25.d = v27.d f- v25.d
            v22.d = v22.d f* v23.d
            v27.d = x10_2[2]
            v23.d = x10_2[3]
            
            if (v24.d f> v0.d)
                v24.d = v24.d
            else
                v24.d = v0.d
            
            v25.d = vmax_f32(v25.d, v6)
            
            if (v23.d f< v2.d)
                v23.d = v23.d
            else
                v23.d = v2.d
            
            v22.d = v22.d f* v25.d
            v23.d = v23.d f- v24.d
            v24.d = x10_2[4]
            v25.d = x10_2[5]
            
            if (v26.d f> v1.d)
                v26.d = v26.d
            else
                v26.d = v1.d
            
            v23.d = vmax_f32(v23.d, v6)
            
            if (v24.d f< v4.d)
                v24.d = v24.d
            else
                v24.d = v4.d
            
            v24.d = v24.d f- v26.d
            
            if (v27.d f> v3.d)
                v26.d = v27.d
            else
                v26.d = v3.d
            
            if (v25.d f< v5.d)
                v25.d = v25.d
            else
                v25.d = v5.d
            
            v24.d = vmax_f32(v24.d, v6)
            v25.d = v25.d f- v26.d
            v25.d = vmax_f32(v25.d, v6)
            v23.d = v23.d f* v24.d
            v23.d = v23.d f* v25.d
            x10_1 = v22.d f< v23.d ? 1 : 0
        else
            v24.d = *x11_1
            v22.d = x11_1[1]
            v26.d = x11_1[2]
            v25.d = x11_1[3]
            v23.d = x11_1[4]
            v27.d = x11_1[5]
            v24:4.d = *x10_2
            v25:4.d = x10_2[3]
            v23:4.d = x10_2[4]
            v26:4.d = x10_2[2]
            int128_t v29_1 = vsub_f32(v24, v16_1)
            int128_t v28_1 = vcgt_f32(v24, v16_1)
            int128_t v29_2 = vadd_f32(v29_1, v21)
            v27:4.d = x10_2[5]
            int128_t v31_1 = vsub_f32(v7_1, v25)
            int128_t v28_2 = v29_2 & v28_1
            int128_t v30_1 = vcgt_f32(v7_1, v25)
            int128_t v31_2 = vadd_f32(v31_1, v28_2)
            v22:4.d = x10_2[1]
            int128_t v28_3 = vbsl_s8(v30_1, v31_2, v28_2)
            int128_t v31_3 = vsub_f32(v26, v20_1)
            int128_t v30_2 = vcgt_f32(v26, v20_1)
            int128_t v31_4 = vadd_f32(v31_3, v21)
            int128_t v24_1 = vsub_f32(v25, v24)
            int128_t v25_1 = vcgt_f32(v19_1, v27)
            v26 = vsub_f32(v27, v26)
            int128_t v30_3 = v31_4 & v30_2
            int128_t v25_2 = vbsl_s8(v25_1, vadd_f32(vsub_f32(v19_1, v27), v30_3), v30_3)
            int128_t v27_3 = vsub_f32(v22, v18_1)
            entry_v8 = vcgt_f32(v17_1, v23)
            int128_t v29_3 = vsub_f32(v17_1, v23)
            int128_t v31_5 = vcgt_f32(v22, v18_1)
            int128_t v22_1 = vsub_f32(v23, v22)
            int128_t v23_2 = vadd_f32(v27_3, v21) & v31_5
            v27 = vadd_f32(v24_1, v28_3)
            int128_t v23_3 = vbsl_s8(entry_v8, vadd_f32(v29_3, v23_2), v23_2)
            v24 = vmul_f32(v24_1, v22_1, 0)
            int128_t v22_2 = vadd_f32(v22_1, v23_3)
            v25 = vadd_f32(v26, v25_2)
            uint128_t v22_5 =
                vsub_f32(vmul_f32(vmul_f32(v27, v22_2, 0), v25, 0), vmul_f32(v24, v26, 0))
            x10_1 = vcgt_f32(vdup_laneq_s32(v22_5, 1), v22_5).d
        void* x8_1
        
        if ((x10_1 & 1) != 0)
            x8_1 = result + 0x20
        else
            x8_1 = x9_1
        
        result = *x8_1
    while (*(result + 0x20) != 0)

entry_v8.q = var_10
return result
