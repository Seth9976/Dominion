// 函数: _ZN5Botan5Chain5writeEPKhm
// 地址: 0xeef1c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 == 0)
    return 

int64_t x8_1 = *(arg1 + 0x20)
int64_t x10_1 = *(arg1 + 0x28)
uint8_t const* x19_1 = arg1

if (x10_1 == x8_1)
label_eef2b8:
    uint64_t var_40 = arg2
    int64_t var_38_1 = entry_x2
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&x19_1[8], &var_40)
    return 

int64_t i = 0
int32_t x9_1 = 1
label_eef1f4:
int64_t x11_1 = x10_1 - x8_1
int64_t x12_1

x12_1 = x11_1 s>= 0 ? x11_1 : -1

int64_t x10_2 = x8_1 - x10_1
int64_t x12_2

x12_2 = x12_1 s< 1 ? x12_1 : 1

int64_t x10_3

x10_3 = x10_2 s> x11_1 ? x10_2 : x11_1

do
    arg1 = *(x8_1 + (i << 3))
    
    if (arg1 != 0)
        if (*(x19_1 + 0x10) != *(x19_1 + 8))
            (*(*arg1 + 8))()
            arg1 = *(*(x19_1 + 0x20) + (i << 3))
        
        (*(*arg1 + 8))(arg1, arg2, entry_x2)
        x8_1 = *(x19_1 + 0x20)
        x10_1 = *(x19_1 + 0x28)
        x9_1 = 0
        int64_t x11_2 = x10_1 - x8_1
        int64_t x13_1
        
        x13_1 = x11_2 s>= 0 ? x11_2 : -1
        
        int64_t x12_3 = x8_1 - x10_1
        int64_t x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        int64_t x11_3
        
        x11_3 = x12_3 s> x11_2 ? x12_3 : x11_2
        
        bool cond:0_1 = x13_2 * (x11_3 u>> 3) - 1 != i
        i += 1
        
        if (cond:0_1)
            goto label_eef1f4
        
        goto label_eef2c8
    
    i += 1
while (x12_2 * (x10_3 u>> 3) != i)

if ((x9_1 & 1) != 0)
    goto label_eef2b8

label_eef2c8:
*(x19_1 + 0x10) = *(x19_1 + 8)
