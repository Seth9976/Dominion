// 函数: _ZNK5Botan4Pipe14get_bytes_readEv
// 地址: 0xd7d35c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x8 = *(entry_x0 + 0x10)
int64_t x10 = *(entry_x0 + 0x18)
int64_t x11 = *(x8 + 0x30)

if (x10 u>= x11)
    if (*(x8 + 0x28) + x11 u<= x10)
        return Botan::Pipe::get_bytes_read(Botan::assertion_failure("msg < message_count()", 
            "Message number is in range", "get", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa1b7)) __tailcall
    
    int64_t x9_1 = *(x8 + 0x20) + x10 - x11
    void* x8_3 = *(*(*(x8 + 8) + (x9_1 u>> 6 & 0x3fffffffffffff8)) + ((x9_1 & 0x1ff) << 3))
    
    if (x8_3 != 0)
        return *(x8_3 + 0x58)

return 0
