// 函数: _Z16BranchNodeCreateP9RTreeNodeS0_
// 地址: 0xfa4294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *gRTreeGlobals
*(gRTreeGlobals + 0x14) += 1
int128_t v0
int128_t v1
int128_t v3
int128_t v4

if (result == 0)
    int64_t* x0_1
    x0_1, v0, v1, v3, v4 = XMalloc(8 | (0xfffffff & (*(gRTreeGlobals + 0x10) * 3)) << 4)
    *x0_1 = *(gRTreeGlobals + 8)
    int32_t x9_2 = *(gRTreeGlobals + 0x10)
    result = *gRTreeGlobals
    *(gRTreeGlobals + 8) = x0_1
    
    if (x9_2 s>= 1)
        int64_t i = 0
        void* result_2 = &x0_1[1]
        
        do
            void* result_1 = result_2
            *result_2 = result
            result_2 += 0x30
            i += 1
            result = result_1
        while (i s< sx.q(*(gRTreeGlobals + 0x10)))
        
        result = result_2 - 0x30
    
    *gRTreeGlobals = result

*gRTreeGlobals = *result
v0.q = *arg1
v1.q = *arg2
v3.q = *(arg1 + 0xc)
v4.q = *(arg2 + 0xc)
int32_t v2 = *(arg1 + 8)
uint64_t v0_1 = vbsl_s8(vcgt_f32(v1, v0), v0, v1)
v1.d = *(arg2 + 8)
uint64_t v3_1 = vbsl_s8(vcgt_f32(v3, v4), v3, v4)
v4.d = *(arg1 + 0x14)
int128_t v5_1
v5_1.d = *(arg2 + 0x14)

if (v2 f< v1.d)
    v1.d = v2
else
    v1.d = v1.d

result[4] = arg1

if (v4.d f> v5_1.d)
    v2 = v4.d
else
    v2 = v5_1.d

*result = v0_1
result[1].d = v1.d
*(result + 0xc) = v3_1
*(result + 0x14) = v2
*(arg1 + 0x18) = result
result[5] = arg2
*(arg2 + 0x18) = result
return result
