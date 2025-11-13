// 函数: _ZNK5Botan4Pipe14get_bytes_readEm
// 地址: 0xd7d3e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x10)
int64_t x9 = *(x8 + 0x30)
int64_t entry_x1

if (x9 u<= entry_x1)
    if (*(x8 + 0x28) + x9 u<= entry_x1)
        return Botan::Pipe::check_available(Botan::assertion_failure("msg < message_count()", 
            "Message number is in range", "get", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa1b7)) __tailcall
    
    int64_t x9_2 = *(x8 + 0x20) + entry_x1 - x9
    void* x8_3 = *(*(*(x8 + 8) + (x9_2 u>> 6 & 0x3fffffffffffff8)) + ((x9_2 & 0x1ff) << 3))
    
    if (x8_3 != 0)
        return *(x8_3 + 0x58)

return 0
