// 函数: _ZN5Botan7BLAKE2b8add_dataEPKhm
// 地址: 0xce3e44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x2

if (entry_x2 == 0)
    return 

int64_t x8_1 = *(arg1 + 0x28)
size_t x19_1 = entry_x2
uint64_t x21_1 = arg2

if (x8_1 != 0)
    if (x8_1 u<= 0x7f)
        size_t x22_1
        
        if (0x80 - x8_1 u> x19_1)
            x22_1 = x19_1
        else
            x22_1 = 0x80 - x8_1
        
        if (x21_1 == 0)
            return Botan::BLAKE2b::final_result(Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
                __tailcall
        
        memmove(*(arg1 + 0x10) + x8_1, x21_1, x22_1)
        x19_1 -= x22_1
        x21_1 += x22_1
        x8_1 = *(arg1 + 0x28) + x22_1
        *(arg1 + 0x28) = x8_1
    
    if (x19_1 != 0)
        uint64_t x1_1 = *(arg1 + 0x10)
        
        if (x8_1 == *(arg1 + 0x18) - x1_1)
            Botan::BLAKE2b::compress(arg1, x1_1, 1)
            *(arg1 + 0x28) = 0

if (x19_1 u>= 0x81)
    Botan::BLAKE2b::compress(arg1, x21_1, (x19_1 - 1) u>> 7)
    int64_t x8_3 = (x19_1 - 1) & 0xffffffffffffff80
    x21_1 += x8_3
    x19_1 -= x8_3

if (x19_1 == 0)
    return 

if (x21_1 == 0)
    return Botan::BLAKE2b::final_result(Botan::assertion_failure(
        "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
        "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall

memmove(*(arg1 + 0x10) + *(arg1 + 0x28), x21_1, x19_1)
*(arg1 + 0x28) += x19_1
