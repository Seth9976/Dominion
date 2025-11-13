// 函数: sub_eae02c
// 地址: 0xeae02c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = arg1

if (arg2 == 1)
    __cxa_begin_catch(x24)
    void** x0_1 = operator new(0x48)
    x0_1[3] = 0
    x0_1[4] = 0
    *x0_1 = _vtable_for_Botan::Cert_Extension::Unknown_Extension + 0x10
    x0_1[1] = _vtable_for_Botan::OID + 0x10
    x0_1[2] = 0
    int64_t x26_1 = *(arg5 + 8)
    int64_t x8_2 = *(arg5 + 0x10)
    uint64_t x22 = x8_2 - x26_1
    
    if (x8_2 == x26_1)
        goto label_eae0b4
    
    if ((x22 & 0xffffffff80000000) == 0)
        int64_t x0_3 = operator new(x22)
        x0_1[2] = x0_3
        x0_1[3] = x0_3
        x0_1[4] = x0_3 + (x22 s>> 2 << 2)
        memcpy(x0_3, x26_1, x22)
        x0_1[3] = x0_3 + x22
    label_eae0b4:
        void* x9_2 = *arg6
        x0_1[7] = 0
        x0_1[8] = 0
        x0_1[5].b = arg4 & 1
        x0_1[6] = 0
        *arg3 = x0_1
        (*(x9_2 + 0x30))(arg6)
        (*(*x0_1 + 0x48))(x0_1)
        int64_t result = __cxa_end_catch()
        
        if ((zx.d(arg7) & 1) == 0)
            return result
        
        return operator delete(arg8)
    
    x24 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    arg6 = x0_1

void* x8_10 = *arg6
*arg3 = nullptr
(*(x8_10 + 0x30))(arg6)

if ((zx.d(arg7) & 1) != 0)
    operator delete(arg8)

sub_1101e04(x24)
noreturn
