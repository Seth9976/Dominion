// 函数: sub_eabc78
// 地址: 0xeabc78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg3[2] = 0
arg3[3] = 0
*arg3 = _vtable_for_Botan::OID + 0x10
int64_t* x21_1 = &arg3[1]
*x21_1 = 0
int64_t x23 = *(arg1 + 8)
int64_t x8_1 = *(arg1 + 0x10)
uint64_t x22 = x8_1 - x23

if (x8_1 == x23)
    goto label_eabcf8

if ((x22 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x0_1 = operator new(x22)
    arg3[1] = x0_1
    arg3[2] = x0_1
    arg3[3] = x0_1 + (x22 s>> 2 << 2)
    memcpy(x0_1, x23, x22)
    arg3[2] = x0_1 + x22
label_eabcf8:
    x21_1 = &arg3[5]
    __builtin_memset(x21_1, 0, 0x18)
    x21_1[-1] = _vtable_for_Botan::ASN1_String + 0x10
    int64_t x23_1 = *(arg2 + 8)
    int64_t x8_6 = *(arg2 + 0x10)
    uint64_t x22_1 = x8_6 - x23_1
    
    if (x8_6 == x23_1)
        goto label_eabd44
    
    if ((x22_1 & 0xffffffff80000000) == 0)
        int64_t x0_3 = operator new(x22_1)
        int64_t x24_2 = x0_3 + x22_1
        arg3[5] = x0_3
        arg3[6] = x0_3
        arg3[7] = x24_2
        memcpy(x0_3, x23_1, x22_1)
        arg3[6] = x24_2
    label_eabd44:
        int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &arg3[8])
        arg3[0xb].d = *(arg2 + 0x38)
        return result

int64_t* x0_7 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_8 = *x21_1

if (x8_8 != 0)
    arg3[6] = x8_8
    operator delete(x8_8)

void* x0_9 = arg3[1]
*arg3 = _vtable_for_Botan::OID + 0x10

if (x0_9 != 0)
    arg3[2] = x0_9
    operator delete(x0_9)

sub_1101e04(x0_7)
noreturn
