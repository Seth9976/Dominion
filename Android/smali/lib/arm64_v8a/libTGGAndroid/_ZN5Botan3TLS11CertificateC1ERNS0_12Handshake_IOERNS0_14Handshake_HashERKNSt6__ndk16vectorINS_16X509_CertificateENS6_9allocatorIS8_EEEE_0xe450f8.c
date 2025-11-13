// 函数: _ZN5Botan3TLS11CertificateC1ERNS0_12Handshake_IOERNS0_14Handshake_HashERKNSt6__ndk16vectorINS_16X509_CertificateENS6_9allocatorIS8_EEEE
// 地址: 0xe450f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::TLS::Certificate + 0x10
std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::vector(
    arg1 + 8)
(*(*arg2 + 8))(arg2, arg1)
void* x25 = *arg3
int64_t x24 = *(arg3 + 8)
void* result
void* result_2 = result
size_t x26 = x24 - x25
int64_t var_70
uint64_t x28 = var_70 - result_2 + x26

if (*(arg3 + 0x10) - x25 u< x28)
    int64_t x0_3 = operator new(x28)
    x24 = x0_3 + x26
    
    if (x26 s>= 1)
        memcpy(x0_3, x25, x26)
    
    *arg3 = x0_3
    *(arg3 + 8) = x24
    *(arg3 + 0x10) = x0_3 + x28
    
    if (x25 != 0)
        operator delete(x25)
        x24 = *(arg3 + 8)
        result_2 = result

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    arg3, x24, result_2)

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
