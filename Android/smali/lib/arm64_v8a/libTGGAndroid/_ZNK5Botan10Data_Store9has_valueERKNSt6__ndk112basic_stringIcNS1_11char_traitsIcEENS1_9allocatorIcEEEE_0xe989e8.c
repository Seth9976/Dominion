// 函数: _ZNK5Botan10Data_Store9has_valueERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe989e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i = *(arg1 + 8)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x8) i_1

if (i == 0)
    i_1 = arg1 + 8
else
    char* entry_x1
    uint64_t x8_1 = zx.q(*entry_x1)
    i_1 = arg1 + 8
    int32_t temp0_1 = x8_1.d & 1
    uint64_t x23_1
    
    if (temp0_1 == 0)
        x23_1 = x8_1 u>> 1
    else
        x23_1 = *(entry_x1 + 8)
    
    void* x20_1
    
    if (temp0_1 != 0)
        x20_1 = *(entry_x1 + 0x10)
    else
        x20_1 = &entry_x1[1]
    
    do
        uint64_t x9_2 = zx.q(*(i + 0x20))
        uint64_t x24_1
        
        if ((x9_2.d & 1) == 0)
            x24_1 = x9_2 u>> 1
        else
            x24_1 = *(i + 0x28)
        
        uint64_t x2_1
        
        x2_1 = x23_1 u< x24_1 ? x23_1 : x24_1
        
        int32_t x0
        
        if (x2_1 != 0)
            void* x0_1
            
            if ((x9_2.d & 1) != 0)
                x0_1 = *(i + 0x30)
            else
                x0_1 = i + 0x21
            
            x0 = memcmp(x0_1, x20_1, x2_1)
        
        if (x2_1 == 0 || x0 == 0)
            if (x24_1 u>= x23_1)
                x0 = x23_1 u< x24_1 ? 1 : 0
            else
                x0 = -1
        
        if (x0 s>= 0)
            i_1 = i
        
        i = *(i + (zx.q(x0 u>> 0x1f) << 3))
    while (i != 0)

return zx.q(i_1 != arg1 + 8 ? 1 : 0)
