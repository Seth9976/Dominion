// 函数: _ZNSt6__ndk110to_wstringEi
// 地址: 0x10e6a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char var_54
char* x1 = &var_54
void var_49
void* x19 = &var_49

if ((arg1 & 0x80000000) != 0)
    x1 = &var_54 | 1
    arg1 = neg.d(arg1)
    var_54 = 0x2d

int64_t x8_1 = &var_49 - x1
uint32_t x9_5

if (x8_1 s<= 9)
    x9_5 = ((0x20 - _CountLeadingZeros(arg1 | 1)) * 0x4d1) u>> 0xc

if (x8_1 s> 9 || x8_1 s>= sx.q(x9_5 - (*(&data_87a0d8 + (zx.q(x9_5) << 2)) u> arg1 ? 1 : 0) + 1))
    x19 = std::__ndk1::__itoa::__u32toa(arg1, x1)

int64_t x22 = x19 - &var_54

if (x22 u>= 0x3ffffffffffffff0)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* x20_1
    char* entry_x8
    
    if (x22 u> 4)
        int64_t x23_1 = (x22 + 4) & 0xfffffffffffffffc
        arg1 = operator new(x23_1 << 2)
        *(entry_x8 + 8) = x22
        *(entry_x8 + 0x10) = arg1
        *entry_x8 = x23_1 | 1
        x20_1 = arg1
    else
        *entry_x8 = (x22.d << 1).b
        x20_1 = &entry_x8[4]
    char* x8_5 = &var_54
    
    if (&var_54 != x19)
        int64_t x9_8 = x19 - &var_54
        int64_t i_2
        
        if (x9_8 u>= 2)
            i_2 = x9_8 & 0xfffffffffffffffe
            void* x11_1 = x20_1 + 4
            x8_5 = &(&var_54)[i_2]
            x20_1 += i_2 << 2
            void* x12_1 = &var_54 | 1
            int64_t i_1 = i_2
            int64_t i
            
            do
                uint32_t x14_1 = zx.d(*(x12_1 - 1))
                uint32_t x15_1 = zx.d(*x12_1)
                x12_1 += 2
                i = i_1
                i_1 -= 2
                *(x11_1 - 4) = x14_1
                *x11_1 = x15_1
                x11_1 += 8
            while (i != 2)
        
        if (x9_8 u< 2 || x9_8 != i_2)
            do
                uint32_t x9_9 = zx.d(*x8_5)
                x8_5 = &x8_5[1]
                *x20_1 = x9_9
                x20_1 += 4
            while (x19 != x8_5)
    
    *x20_1 = 0
    
    if (*(x21 + 0x28) == x8)
        return 

__stack_chk_fail()
noreturn
