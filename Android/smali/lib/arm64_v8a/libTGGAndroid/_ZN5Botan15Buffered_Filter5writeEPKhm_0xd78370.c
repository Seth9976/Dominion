// 函数: _ZN5Botan15Buffered_Filter5writeEPKhm
// 地址: 0xd78370
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x2

if (entry_x2 == 0)
    return 

int64_t x8_1 = *(arg1 + 0x30)
int64_t x9_1 = *(arg1 + 8)
int64_t x10_1 = *(arg1 + 0x10)
size_t x19_1 = entry_x2
uint64_t x21_1 = arg2
int64_t x11_1 = x8_1 + entry_x2

if (x11_1 u>= x10_1 + x9_1)
    int64_t x12_2 = *(arg1 + 0x18)
    size_t x13_3 = *(arg1 + 0x20) - x12_2 - x8_1
    size_t x22_1
    
    x22_1 = x13_3 u> x19_1 ? x19_1 : x13_3
    
    if (x22_1 != 0)
        if (x21_1 == 0 || x12_2 == 0)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            return Botan::Buffered_Filter::end_msg() __tailcall
        
        memmove(x12_2 + x8_1, x21_1, x22_1)
        x8_1 = *(arg1 + 0x30)
        x9_1 = *(arg1 + 8)
        x10_1 = *(arg1 + 0x10)
        x11_1 = x8_1 + x19_1
    
    int64_t x8_2 = x8_1 + x22_1
    int64_t x10_2 = x11_1 - x10_1
    x21_1 += x22_1
    x19_1 -= x22_1
    int64_t x22_2
    
    x22_2 = x10_2 u< x8_2 ? x10_2 : x8_2
    
    *(arg1 + 0x30) = x8_2
    
    if (x9_1 != 0)
        x22_2 = x22_2 u/ x9_1 * x9_1
    
    (*(*arg1 + 0x10))(arg1, *(arg1 + 0x18), x22_2)
    int64_t x8_6 = *(arg1 + 0x30)
    size_t x2_2 = x8_6 - x22_2
    *(arg1 + 0x30) = x2_2
    
    if (x8_6 != x22_2)
        int64_t x0_2 = *(arg1 + 0x18)
        
        if (x0_2 == 0)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            return Botan::Buffered_Filter::end_msg() __tailcall
        
        memmove(x0_2, x0_2 + x22_2, x2_2)

int64_t x8_7 = *(arg1 + 0x10)

if (x19_1 u>= x8_7)
    int64_t x9_2 = *(arg1 + 8)
    int64_t x22_3 = (x19_1 - x8_7) u/ x9_2 * x9_2
    
    if (x22_3 != 0)
        (*(*arg1 + 0x10))(arg1, x21_1, x22_3)
        x21_1 += x22_3
        x19_1 -= x22_3

int64_t x8_12 = *(arg1 + 0x30)

if (x19_1 == 0)
    *(arg1 + 0x30) = x8_12 + x19_1
    return 

if (x21_1 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    return Botan::Buffered_Filter::end_msg() __tailcall

memmove(*(arg1 + 0x18) + x8_12, x21_1, x19_1)
*(arg1 + 0x30) += x19_1
