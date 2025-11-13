// 函数: _ZN5Botan10Extensions15Extensions_InfoC2EbRKNSt6__ndk16vectorIhNS2_9allocatorIhEEEEPNS_21Certificate_ExtensionE
// 地址: 0xeafc98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
int64_t entry_x3
*arg1 = entry_x3
void** result = operator new(0x20)
result[2] = 0
result[3] = entry_x3
*result = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::Certificate_Extension*, std::__ndk1::default_delete<Botan::Certificate_Extension>, std::__ndk1::allocator<Botan::Certificate_Extension> >
    + 0x10
result[1] = 0
*(x19 + 0x10) = 0
*(x19 + 8) = result
*(x19 + 0x18) = 0
*(x19 + 0x20) = 0
int64_t x9 = *arg3
int64_t x8_1 = *(arg3 + 8)
uint64_t x24 = x8_1 - x9

if (x8_1 != x9)
    if ((x24 & 0xffffffff80000000) != 0)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if (x19 == -0x10)
            sub_1101e04(x0_3)
            noreturn
        
        (*(*(x19 + 0x10) + 0x30))(x19 + 0x10)
        sub_1101e04(x0_3)
        noreturn
    
    result = operator new(x24)
    *(x19 + 0x10) = result
    *(x19 + 0x18) = result
    *(x19 + 0x20) = result + x24
    int64_t x1 = *arg3
    void* result_1 = result
    size_t x21_1 = *(arg3 + 8) - x1
    
    if (x21_1 s>= 1)
        result = memcpy(result_1, x1, x21_1)
        result_1 += x21_1
    
    *(x19 + 0x18) = result_1

*(x19 + 0x28) = arg2.b & 1
return result
