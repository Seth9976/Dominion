// 函数: _ZNK5Botan17DataSource_Memory4peekEPhmm
// 地址: 0xe8b680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int64_t x9 = *(arg1 + 0x20)
int64_t x10_2 = *(arg1 + 0x10) - x8 - x9
int64_t entry_x3
size_t result_1 = x10_2 - entry_x3

if (x10_2 u<= entry_x3)
    return 0

size_t result

result = result_1 u> arg3 ? arg3 : result_1

if (result != 0)
    if (arg2 == 0)
        return Botan::DataSource_Memory::DataSource_Memory(Botan::assertion_failure(
            "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
            "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall
    
    memmove(arg2, x8 + x9 + entry_x3, result)

return result
