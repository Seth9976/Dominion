// 函数: _ZN5Botan14OCB_Decryption7processEPhm
// 地址: 0xddfb18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1 = *(arg1 + 0x58) * *(arg1 + 0x60)
int64_t entry_result

if (entry_result u% x9_1 != 0)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_1
    uint64_t x1
    x0_1, x1 = Botan::assertion_failure("sz % update_granularity() == 0", "Invalid OCB input size", 
        "process", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf25d)
    return Botan::OCB_Decryption::finish(x0_1, x1) __tailcall

Botan::OCB_Decryption::decrypt(arg1, arg2)
return entry_result
