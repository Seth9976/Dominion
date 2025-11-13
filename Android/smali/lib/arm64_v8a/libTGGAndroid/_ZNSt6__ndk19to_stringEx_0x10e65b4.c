// 函数: _ZNSt6__ndk19to_stringEx
// 地址: 0x10e65b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
char var_5c
char* x1 = &var_5c
int64_t var_48
int64_t* x20 = &var_48
var_48 = *(x23 + 0x28)

if ((arg1 & 0xffffffff80000000) != 0)
    x1 = &var_5c | 1
    arg1 = neg.q(arg1)
    var_5c = 0x2d

int64_t x8_1 = &var_48 - x1
uint32_t x9_5

if (x8_1 s<= 0x13)
    x9_5 = ((0x40 - _CountLeadingZeros(arg1 | 1)) * 0x4d1) u>> 0xc

if (x8_1 s> 0x13 || x8_1 s>= sx.q(x9_5 - (*(&data_87a100 + (zx.q(x9_5) << 3)) u> arg1 ? 1 : 0) + 1))
    x20 = std::__ndk1::__itoa::__u64toa(arg1, x1)

size_t x21 = x20 - &var_5c

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
    
    if (&var_5c != x20)
        memcpy(x19_1, &var_5c, x21)
        x19_1 += x21
    
    *x19_1 = 0
    
    if (*(x23 + 0x28) == var_48)
        return 

__stack_chk_fail()
noreturn
