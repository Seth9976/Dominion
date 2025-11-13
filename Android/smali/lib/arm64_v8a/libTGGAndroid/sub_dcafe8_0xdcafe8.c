// 函数: sub_dcafe8
// 地址: 0xdcafe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
uint128_t result
result.d = 0x2fff
result:4.d = 0x2fff
result:8.d = 0x2fff
result:0xc.d = 0x2fff
int128_t v1
v1.d = 0x3ffff
v1:4.d = 0x3ffff
v1:8.d = 0x3ffff
v1:0xc.d = 0x3ffff
uint128_t v2
v2.d = 0x3001
v2:4.d = 0x3001
v2:8.d = 0x3001
v2:0xc.d = 0x3001

do
    uint128_t v3 = *(arg1 + i)
    uint128_t v4 = *(&data_8522f4 + i)
    uint128_t v5_1 = vextq_s8(v3, v3, 8)
    uint128_t v16_1 = vmull_high_u16(v4, v3)
    uint128_t v7_2 = vmulq_s32(mulu.dp.o(v4, v3), result)
    uint128_t v16_3 = vmulq_s32(v16_1, result) & v1
    uint128_t v7_4 = vmulq_s32(v7_2 & v1, v2)
    uint128_t v6_1 = vextq_s8(v4, v4, 8)
    uint128_t v16_4 = vmulq_s32(v16_3, v2)
    uint128_t v7_5 = vmlal_u16(v7_4, v4, v3)
    uint128_t v16_5 = vmlal_u16(v16_4, v6_1, v5_1)
    v4.d = v7_5.d u>> 0x12
    v4:4.d = v7_5:4.d u>> 0x12
    v4:8.d = v7_5:8.d u>> 0x12
    v4:0xc.d = v7_5:0xc.d u>> 0x12
    v3.d = v16_5.d u>> 0x12
    v3:4.d = v16_5:4.d u>> 0x12
    v3:8.d = v16_5:8.d u>> 0x12
    v3:0xc.d = v16_5:0xc.d u>> 0x12
    vmovn_s32(v4)
    *(arg1 + i) = vmovn_high_s32(v3)
    i += 0x10
while (i != 0x800)

int64_t x8 = 0
bool cond:2_1

do
    int64_t x17_1 = 1 << x8
    int64_t i_3 = 0
    int64_t x15_1 = x17_1 << 1
    int64_t x16_1 = x17_1 << 2
    int128_t* x2_1 = arg1
    
    do
        if (i_3 u<= 0x3fe)
            void* const x3_1 = &data_851ef4
            int128_t* x4_1 = x2_1
            int64_t i_1 = i_3
            
            do
                uint32_t x6_1 = zx.d(*x3_1)
                x3_1 += 2
                uint32_t x7_1 = zx.d(*x4_1)
                uint32_t x19_1 = zx.d(*(x4_1 + x15_1))
                i_1 += x15_1
                int32_t x6_2 = (x7_1 - x19_1 + 0x9003) * x6_1
                *x4_1 = x19_1.w + x7_1.w
                *(x4_1 + x15_1) = ((x6_2 + ((x6_2 * 0x2fff) & 0x3ffff) * 0x3001) u>> 0x12).w
                x4_1 += x16_1
            while (i_1 u< 0x3ff)
        
        i_3 += 1
        x2_1 += 2
    while (i_3 u< x17_1)
    
    if (x15_1 != 0)
        int64_t i_4 = 0
        int128_t* x2_2 = arg1
        
        do
            if (i_4 u<= 0x3fe)
                void* const x3_2 = &data_851ef4
                int128_t* x4_2 = x2_2
                int64_t i_2 = i_4
                
                do
                    uint32_t x6_5 = zx.d(*x3_2)
                    x3_2 += 2
                    uint32_t x7_6 = zx.d(*x4_2)
                    uint32_t x19_2 = zx.d(*(x4_2 + x16_1))
                    i_2 += x16_1
                    int16_t x20_2 = x19_2.w + x7_6.w
                    int32_t x6_6 = (x7_6 - x19_2 + 0x9003) * x6_5
                    *x4_2 = x20_2 - ((zx.d(x20_2) * 5) u>> 0x10).w * 0x3001
                    *(x4_2 + x16_1) = ((x6_6 + ((x6_6 * 0x2fff) & 0x3ffff) * 0x3001) u>> 0x12).w
                    x4_2 += x17_1 << 3
                while (i_2 u< 0x3ff)
            
            i_4 += 1
            x2_2 += 2
        while (i_4 != x15_1)
    
    cond:2_1 = x8 u>= 8
    x8 += 2
while (not(cond:2_1))
return result
