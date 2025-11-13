// 函数: _ZN5Botan4IDEA12key_scheduleEPKhm
// 地址: 0xd8ec8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10) - x8

if (x10 s>> 1 u<= 0x33)
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::__append(&arg1[8])
else if (x10 != 0x68)
    *(arg1 + 0x10) = x8 + 0x68

int64_t x8_2 = *(arg1 + 0x20)
int64_t x10_1 = *(arg1 + 0x28) - x8_2

if (x10_1 s>> 1 u<= 0x33)
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::__append(&arg1[0x20])
else if (x10_1 != 0x68)
    *(arg1 + 0x28) = x8_2 + 0x68

uint64_t* x0_2
uint128_t v0
x0_2, v0 = Botan::allocate_memory(2, 8)
uint64_t x9_4 = *(arg2 + 8)
int64_t i_6 = 0xf
uint64_t x8_5 = _byteswap(*arg2)
uint64_t x9_5 = _byteswap(x9_4)
*x0_2 = x8_5
x0_2[1] = x9_5
**(arg1 + 8) = (x8_5 u>> 0x30).w
*(*(arg1 + 8) + 2) = (*(x0_2 + 4)).w
*(*(arg1 + 8) + 4) = (*x0_2 u>> 0x10).w
*(*(arg1 + 8) + 6) = (*x0_2).w
*(*(arg1 + 8) + 8) = *(x0_2 + 0xe)
*(*(arg1 + 8) + 0xa) = (*(x0_2 + 0xc)).w
*(*(arg1 + 8) + 0xc) = (x0_2[1] u>> 0x10).w
*(*(arg1 + 8) + 0xe) = (x0_2[1]).w
v0 = *x0_2
uint128_t v1 = vextq_s8(v0, v0, 8)
v0.q <<= 0x19
v0:8.q <<= 0x19
v1.q u>>= 0x27
v1:8.q u>>= 0x27
uint128_t v0_1 = vorrq_s8(v0, v1)
*x0_2 = v0_1
*(*(arg1 + 8) + 0x10) = (v0_1.q u>> 0x30).w
*(*(arg1 + 8) + 0x12) = (*(x0_2 + 4)).w
*(*(arg1 + 8) + 0x14) = (*x0_2 u>> 0x10).w
*(*(arg1 + 8) + 0x16) = (*x0_2).w
*(*(arg1 + 8) + 0x18) = *(x0_2 + 0xe)
*(*(arg1 + 8) + 0x1a) = (*(x0_2 + 0xc)).w
*(*(arg1 + 8) + 0x1c) = (x0_2[1] u>> 0x10).w
*(*(arg1 + 8) + 0x1e) = (x0_2[1]).w
v0_1 = *x0_2
uint128_t v1_1 = vextq_s8(v0_1, v0_1, 8)
v0_1.q <<= 0x19
v0_1:8.q <<= 0x19
v1_1.q u>>= 0x27
v1_1:8.q u>>= 0x27
uint128_t v0_2 = vorrq_s8(v0_1, v1_1)
*x0_2 = v0_2
*(*(arg1 + 8) + 0x20) = (v0_2.q u>> 0x30).w
*(*(arg1 + 8) + 0x22) = (*(x0_2 + 4)).w
*(*(arg1 + 8) + 0x24) = (*x0_2 u>> 0x10).w
*(*(arg1 + 8) + 0x26) = (*x0_2).w
*(*(arg1 + 8) + 0x28) = *(x0_2 + 0xe)
*(*(arg1 + 8) + 0x2a) = (*(x0_2 + 0xc)).w
*(*(arg1 + 8) + 0x2c) = (x0_2[1] u>> 0x10).w
*(*(arg1 + 8) + 0x2e) = (x0_2[1]).w
v0_2 = *x0_2
uint128_t v1_2 = vextq_s8(v0_2, v0_2, 8)
v0_2.q <<= 0x19
v0_2:8.q <<= 0x19
v1_2.q u>>= 0x27
v1_2:8.q u>>= 0x27
uint128_t v0_3 = vorrq_s8(v0_2, v1_2)
*x0_2 = v0_3
*(*(arg1 + 8) + 0x30) = (v0_3.q u>> 0x30).w
*(*(arg1 + 8) + 0x32) = (*(x0_2 + 4)).w
*(*(arg1 + 8) + 0x34) = (*x0_2 u>> 0x10).w
*(*(arg1 + 8) + 0x36) = (*x0_2).w
*(*(arg1 + 8) + 0x38) = *(x0_2 + 0xe)
*(*(arg1 + 8) + 0x3a) = (*(x0_2 + 0xc)).w
*(*(arg1 + 8) + 0x3c) = (x0_2[1] u>> 0x10).w
*(*(arg1 + 8) + 0x3e) = (x0_2[1]).w
v0_3 = *x0_2
uint128_t v1_3 = vextq_s8(v0_3, v0_3, 8)
v0_3.q <<= 0x19
v0_3:8.q <<= 0x19
v1_3.q u>>= 0x27
v1_3:8.q u>>= 0x27
uint128_t v0_4 = vorrq_s8(v0_3, v1_3)
*x0_2 = v0_4
*(*(arg1 + 8) + 0x40) = (v0_4.q u>> 0x30).w
*(*(arg1 + 8) + 0x42) = (*(x0_2 + 4)).w
*(*(arg1 + 8) + 0x44) = (*x0_2 u>> 0x10).w
*(*(arg1 + 8) + 0x46) = (*x0_2).w
*(*(arg1 + 8) + 0x48) = *(x0_2 + 0xe)
*(*(arg1 + 8) + 0x4a) = (*(x0_2 + 0xc)).w
*(*(arg1 + 8) + 0x4c) = (x0_2[1] u>> 0x10).w
*(*(arg1 + 8) + 0x4e) = (x0_2[1]).w
v0_4 = *x0_2
uint128_t v1_4 = vextq_s8(v0_4, v0_4, 8)
v0_4.q <<= 0x19
v0_4:8.q <<= 0x19
v1_4.q u>>= 0x27
v1_4:8.q u>>= 0x27
uint128_t v0_5 = vorrq_s8(v0_4, v1_4)
*x0_2 = v0_5
*(*(arg1 + 8) + 0x50) = (v0_5.q u>> 0x30).w
*(*(arg1 + 8) + 0x52) = (*(x0_2 + 4)).w
*(*(arg1 + 8) + 0x54) = (*x0_2 u>> 0x10).w
*(*(arg1 + 8) + 0x56) = (*x0_2).w
*(*(arg1 + 8) + 0x58) = *(x0_2 + 0xe)
*(*(arg1 + 8) + 0x5a) = (*(x0_2 + 0xc)).w
*(*(arg1 + 8) + 0x5c) = (x0_2[1] u>> 0x10).w
*(*(arg1 + 8) + 0x5e) = (x0_2[1]).w
v0_5 = *x0_2
uint128_t v1_5 = vextq_s8(v0_5, v0_5, 8)
v0_5.q <<= 0x19
v0_5:8.q <<= 0x19
v1_5.q u>>= 0x27
v1_5:8.q u>>= 0x27
uint128_t v0_6 = vorrq_s8(v0_5, v1_5)
*x0_2 = v0_6
*(*(arg1 + 8) + 0x60) = (v0_6.q u>> 0x30).w
*(*(arg1 + 8) + 0x62) = (*(x0_2 + 4)).w
*(*(arg1 + 8) + 0x64) = (*x0_2 u>> 0x10).w
*(*(arg1 + 8) + 0x66) = (*x0_2).w
uint32_t x8_72 = zx.d(*(*(arg1 + 8) + 0x60))
uint32_t x12 = x8_72
int64_t i

