// 函数: _ZN5Botan3DES12key_scheduleEPKhm
// 地址: 0xd0d614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg1 + 8)
void* x10 = *(arg1 + 0x10) - x0

if (x10 s>> 2 u<= 0x1f)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
    x0 = *(arg1 + 8)
else if (x10 != 0x80)
    *(arg1 + 0x10) = x0 + 0x80
    return sub_d0d684(x0, arg2) __tailcall

return sub_d0d684(x0, arg2) __tailcall
