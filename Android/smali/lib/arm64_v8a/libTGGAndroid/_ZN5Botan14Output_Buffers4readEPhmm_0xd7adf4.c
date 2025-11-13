// 函数: _ZN5Botan14Output_Buffers4readEPhmm
// 地址: 0xd7adf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x30)
int64_t entry_x3

if (x8 u<= entry_x3)
    if (*(arg1 + 0x28) + x8 u<= entry_x3)
        return Botan::Output_Buffers::get(Botan::assertion_failure("msg < message_count()", 
            "Message number is in range", "get", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa1b7)) __tailcall
    
    int64_t x8_2 = *(arg1 + 0x20) + entry_x3 - x8
    uint8_t* x0 = *(*(*(arg1 + 8) + (x8_2 u>> 6 & 0x3fffffffffffff8)) + ((x8_2 & 0x1ff) << 3))
    
    if (x0 != 0)
        return Botan::SecureQueue::read(x0, arg2) __tailcall

return 0
