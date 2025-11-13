// 函数: _Z16WolfDen_VPBannerR7DomGame9PlayerWhoRiS2_S2_
// 地址: 0xc005a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1920[0x4]
void var_ca0
int64_t result
int128_t v0
uint128_t v1
int128_t v2
uint128_t v3
uint128_t v4
result, v0, v1, v2, v3, v4 = CountCardTypes(arg1, arg2, &var_ca0, &var_1920)
int32_t x10

if (result.d s< 1)
    x10 = 0
else
    uint64_t x8_1 = zx.q(result.d)
    int64_t i_4
    
    if (result.d u>= 8)
        i_4 = x8_1 & 0xfffffff8
        v0.q = 0
        v0:8.q = 0
        v1.d = 1
        v1:4.d = 1
        v1:8.d = 1
        v1:0xc.d = 1
        void var_1910
        void* x10_1 = &var_1910
        int64_t i_3 = i_4
        v2.q = 0
        v2:8.q = 0
        int64_t i
        
        do
            v3 = *(x10_1 - 0x10)
            v4 = *x10_1
            i = i_3
            i_3 -= 8
            x10_1 += 0x20
            v0 -= vceqq_u32(v3, v1)
            v2 -= vceqq_u32(v4, v1)
        while (i != 8)
        uint128_t v0_1
        v0_1.d = vaddvq_u32(v2 + v0)
        x10 = v0_1.d
        
        if (i_4 != x8_1)
            goto label_c00640
    else
        i_4 = 0
        x10 = 0
    label_c00640:
        int64_t i_2 = x8_1 - i_4
        void* x9_1 = &var_1920[i_4]
        int64_t i_1
        
        do
            int32_t x11_1 = *x9_1
            x9_1 += 4
            
            if (x11_1 == 1)
                x10 += 1
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

*arg3 = x10
return result
