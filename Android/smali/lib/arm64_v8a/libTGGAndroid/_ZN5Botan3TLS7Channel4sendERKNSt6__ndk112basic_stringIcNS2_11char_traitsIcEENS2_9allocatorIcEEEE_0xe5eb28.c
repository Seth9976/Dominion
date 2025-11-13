// 函数: _ZN5Botan3TLS7Channel4sendERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xe5eb28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
*(entry_x1 + 8)
void* x1

if ((zx.d(*entry_x1) & 1) != 0)
    x1 = *(entry_x1 + 0x10)
else
    x1 = &entry_x1[1]

return Botan::TLS::Channel::send(arg1, x1) __tailcall
