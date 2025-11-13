// 函数: _ZNK5Botan14Output_Buffers3getEm
// 地址: 0xd7ae78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x30)
int64_t entry_x1

if (x8 u> entry_x1)
    return 0

if (*(arg1 + 0x28) + x8 u<= entry_x1)
    uint8_t* x0_2
    uint64_t x1
    x0_2, x1 = Botan::assertion_failure("msg < message_count()", "Message number is in range", 
        "get", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa1b7)
    return Botan::SecureQueue::read(x0_2, x1) __tailcall

int64_t x8_2 = *(arg1 + 0x20) + entry_x1 - x8
return *(*(*(arg1 + 8) + (x8_2 u>> 6 & 0x3fffffffffffff8)) + ((x8_2 & 0x1ff) << 3))
