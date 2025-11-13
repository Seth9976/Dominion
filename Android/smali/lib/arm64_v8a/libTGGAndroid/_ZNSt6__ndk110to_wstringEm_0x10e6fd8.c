// 函数: _ZNSt6__ndk110to_wstringEm
// 地址: 0x10e6fd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char var_60[0x18]
void* result = std::__ndk1::__itoa::__u64toa(arg1, &var_60)
void* x22 = result - &var_60

if (x22 u>= 0x3ffffffffffffff0)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* result_1 = result
    void* result_2
    char* entry_x8
    
    if (x22 u> 4)
        void* x23_1 = (x22 + 4) & 0xfffffffffffffffc
        result = operator new(x23_1 << 2)
        *(entry_x8 + 8) = x22
        *(entry_x8 + 0x10) = result
        *entry_x8 = x23_1 | 1
        result_2 = result
    else
        *entry_x8 = (x22.d << 1).b
        result_2 = &entry_x8[4]
    char (* x8_4)[0x18] = &var_60
    
    if (&var_60 != result_1)
        int64_t x9_1 = result_1 - &var_60
        int64_t i_2
        
        if (x9_1 u>= 2)
            i_2 = x9_1 & 0xfffffffffffffffe
            void* x11_1 = result_2 + 4
            x8_4 = &var_60[i_2]
            result_2 += i_2 << 2
            void* x12_1 = &var_60 | 1
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
        
        if (x9_1 u< 2 || x9_1 != i_2)
            do
                uint32_t x9_2 = zx.d(*x8_4)
                x8_4 = &(*x8_4)[1]
                *result_2 = x9_2
                result_2 += 4
            while (result_1 != x8_4)
    
    *result_2 = 0
    
    if (*(x21 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