do
    int32_t x13_1 = x12 & 0xffff
    int32_t x13_2 = x13_1 * x13_1
    uint32_t x15_1 = x13_2 u>> 0x10
    int32_t x16_1 = x13_2 - x15_1
    int32_t x13_3 = ((x13_2 - 1) & not.d(x13_2)) s>> 0x1f
    int32_t x14_3
    
    if (x15_1 u> zx.d(x13_2.w))
        x14_3 = x16_1 + 1
    else
        x14_3 = x16_1
    
    int32_t x12_3 = ((1 - (x12 << 1)) & x13_3) | (x14_3 & not.d(x13_3))
    int32_t x13_5 = (x12_3 & 0xffff) * x8_72
    uint32_t x15_2 = x13_5 u>> 0x10
    int32_t x16_2 = x13_5 - x15_2
    int32_t x13_6 = ((x13_5 - 1) & not.d(x13_5)) s>> 0x1f
    int32_t x14_7
    
    if (x15_2 u> zx.d(x13_5.w))
        x14_7 = x16_2 + 1
    else
        x14_7 = x16_2
    
    i = i_6
    i_6 -= 1
    x12 = ((1 - x8_72 - x12_3) & x13_6) | (x14_7 & not.d(x13_6))
while (i != 1)
int64_t i_7 = 0xf
**(arg1 + 0x20) = x12.w
*(*(arg1 + 0x20) + 2) = (neg.d(zx.d(*(*(arg1 + 8) + 0x62)))).w
*(*(arg1 + 0x20) + 4) = (neg.d(zx.d(*(*(arg1 + 8) + 0x64)))).w
uint32_t x8_81 = zx.d(*(*(arg1 + 8) + 0x66))
uint32_t x15_3 = x8_81
int64_t i_1

do
    int32_t x12_6 = x15_3 & 0xffff
    int32_t x12_7 = x12_6 * x12_6
    uint32_t x15_4 = x12_7 u>> 0x10
    int32_t x16_3 = x12_7 - x15_4
    int32_t x12_8 = ((x12_7 - 1) & not.d(x12_7)) s>> 0x1f
    int32_t x14_11
    
    if (x15_4 u> zx.d(x12_7.w))
        x14_11 = x16_3 + 1
    else
        x14_11 = x16_3
    
    int32_t x12_10 = ((1 - (x15_3 << 1)) & x12_8) | (x14_11 & not.d(x12_8))
    int32_t x13_9 = (x12_10 & 0xffff) * x8_81
    uint32_t x15_5 = x13_9 u>> 0x10
    int32_t x16_4 = x13_9 - x15_5
    int32_t x13_10 = ((x13_9 - 1) & not.d(x13_9)) s>> 0x1f
    int32_t x14_15
    
    if (x15_5 u> zx.d(x13_9.w))
        x14_15 = x16_4 + 1
    else
        x14_15 = x16_4
    
    i_1 = i_7
    i_7 -= 1
    x15_3 = ((1 - x8_81 - x12_10) & x13_10) | (x14_15 & not.d(x13_10))
