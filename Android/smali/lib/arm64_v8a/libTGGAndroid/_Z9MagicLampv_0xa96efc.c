// 函数: _Z9MagicLampv
// 地址: 0xa96efc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyTreasure(1, 0)
int32_t var_1910[0x4]
void var_c90
int64_t result
int128_t v0
uint128_t v1
int128_t v2
uint128_t v3
uint128_t v4
result, v0, v1, v2, v3, v4 = CountCardTypesWhere(0x3e9, &var_c90, &var_1910)

if (result.d s>= 1)
    uint64_t x8_1 = zx.q(result.d)
    int32_t x10_1
    int64_t i_4
    
    if (result.d u>= 8)
        i_4 = x8_1 & 0xfffffff8
        v0.q = 0
        v0:8.q = 0
        v1.d = 1
        v1:4.d = 1
        v1:8.d = 1
        v1:0xc.d = 1
        void var_1900
        void* x10_2 = &var_1900
        int64_t i_3 = i_4
        v2.q = 0
        v2:8.q = 0
        int64_t i
        
        do
            v3 = *(x10_2 - 0x10)
            v4 = *x10_2
            i = i_3
            i_3 -= 8
            x10_2 += 0x20
            v0 -= vceqq_u32(v3, v1)
            v2 -= vceqq_u32(v4, v1)
        while (i != 8)
        uint128_t v0_1
        v0_1.d = vaddvq_u32(v2 + v0)
        x10_1 = v0_1.d
        
        if (i_4 != x8_1)
            goto label_a96f98
    else
        i_4 = 0
        x10_1 = 0
    label_a96f98:
        void* x11_1 = &var_1910[i_4]
        int64_t i_2 = x8_1 - i_4
        int64_t i_1
        
        do
            int32_t x9_1 = *x11_1
            x11_1 += 4
            
            if (x9_1 == 1)
                x10_1 += 1
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (x10_1 u> 5)
        result = TrashThis(0x3e9)
        
        if ((result.d & 1) != 0)
            NotifyResult(1)
            return GainCardN(0xd29, 3, 0x476)

return result
