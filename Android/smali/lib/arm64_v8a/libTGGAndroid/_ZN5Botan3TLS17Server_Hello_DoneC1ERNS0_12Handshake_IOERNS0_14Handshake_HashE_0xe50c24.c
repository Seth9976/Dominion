// 函数: _ZN5Botan3TLS17Server_Hello_DoneC1ERNS0_12Handshake_IOERNS0_14Handshake_HashE
// 地址: 0xe50c24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::TLS::Server_Hello_Done + 0x10
(*(*arg2 + 8))(arg2, arg1)
int64_t* entry_x2
void* x23 = *entry_x2
int64_t x22 = entry_x2[1]
void* result
void* result_2 = result
size_t x24 = x22 - x23
int64_t var_60
uint64_t x26 = var_60 - result_2 + x24

if (entry_x2[2] - x23 u< x26)
    int64_t x0_2 = operator new(x26)
    x22 = x0_2 + x24
    
    if (x24 s>= 1)
        memcpy(x0_2, x23, x24)
    
    *entry_x2 = x0_2
    entry_x2[1] = x22
    entry_x2[2] = x0_2 + x26
    
    if (x23 != 0)
        operator delete(x23)
        x22 = entry_x2[1]
        result_2 = result

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    entry_x2, x22, result_2)

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
