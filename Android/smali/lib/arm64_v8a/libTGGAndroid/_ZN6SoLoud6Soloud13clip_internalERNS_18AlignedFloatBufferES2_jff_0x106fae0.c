// 函数: _ZN6SoLoud6Soloud13clip_internalERNS_18AlignedFloatBufferES2_jff
// 地址: 0x106fae0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x20a0)
int32_t entry_x3
arg5 = (arg5 - arg4) / float.s(entry_x3)
uint32_t j_4 = (entry_x3 + 3) u>> 2
float v2
float v5
float v6

if ((zx.d(*(arg1 + 0x20b4)) & 1) != 0)
    if (x9 != 0 && j_4 != 0)
        int32_t i = 0
        int32_t x10_2 = 0
        int32_t x11_2 = 0
        
        do
            int32_t x16_3 = 0
            uint32_t j_3 = j_4
            float v3_1 = arg4
            uint32_t j
            
            do
                int64_t x3_5 = *arg2
                int32_t x4_4 = x10_2 + x16_3
                v2 = v3_1 * *(x3_5 + (zx.q(x4_4) << 2))
                
                if (v2 <= float.s(0xbfd33333))
                    v2 = float.s(-0x408382aa)
                else if (v2 >= float.s(0x3fd33333))
                    v2 = float.s(0x3f7c7d56)
                else
                    v2 = v2 * float.s(0x3f5eb852) + v2 * v2 * v2 * float.s(0xbdcccccd)
                
                float v4 = arg5 + v3_1
                v3_1 = v4 * *(x3_5 + (zx.q(x4_4 + 1) << 2))
                
                if (v3_1 <= float.s(0xbfd33333))
                    v3_1 = float.s(-0x408382aa)
                else if (v3_1 >= float.s(0x3fd33333))
                    v3_1 = float.s(0x3f7c7d56)
                else
                    v3_1 = v3_1 * float.s(0x3f5eb852) + v3_1 * v3_1 * v3_1 * float.s(0xbdcccccd)
                
                v5 = arg5 + v4
                v4 = v5 * *(x3_5 + (zx.q(x4_4 + 2) << 2))
                
                if (v4 <= float.s(0xbfd33333))
                    v4 = float.s(-0x408382aa)
                else if (v4 >= float.s(0x3fd33333))
                    v4 = float.s(0x3f7c7d56)
                else
                    v4 = v4 * float.s(0x3f5eb852) + v4 * v4 * v4 * float.s(0xbdcccccd)
                
                v5 = arg5 + v5
                v6 = v5 * *(x3_5 + (zx.q(x4_4 + 3) << 2))
                
                if (v6 <= float.s(0xbfd33333))
                    v6 = float.s(-0x408382aa)
                else if (v6 >= float.s(0x3fd33333))
                    v6 = float.s(0x3f7c7d56)
                else
                    v6 = v6 * float.s(0x3f5eb852) + v6 * v6 * v6 * float.s(0xbdcccccd)
                
                j = j_3
                j_3 -= 1
                *(*arg3 + (zx.q(x11_2 + x16_3) << 2)) = v2 * *(arg1 + 0x20bc)
                int32_t x4_2 = x11_2 + x16_3
                *(*arg3 + (zx.q(x4_2 + 1) << 2)) = v3_1 * *(arg1 + 0x20bc)
                v3_1 = arg5 + v5
                *(*arg3 + (zx.q(x4_2 + 2) << 2)) = v4 * *(arg1 + 0x20bc)
                x16_3 += 4
                *(*arg3 + (zx.q(x4_2 + 3) << 2)) = v6 * *(arg1 + 0x20bc)
            while (j != 1)
            i += 1
            x10_2 += x16_3
            x11_2 += x16_3
        while (i u< *(arg1 + 0x20a0))
else if (x9 != 0 && j_4 != 0)
    int32_t i_1 = 0
    int32_t x10_1 = 0
    int32_t x11_1 = 0
    v2 = fconvert.s(1f)
    float v3 = fconvert.s(-1f)
    
    do
        int32_t x12_1 = 0
        uint32_t j_2 = j_4
        float v4_1 = arg4
        uint32_t j_1
        
        do
            int64_t x16_1 = *arg2
            int32_t x14_1 = x10_1 + x12_1
            v6 = *(arg1 + 0x20bc)
            float v16 = *(x16_1 + (zx.q(x14_1 + 1) << 2))
            v5 = arg5 + v4_1
            float v17 = *(x16_1 + (zx.q(x14_1 + 2) << 2))
            int64_t x17_3 = *arg3
            v4_1 = v4_1 * *(x16_1 + (zx.q(x14_1) << 2))
            float temp0_1 = vmin_f32(v4_1, v2)
            
            v4_1 = v4_1 <= v3 ? v3 : temp0_1
            
            int32_t x15_1 = x11_1 + x12_1
            float v7 = arg5 + v5
            v4_1 = v4_1 * v6
            v5 = v5 * v16
            v6 = *(x16_1 + (zx.q(x14_1 + 3) << 2))
            *(x17_3 + (zx.q(x15_1) << 2)) = v4_1
            float temp0_2 = vmin_f32(v5, v2)
            
            v5 = v5 <= v3 ? v3 : temp0_2
            
            v4_1 = arg5 + v7
            *(*arg3 + (zx.q(x15_1 + 1) << 2)) = v5 * *(arg1 + 0x20bc)
            v5 = *(arg1 + 0x20bc)
            v7 = v7 * v17
            int64_t x14_4 = *arg3
            float temp0_3 = vmin_f32(v7, v2)
            
            v16 = v7 <= v3 ? v3 : temp0_3
            
            *(x14_4 + (zx.q(x15_1 + 2) << 2)) = v16 * v5
            v5 = *(arg1 + 0x20bc)
            v6 = v4_1 * v6
            int64_t x14_5 = *arg3
            float temp0_4 = vmin_f32(v6, v2)
            
            v6 = v6 <= v3 ? v3 : temp0_4
            
            v4_1 = arg5 + v4_1
            j_1 = j_2
            j_2 -= 1
            x12_1 += 4
            *(x14_5 + (zx.q(x15_1 + 3) << 2)) = v6 * v5
        while (j_1 != 1)
        i_1 += 1
        x10_1 += x12_1
        x11_1 += x12_1
    while (i_1 u< *(arg1 + 0x20a0))
