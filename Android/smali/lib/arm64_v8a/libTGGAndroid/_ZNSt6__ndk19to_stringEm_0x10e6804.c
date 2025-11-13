// 函数: _ZNSt6__ndk19to_stringEm
// 地址: 0x10e6804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char var_60[0x18]
void* result = std::__ndk1::__itoa::__u64toa(arg1, &var_60)
void* x21 = result - &var_60

if (x21 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* result_2 = result
    void* result_1
    char* entry_x8
    
    if (x21 u> 0x16)
        uint64_t x22_1 = (x21 + 0x10) & 0xfffffffffffffff0
        result = operator new(x22_1)
        *(entry_x8 + 8) = x21
        *(entry_x8 + 0x10) = result
        *entry_x8 = x22_1 | 1
        result_1 = result
    else
        *entry_x8 = (x21.d << 1).b
        result_1 = &entry_x8[1]
    char (* x22_2)[0x18] = &var_60
    
    if (&var_60 != result_2)
        result = memcpy(result_1, &var_60, x21)
        int64_t x8_4 = result_2 - &var_60
        int64_t i_4
        
        if (x8_4 u>= 2)
            i_4 = x8_4 & 0xfffffffffffffffe
            x22_2 = &var_60[i_4]
            result_1 += i_4
            int64_t i_3 = i_4
            int64_t i
            
            do
                i = i_3
                i_3 -= 2
            while (i != 2)
        
        if (x8_4 u< 2 || x8_4 != i_4)
            void* i_2 = result_2 - x22_2
            void* i_1
            
            do
                i_1 = i_2
                i_2 -= 1
                result_1 += 1
            while (i_1 != 1)
    
    *result_1 = 0
    
    if (*(x23 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
