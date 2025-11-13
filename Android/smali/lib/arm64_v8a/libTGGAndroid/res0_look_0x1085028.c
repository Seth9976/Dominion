// 函数: res0_look
// 地址: 0x1085028
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = 1
int64_t* result = calloc(1, 0x50)
void* x27 = *(*(arg1 + 8) + 0x30)
*result = arg2
int64_t x20_1 = sx.q(*(arg2 + 0x14))
result[1].d = x20_1.d
void* x8_1 = *(x27 + 0x1328)
int64_t x25 = x20_1 & 0xffffffff
int64_t x9_1 = sx.q(*(arg2 + 0x1c)) * 0x60
result[2] = x8_1
result[3] = x8_1 + x9_1
int32_t j_3 = (*(x8_1 + x9_1)).d
int64_t x0_1
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3
x0_1, v0, v1, v2, v3 = calloc(x20_1, 8)
result[4] = x0_1
int32_t var_64

if (x20_1.d s< 1)
    var_64 = 0
else
    int64_t x28_1 = 0
    int32_t x23 = 0
    var_64 = 0
    
    do
        int32_t x0_3
        x0_3, v0, v1, v2, v3 = ov_ilog(zx.q(*(arg2 + 0x20 + (x28_1 << 2))))
        
        if (x0_3 != 0)
            int32_t x8_3
            
            x8_3 = x0_3 s> var_64 ? x0_3 : var_64
            
            var_64 = x8_3
            int64_t x0_5
            x0_5, v0, v1, v2, v3 = calloc(sx.q(x0_3), 8)
            *(x0_1 + (x28_1 << 3)) = x0_5
            
            if (x0_3 s>= 1)
                int32_t x9_2 = *(arg2 + 0x20 + (x28_1 << 2))
                int64_t i = 0
                
                do
                    if ((x9_2 & 1 << (i.d & 0xffffffff)) != 0)
                        int64_t x12_1 = sx.q(*(arg2 + 0x120 + (sx.q(x23) << 2)))
                        x23 += 1
                        *(*(x0_1 + (x28_1 << 3)) + (i << 3)) = *(x27 + 0x1328) + x12_1 * 0x60
                    
                    i += 1
                while (zx.q(x0_3) != i)
        
        x28_1 += 1
    while (x28_1 != x25)

result[5].d = 1

if (j_3 s>= 1)
    int32_t x10_2 = x25.d
    int32_t i_7
    
    if (j_3 u>= 8)
        i_7 = j_3 & 0xfffffff8
        v0.d = x10_2
        v0:4.d = x10_2
        v0:8.d = x10_2
        v0:0xc.d = x10_2
        v2.d = x20_1.d
        v2:4.d = x20_1.d
        v2:8.d = x20_1.d
        v2:0xc.d = x20_1.d
        v1.d = 1
        v1:4.d = 1
        v1:8.d = 1
        v1:0xc.d = 1
        int32_t i_5 = i_7
        v3.d = 1
        v3:4.d = 1
        v3:8.d = 1
        v3:0xc.d = 1
        int32_t i_1
        
        do
            v1 = vmulq_s32(v1, v0)
            i_1 = i_5
            i_5 -= 8
            v3 = vmulq_s32(v3, v2)
        while (i_1 != 8)
        uint128_t v0_1 = vmulq_s32(v3, v1)
        uint128_t v0_2 = vmulq_s32(v0_1, vextq_s8(v0_1, v0_1, 8))
        x24 = vmulq_lane_s32(v0_2, v0_2, 1)
        
        if (i_7 != j_3)
            goto label_10851d0
    else
        i_7 = 0
        x24 = 1
    label_10851d0:
        int32_t i_4 = j_3 - i_7
        int32_t i_2
        
        do
            i_2 = i_4
            i_4 -= 1
            x24 *= x10_2
        while (i_2 != 1)
    result[5].d = x24

*(result + 0xc) = var_64
int64_t x0_7 = malloc(zx.q(x24) << 0x20 s>> 0x1d)
result[6] = x0_7

if (x24 s>= 1)
    uint64_t j_2 = zx.q(j_3)
    int64_t i_3 = 0
    
    do
        int32_t* x0_9 = malloc((j_2 & 0xffffffff) << 0x20 s>> 0x1e)
        *(x0_7 + (i_3 << 3)) = x0_9
        
        if (j_3 s>= 1)
            int64_t x8_7 = sx.q(x24 s/ x20_1.d)
            uint64_t j_1 = j_2
            int64_t i_6 = i_3
            uint64_t j
            
            do
                int64_t x11_5 = i_6 s/ x8_7
                j = j_1
                j_1 -= 1
                i_6 = i_6 s% x8_7
                x8_7 s/= x20_1
                *x0_9 = x11_5.d
                x0_9 = &x0_9[1]
            while (j != 1)
        
        i_3 += 1
    while (i_3 != zx.q(x24))

return result
