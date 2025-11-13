// 函数: _ZN5Botan19XMSS_Index_Registry3getERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES7_
// 地址: 0xecb8dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* i_1 =
    Botan::XMSS_Index_Registry::make_key_id(arg1, arg2)
int64_t* x8 = *arg1
int64_t x11 = *(arg1 + 8)
void* x10 = x11 - x8
int64_t* entry_x8

if (x11 == x8)
label_ecb970:
    i_1 = Botan::XMSS_Index_Registry::add(arg1, Botan::XMSS_Index_Registry::make_key_id(i_1, arg2))
    int64_t* x8_2 = *(arg1 + 0x18) + (i_1 << 4)
    int64_t x8_3 = x8_2[1]
    *entry_x8 = *x8_2
    entry_x8[1] = x8_3
    
    if (x8_3 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
        while (i != 0)
else
    void* x12_1
    
    x12_1 = x10 s>= 0 ? x10 : -ffffffffffffffff
    
    void* x11_1 = x8 - x11
    void* x12_2
    
    x12_2 = x12_1 s< 1 ? x12_1 : 1
    
    void* x10_1
    
    x10_1 = x11_1 s> x10 ? x11_1 : x10
    
    int64_t x10_3 = x12_2 * (x10_1 u>> 3)
    int64_t x10_4
    
    x10_4 = x10_3 u> 1 ? x10_3 : 1
    
    int64_t x9_1 = 0
    int64_t x10_5 = neg.q(x10_4)
    
    while (*x8 != i_1)
        x9_1 += 0x10
        int32_t temp0_1 = x10_5
        x10_5 += 1
        x8 = &x8[1]
        
        if (temp0_1 u>= -1)
            goto label_ecb970
    
    int64_t* x8_6 = *(arg1 + 0x18) + x9_1
    int64_t x8_7 = x8_6[1]
    *entry_x8 = *x8_6
    entry_x8[1] = x8_7
    
    if (x8_7 != 0)
        int32_t i_2
        
        do
            i_2 = __stxr(__ldxr(x8_7 + 8) + 1, x8_7 + 8)
        while (i_2 != 0)
return i_1
