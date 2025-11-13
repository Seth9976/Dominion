// 函数: _ZN5Botan6BigIntdVERKS0_
// 地址: 0xcdb44c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* entry_x1
int64_t x8 = *(entry_x1 + 0x18)

if (x8 == -1)
    int64_t x9_1 = *entry_x1
    int64_t x11_1 = *(entry_x1 + 8)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 != x9_1)
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_1 -= x11_3
        while (i != 1)
        *(entry_x1 + 0x18) = x8_1
        
        if (x8_1 == 1)
            goto label_cdb4ec
        
        goto label_cdb540
    
    *(entry_x1 + 0x18) = 0
label_cdb540:
    Botan::operator/(arg1, entry_x1)
    int128_t var_50
    int64_t var_40
    void* x0_4
    
    if (&var_50 == arg1)
        x0_4 = *arg1
        
        if (x0_4 != 0)
            var_50:8.q = x0_4
            Botan::deallocate_memory(x0_4, (var_40 - x0_4) s>> 2, 4)
    else
        x0_4 = *arg1
        var_50.q = x0_4
        *arg1 = var_50
        int64_t x11_4 = *(arg1 + 0x10)
        int64_t x9_4 = *(arg1 + 0x18)
        *(arg1 + 0x10) = var_40
        int64_t var_38
        *(arg1 + 0x18) = var_38
        int64_t var_38_1 = x9_4
        int32_t x9_5 = *(arg1 + 0x20)
        int32_t var_30
        *(arg1 + 0x20) = var_30
        int32_t var_30_1 = x9_5
        
        if (x0_4 != 0)
            var_50:8.q = x0_4
            Botan::deallocate_memory(x0_4, (x11_4 - x0_4) s>> 2, 4)
else
    if (x8 != 1)
        goto label_cdb540
    
label_cdb4ec:
    int32_t* x8_2 = *entry_x1
    
    if (*(entry_x1 + 8) == x8_2)
        goto label_cdb540
    
    uint64_t x8_3 = zx.q(*x8_2)
    
    if (x8_3.d u< 2)
        goto label_cdb540
    
    int128_t v0
    v0.q = float.d(x8_3)
    int128_t v0_1
    v0_1.w = vaddlv_u8(vcnt_s8(v0))
    
    if (v0_1.d u> 1)
        goto label_cdb540
    
    Botan::BigInt::bits()
    Botan::BigInt::operator>>=(arg1)

return arg1
