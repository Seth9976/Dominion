// 函数: _ZN5Botan3TLS21Datagram_Handshake_IOC2ENSt6__ndk18functionIFvthRKNS2_6vectorIhNS2_9allocatorIhEEEEEEERNS0_27Connection_Sequence_NumbersEtmm
// 地址: 0xe5c234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::TLS::Datagram_Handshake_IO + 0x10
*(arg1 + 8) = arg3
*(arg1 + 0x18) = 0
*(arg1 + 0x10) = arg1 + 0x18
*(arg1 + 0x20) = 0
*(arg1 + 0x30) = 0
void* x21 = arg1
*(arg1 + 0x28) = arg1 + 0x30
*(arg1 + 0x40) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
int64_t x0 = operator new(0x18)
*(x21 + 0x40) = x0
*(x21 + 0x50) = x0 + 0x18
__builtin_memset(x0, 0, 0x18)
*(x21 + 0x60) = 0
*(x21 + 0x58) = x21 + 0x60
*(x21 + 0x48) = x0 + 0x18
*(x21 + 0x68) = 0
*(x21 + 0x70) = arg5
__builtin_memset(x21 + 0x80, 0, 0x14)
int64_t entry_x5
*(x21 + 0x78) = entry_x5
int64_t* result = *(arg2 + 0x20)

if (result == 0)
    *(x21 + 0xc0) = 0
else if (arg2 == result)
    *(x21 + 0xc0) = x21 + 0xa0
    result = (*(**(arg2 + 0x20) + 0x18))()
else
    result = (*(*result + 0x10))()
    *(x21 + 0xc0) = result

*(x21 + 0xd0) = arg4.w
return result
