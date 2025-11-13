// 函数: _ZN5Botan3TLS18Certificate_StatusC1ERNS0_12Handshake_IOERNS0_14Handshake_HashENSt6__ndk110shared_ptrIKNS_4OCSP8ResponseEEE
// 地址: 0xe42384
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = arg3
*arg1 = _vtable_for_Botan::TLS::Certificate_Status + 0x10
int64_t* entry_x3
void* x25 = *entry_x3
__builtin_memset(arg1 + 8, 0, 0x18)
int64_t x9 = *(x25 + 8)
int64_t x8_1 = *(x25 + 0x10)
uint64_t x24 = x8_1 - x9

if (x8_1 != x9)
    if ((x24 & 0xffffffff80000000) != 0)
        int64_t* x0_11 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x0_12 = *(arg1 + 8)
        
        if (x0_12 != 0)
            *(arg1 + 0x10) = x0_12
            operator delete(x0_12)
        
        sub_1101e04(x0_11)
        noreturn
    
    int64_t x0_1 = operator new(x24)
    *(arg1 + 8) = x0_1
    *(arg1 + 0x10) = x0_1
    *(arg1 + 0x18) = x0_1 + x24
    int64_t x1 = *(x25 + 8)
    int64_t x23_1 = x0_1
    size_t x24_1 = *(x25 + 0x10) - x1
    
    if (x24_1 s>= 1)
        memcpy(x23_1, x1, x24_1)
        x23_1 += x24_1
    
    *(arg1 + 0x10) = x23_1

(*(*arg2 + 8))(arg2, arg1)
void* x25_1 = *x21
int64_t x24_2 = x21[1]
void* result
void* result_2 = result
size_t x26 = x24_2 - x25_1
int64_t var_70
uint64_t x28 = var_70 - result_2 + x26

if (x21[2] - x25_1 u< x28)
    int64_t x0_5 = operator new(x28)
    x24_2 = x0_5 + x26
    
    if (x26 s>= 1)
        memcpy(x0_5, x25_1, x26)
    
    *x21 = x0_5
    x21[1] = x24_2
    x21[2] = x0_5 + x28
    
    if (x25_1 != 0)
        operator delete(x25_1)
        x24_2 = x21[1]
        result_2 = result

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    x21, x24_2, result_2)

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
