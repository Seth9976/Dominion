// 函数: _ZNSt6__ndk19to_stringEi
// 地址: 0x10e633c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char var_54
char* x1 = &var_54
void var_49
void* x20 = &var_49

if ((arg1 & 0x80000000) != 0)
    x1 = &var_54 | 1
    arg1 = neg.d(arg1)
    var_54 = 0x2d

int64_t x8_1 = &var_49 - x1
uint32_t x9_5

if (x8_1 s<= 9)
    x9_5 = ((0x20 - _CountLeadingZeros(arg1 | 1)) * 0x4d1) u>> 0xc

if (x8_1 s> 9 || x8_1 s>= sx.q(x9_5 - (*(&data_87a0d8 + (zx.q(x9_5) << 2)) u> arg1 ? 1 : 0) + 1))
    x20 = std::__ndk1::__itoa::__u32toa(arg1, x1)

size_t x21 = x20 - &var_54

if (x21 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* x19_1
    char* entry_x8
    
    if (x21 u> 0x16)
        uint64_t x22_1 = (x21 + 0x10) & 0xfffffffffffffff0
        arg1 = operator new(x22_1)
        *(entry_x8 + 8) = x21
        *(entry_x8 + 0x10) = arg1
        *entry_x8 = x22_1 | 1
        x19_1 = arg1
    else
        *entry_x8 = (x21.d << 1).b
        x19_1 = &entry_x8[1]
    
    if (&var_54 != x20)
        memcpy(x19_1, &var_54, x21)
        x19_1 += x21
    
    *x19_1 = 0
    
    if (*(x23 + 0x28) == x8)
        return 

__stack_chk_fail()
noreturn
