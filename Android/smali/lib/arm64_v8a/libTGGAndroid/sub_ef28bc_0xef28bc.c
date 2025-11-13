// 函数: sub_ef28bc
// 地址: 0xef28bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x10)
int64_t x10 = *(arg1 + 0x28)
int64_t x9_1 = *(arg1 + 0x18) - x8
int64_t x9_2 = x9_1 - x10

if (x9_1 u< x10)
    Botan::assertion_failure("m_offset <= m_obj.length()", &data_793a18, "peek", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x3125)
else
    size_t result_1 = x9_2 - arg4
    
    if (x9_2 u<= arg4)
        return 0
    
    size_t result
    
    result = result_1 u> arg3 ? arg3 : result_1
    
    if (result == 0)
        return result
    
    if (arg2 != 0 && x8 != 0)
        memmove(arg2, x8 + arg4, result)
        return result

return sub_ef2970(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall
