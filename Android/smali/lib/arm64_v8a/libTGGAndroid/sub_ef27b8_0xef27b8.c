// 函数: sub_ef27b8
// 地址: 0xef27b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x10)
int64_t x8 = *(arg1 + 0x28)
int64_t x10_1 = *(arg1 + 0x18) - x9
size_t result_1 = x10_1 - x8

if (x10_1 u< x8)
    Botan::assertion_failure("m_offset <= m_obj.length()", &data_793a18, "read", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x311c)
else
    size_t result
    
    result = result_1 u> arg3 ? arg3 : result_1
    
    if (result == 0)
        *(arg1 + 0x28) = x8 + result
        return result
    
    if (arg2 != 0 && x9 != 0)
        memmove(arg2, x9 + x8, result)
        *(arg1 + 0x28) += result
        return result

uint64_t x0_2
int64_t x1_1
x0_2, x1_1 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return sub_ef286c(x0_2, x1_1) __tailcall
