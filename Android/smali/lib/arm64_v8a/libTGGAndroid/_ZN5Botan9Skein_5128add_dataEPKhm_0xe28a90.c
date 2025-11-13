// 函数: _ZN5Botan9Skein_5128add_dataEPKhm
// 地址: 0xe28a90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x2

if (entry_x2 == 0)
    return 

int64_t x8_1 = *(arg1 + 0x60)
size_t x21_1 = entry_x2
uint64_t x20_1 = arg2

if (x8_1 != 0)
    int64_t x9_1 = *(arg1 + 0x48)
    int64_t x10_2 = *(arg1 + 0x50) - x9_1
    size_t x10_3 = x10_2 - x8_1
    
    if (x10_2 u< x8_1)
        Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
        return Botan::Skein_512::final_result(Botan::assertion_failure(
            "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
            "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall
    
    size_t x2
    
    x2 = x10_3 u< x21_1 ? x10_3 : x21_1
    
    if (x2 != 0)
        if (x20_1 == 0)
            return Botan::Skein_512::final_result(Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
                __tailcall
        
        memmove(x9_1 + x8_1, x20_1, x2)
        x8_1 = *(arg1 + 0x60)
    
    if (x8_1 + x21_1 u>= 0x41)
        *(arg1 + 0x50)
        Botan::Skein_512::ubi_512(arg1, *(arg1 + 0x48))
        int64_t x9_3 = *(arg1 + 0x60)
        x8_1 = 0
        *(arg1 + 0x60) = 0
        x20_1 += 0x40 - x9_3
        x21_1 -= 0x40 - x9_3

int64_t x22_1 = (x21_1 - 1) & 0xffffffffffffffc0

if (x21_1 - 1 u>= 0x40)
    Botan::Skein_512::ubi_512(arg1, x20_1)
    x8_1 = *(arg1 + 0x60)

int64_t x9_6 = *(arg1 + 0x48)
int64_t x10_5 = *(arg1 + 0x50) - x9_6
size_t x10_6 = x10_5 - x8_1

if (x10_5 u< x8_1)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
    return Botan::Skein_512::final_result(Botan::assertion_failure(
        "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
        "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall

size_t x21_2 = x21_1 - x22_1
size_t x2_3

x2_3 = x10_6 u< x21_2 ? x10_6 : x21_2

if (x2_3 == 0)
    *(arg1 + 0x60) = x8_1 + x21_2
    return 

if (x20_1 == 0)
    return Botan::Skein_512::final_result(Botan::assertion_failure(
        "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
        "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall

memmove(x9_6 + x8_1, x20_1 + x22_1, x2_3)
*(arg1 + 0x60) += x21_2
