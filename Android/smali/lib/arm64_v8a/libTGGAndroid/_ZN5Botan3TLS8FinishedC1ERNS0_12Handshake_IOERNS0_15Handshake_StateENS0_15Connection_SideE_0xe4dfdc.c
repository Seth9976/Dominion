// 函数: _ZN5Botan3TLS8FinishedC1ERNS0_12Handshake_IOERNS0_15Handshake_StateENS0_15Connection_SideE
// 地址: 0xe4dfdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg3
*arg1 = _vtable_for_Botan::TLS::Finished + 0x10
int32_t entry_x3
sub_e4e140(arg1 + 8, arg3, entry_x3)
(*(*arg2 + 8))(arg2, arg1)
void* x25 = *(x21 + 0xe8)
int64_t x24 = *(x21 + 0xf0)
void* result
void* result_2 = result
size_t x26 = x24 - x25
int64_t var_70
uint64_t x28 = var_70 - result_2 + x26

if (*(x21 + 0xf8) - x25 u< x28)
    int64_t x0_3 = operator new(x28)
    x24 = x0_3 + x26
    
    if (x26 s>= 1)
        memcpy(x0_3, x25, x26)
    
    *(x21 + 0xe8) = x0_3
    *(x21 + 0xf0) = x24
    *(x21 + 0xf8) = x0_3 + x28
    
    if (x25 != 0)
        operator delete(x25)
        x24 = *(x21 + 0xf0)
        result_2 = result

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    x21 + 0xe8, x24, result_2)

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
