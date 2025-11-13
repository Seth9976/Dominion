// 函数: _ZNK5Botan3TLS19Stream_Handshake_IO6formatERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEENS0_14Handshake_TypeE
// 地址: 0xe704f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg2
int64_t x8 = *(arg2 + 8)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
size_t x21 = x8 - x20
char* x23_1

if (x21 == -4)
    x23_1 = nullptr
label_e70560:
    char entry_x2
    *x23_1 = entry_x2
    x23_1[1] = (x21 u>> 0x10).b
    x23_1[2] = (x21 u>> 8).b
    x23_1[3] = (x21.d).b
    
    if (x21 == 0)
        return 
    
    if (x20 != 0)
        return memmove(&x23_1[4], x20, x21) __tailcall
else
    if (((x21 + 4) & 0xffffffff80000000) == 0)
        char* x0_1 = operator new(x21 + 4)
        void* x25_1 = &x0_1[x21 + 4]
        x23_1 = x0_1
        *entry_x8 = x0_1
        entry_x8[2] = x25_1
        memset(x0_1, 0, x21 + 4)
        entry_x8[1] = x25_1
        goto label_e70560
    
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
