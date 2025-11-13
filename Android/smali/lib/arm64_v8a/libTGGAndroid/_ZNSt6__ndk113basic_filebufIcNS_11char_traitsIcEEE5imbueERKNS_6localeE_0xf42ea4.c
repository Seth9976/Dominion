// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE
// 地址: 0xf42ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg1 + 0x30))()
std::__ndk1::locale::id* entry_x1
int64_t* x0_1 = std::__ndk1::locale::use_facet(entry_x1)
*(arg1 + 0x80) = x0_1
uint32_t x20_1 = zx.d(*(arg1 + 0xa2))
void* x0_2 = (*(*x0_1 + 0x38))()
int32_t x8_4 = x0_2.d & 1
*(arg1 + 0xa2) = x8_4.b

if (x20_1 != x8_4)
    uint32_t x8_5 = zx.d(*(arg1 + 0xa0))
    __builtin_memset(arg1 + 0x10, 0, 0x30)
    
    if ((x0_2.d & 1) == 0)
        if (x8_5 == 0)
            int64_t x8_7 = *(arg1 + 0x40)
            
            if (x8_7 != arg1 + 0x58)
                uint64_t x0_5 = *(arg1 + 0x60)
                *(arg1 + 0xa1) = 0
                *(arg1 + 0x68) = x8_7
                *(arg1 + 0x70) = x0_5
                int64_t x0_6 = operator new[](x0_5)
                *(arg1 + 0x40) = x0_6
                *(arg1 + 0xa0) = 1
                return x0_6
        
        uint64_t x0_3 = *(arg1 + 0x60)
        *(arg1 + 0x70) = x0_3
        int64_t x0_4 = operator new[](x0_3)
        *(arg1 + 0x68) = x0_4
        *(arg1 + 0xa1) = 1
        return x0_4
    
    if (x8_5 != 0)
        x0_2 = *(arg1 + 0x40)
        
        if (x0_2 != 0)
            x0_2 = operator delete[](x0_2)
    
    char x8_6 = *(arg1 + 0xa1)
    int64_t x10_1 = *(arg1 + 0x68)
    int64_t x9_1 = *(arg1 + 0x70)
    *(arg1 + 0xa1) = 0
    *(arg1 + 0x68) = 0
    *(arg1 + 0x70) = 0
    *(arg1 + 0xa0) = x8_6
    *(arg1 + 0x40) = x10_1
    *(arg1 + 0x60) = x9_1

return x0_2
