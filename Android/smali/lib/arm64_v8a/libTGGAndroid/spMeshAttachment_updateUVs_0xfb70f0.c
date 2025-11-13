// 函数: spMeshAttachment_updateUVs
// 地址: 0xfb70f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = sx.q(*(arg1 + 0x48))
_spFree(*(arg1 + 0xa8))
void* x0_2 = _spMalloc(x20 << 2, "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x80)
int32_t x8 = *(arg1 + 0x94)
float v1 = *(arg1 + 0x80)
float result = *(arg1 + 0x84)
*(arg1 + 0xa8) = x0_2
float v2_1
float v3_1
float v4_1

if (x8 == 0x10e)
    if (x20.d s>= 1)
        int64_t x8_2 = 0
        v4_1 = float.s(*(arg1 + 0x74)) / (*(arg1 + 0x8c) - result)
        v3_1 = float.s(*(arg1 + 0x70)) / (*(arg1 + 0x88) - v1)
        v1 = v1 - float.s(*(arg1 + 0x6c)) / v3_1
        v2_1 = float.s(*(arg1 + 0x7c)) / v3_1
        v3_1 = float.s(*(arg1 + 0x78)) / v4_1
        result = result - float.s(*(arg1 + 0x68)) / v4_1
        
        do
            int64_t x10_5 = x8_2 << 2
            x8_2 += 2
            void* x9_9 = x0_2 + x10_5
            *x9_9 = v1 + v2_1 * (fconvert.s(1f) - *(*(arg1 + 0xa0) + x10_5 + 4))
            *(x9_9 + 4) = result + v3_1 * (*(arg1 + 0xa0))[x8_2]
        while (x8_2 s< x20)
else
    float v5_1
    
    if (x8 == 0xb4)
        if (x20.d s>= 1)
            int32_t x9_10 = *(arg1 + 0x70)
            int32_t x10_6 = *(arg1 + 0x78)
            float v6_1 = float.s(x9_10) / (*(arg1 + 0x88) - v1)
            v2_1 = float.s(*(arg1 + 0x74)) / (*(arg1 + 0x8c) - result)
            v5_1 = float.s(*(arg1 + 0x6c)) / v2_1
            v2_1 = float.s(*(arg1 + 0x7c)) / v2_1
            int64_t x8_3 = 0
            result = result - v5_1
            v1 = v1 - float.s(x10_6 - x9_10 - *(arg1 + 0x68)) / v6_1
            v4_1 = fconvert.s(1f)
            
            do
                int64_t x10_7 = x8_3 << 2
                x8_3 += 2
                void* x9_14 = x0_2 + x10_7
                *x9_14 = v1 + float.s(x10_6) / v6_1 * (v4_1 - (*(arg1 + 0xa0))[x8_3])
                *(x9_14 + 4) = result + v2_1 * (v4_1 - *(*(arg1 + 0xa0) + x10_7 + 4))
            while (x8_3 s< x20)
    else if (x8 != 0x5a)
        if (x20.d s>= 1)
            int32_t x9_15 = *(arg1 + 0x74)
            int32_t x10_9 = *(arg1 + 0x7c)
            v2_1 = float.s(*(arg1 + 0x70)) / (*(arg1 + 0x88) - v1)
            v3_1 = float.s(x9_15) / (*(arg1 + 0x8c) - result)
            v5_1 = float.s(*(arg1 + 0x68)) / v2_1
            v2_1 = float.s(*(arg1 + 0x78)) / v2_1
            result = result - float.s(x10_9 - x9_15 - *(arg1 + 0x6c)) / v3_1
            int64_t x8_4 = 0
            
            do
                int64_t x10_10 = x8_4 << 2
                x8_4 += 2
                void* x9_19 = x0_2 + x10_10
                *x9_19 = v1 - v5_1 + v2_1 * (*(arg1 + 0xa0))[x8_4]
                *(x9_19 + 4) = result + float.s(x10_9) / v3_1 * *(*(arg1 + 0xa0) + x10_10 + 4)
            while (x8_4 s< x20)
    else if (x20.d s>= 1)
        int32_t x10_1 = *(arg1 + 0x70)
        int32_t x9_1 = *(arg1 + 0x74)
        int32_t x12_1 = *(arg1 + 0x78)
        int32_t x11_1 = *(arg1 + 0x7c)
        int64_t x8_1 = 0
        v4_1 = float.s(x9_1) / (*(arg1 + 0x88) - v1)
        v5_1 = float.s(x10_1) / (*(arg1 + 0x8c) - result)
        v1 = v1 - float.s(x11_1 - x9_1 - *(arg1 + 0x6c)) / v4_1
        result = result - float.s(x12_1 - x10_1 - *(arg1 + 0x68)) / v5_1
        
        do
            int64_t x10_4 = x8_1 << 2
            x8_1 += 2
            float* x9_6 = x0_2 + x10_4
            *x9_6 = v1 + float.s(x11_1) / v4_1 * *(*(arg1 + 0xa0) + x10_4 + 4)
            x9_6[1] = result + float.s(x12_1) / v5_1 * (fconvert.s(1f) - (*(arg1 + 0xa0))[x8_1])
        while (x8_1 s< x20)
return result
