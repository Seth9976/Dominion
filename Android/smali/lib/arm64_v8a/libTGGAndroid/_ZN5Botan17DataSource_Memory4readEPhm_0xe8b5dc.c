// 函数: _ZN5Botan17DataSource_Memory4readEPhm
// 地址: 0xe8b5dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x20)
size_t result_1 = *(arg1 + 0x10) - x9 - x8
size_t entry_result
size_t result

result = result_1 u> entry_result ? entry_result : result_1

if (result != 0)
    if (arg2 == 0 || x9 == 0)
        return Botan::DataSource_Memory::check_available(Botan::assertion_failure(
            "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
            "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall
    
    memmove(arg2, x9 + x8, result)
    x8 = *(arg1 + 0x20)

*(arg1 + 0x20) = x8 + result
return result