while (i_1 != 1)
int64_t x8_82 = 0
*(*(arg1 + 0x20) + 6) = x15_3.w
bool cond:12_1

do
    int64_t x16_7 = x8_82 << 1
    *(x16_7 + *(arg1 + 0x20) + 8) = *(*(arg1 + 8) + ((0x2e - x8_82) << 1))
    int64_t i_4 = 0xf
    *(x16_7 + *(arg1 + 0x20) + 0xa) = *(*(arg1 + 8) + ((0x2f - x8_82) << 1))
    uint32_t x17_6 = zx.d(*(*(arg1 + 8) + ((0x2a - x8_82) << 1)))
    uint32_t x3_1 = x17_6
    int64_t i_2
    
    do
        int32_t x4_1 = x3_1 & 0xffff
        int32_t x4_2 = x4_1 * x4_1
        uint32_t x6_1 = x4_2 u>> 0x10
        int32_t x7_1 = x4_2 - x6_1
        int32_t x4_3 = ((x4_2 - 1) & not.d(x4_2)) s>> 0x1f
        int32_t x5_3
        
        if (x6_1 u> zx.d(x4_2.w))
            x5_3 = x7_1 + 1
        else
            x5_3 = x7_1
        
        int32_t x3_4 = ((1 - (x3_1 << 1)) & x4_3) | (x5_3 & not.d(x4_3))
        int32_t x4_5 = (x3_4 & 0xffff) * x17_6
        uint32_t x6_2 = x4_5 u>> 0x10
        int32_t x7_2 = x4_5 - x6_2
        int32_t x4_6 = ((x4_5 - 1) & not.d(x4_5)) s>> 0x1f
        int32_t x5_7
        
        if (x6_2 u> zx.d(x4_5.w))
            x5_7 = x7_2 + 1
        else
            x5_7 = x7_2
        
        i_2 = i_4
        i_4 -= 1
        x3_1 = ((1 - x17_6 - x3_4) & x4_6) | (x5_7 & not.d(x4_6))
    while (i_2 != 1)
    *(*(arg1 + 0x20) + ((x8_82 + 6) << 1)) = x3_1.w
    *(x16_7 + *(arg1 + 0x20) + 0xe) = (neg.d(zx.d(*(*(arg1 + 8) + ((0x2c - x8_82) << 1))))).w
    int64_t i_5 = 0xf
    *(x16_7 + *(arg1 + 0x20) + 0x10) = (neg.d(zx.d(*(*(arg1 + 8) + ((0x2b - x8_82) << 1))))).w
    uint32_t x16_10 = zx.d(*(*(arg1 + 8) + ((0x2d - x8_82) << 1)))
    uint32_t x3_9 = x16_10
    int64_t i_3
    
    do
        int32_t x4_7 = x3_9 & 0xffff
        int32_t x4_8 = x4_7 * x4_7
        uint32_t x6_3 = x4_8 u>> 0x10
        int32_t x7_3 = x4_8 - x6_3
        int32_t x4_9 = ((x4_8 - 1) & not.d(x4_8)) s>> 0x1f
        int32_t x5_11
        
        if (x6_3 u> zx.d(x4_8.w))
            x5_11 = x7_3 + 1
        else
            x5_11 = x7_3
        
        int32_t x3_12 = ((1 - (x3_9 << 1)) & x4_9) | (x5_11 & not.d(x4_9))
        int32_t x4_11 = (x3_12 & 0xffff) * x16_10
        uint32_t x6_4 = x4_11 u>> 0x10
        int32_t x7_4 = x4_11 - x6_4
        int32_t x4_12 = ((x4_11 - 1) & not.d(x4_11)) s>> 0x1f
        int32_t x5_15
        
        if (x6_4 u> zx.d(x4_11.w))
            x5_15 = x7_4 + 1
        else
            x5_15 = x7_4
        
        i_3 = i_5
        i_5 -= 1
        x3_9 = ((1 - x16_10 - x3_12) & x4_12) | (x5_15 & not.d(x4_12))
    while (i_3 != 1)
    cond:12_1 = x8_82 != 0x2a
    *(*(arg1 + 0x20) + (x8_82 << 1) + 0x12) = x3_9.w
    x8_82 += 6
while (cond:12_1)
void* x8_84 = *(arg1 + 0x20)
int16_t x10_4 = *(x8_84 + 0x62)
*(x8_84 + 0x62) = *(x8_84 + 0x64)
*(x8_84 + 0x64) = x10_4
return Botan::deallocate_memory(x0_2, 2, 8)
