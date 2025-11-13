// 函数: _ZNK5Botan3TLS21Datagram_Handshake_IO15format_fragmentEPKhmttNS0_14Handshake_TypeEt
// 地址: 0xe71ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = arg5
int32_t x22 = arg4.d
size_t x20 = arg3
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char* x25_1

if (arg3 == -0xc)
    x25_1 = nullptr
label_e71e58:
    int32_t entry_x6
    int32_t temp0_1 = _byteswap(entry_x6)
    x25_1[2] = (x24 u>> 8).b
    *x25_1 = arg6.b
    x25_1[1] = 0
    x25_1[3] = x24.b
    x25_1[6] = 0
    x25_1[8] = x22.b
    x25_1[7] = (x22 u>> 8).b
    x25_1[9] = (x20 u>> 0x10).b
    x25_1[0xa] = (x20 u>> 8).b
    *(x25_1 + 4) = (temp0_1 u>> 0x10).w
    x25_1[0xb] = (x20.d).b
    
    if (x20 == 0)
        return 
    
    if (arg2 != 0)
        return memmove(&x25_1[0xc], arg2, x20) __tailcall
else
    if (((arg3 + 0xc) & 0xffffffff80000000) == 0)
        char* x0_1 = operator new(arg3 + 0xc)
        void* x28_1 = &x0_1[arg3 + 0xc]
        x25_1 = x0_1
        *entry_x8 = x0_1
        entry_x8[2] = x28_1
        memset(x0_1, 0, arg3 + 0xc)
        entry_x8[1] = x28_1
        goto label_e71e58
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_5 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
void* x8_3 = *entry_x8

if (x8_3 != 0)
    entry_x8[1] = x8_3
    operator delete(x8_3)

sub_1101e04(x0_5)
noreturn
