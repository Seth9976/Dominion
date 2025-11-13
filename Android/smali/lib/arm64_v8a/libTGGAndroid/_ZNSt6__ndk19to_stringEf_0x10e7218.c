// 函数: _ZNSt6__ndk19to_stringEf
// 地址: 0x10e7218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t var_60
__builtin_memset(&var_60, 0, 0x18)
sub_10e7b94(&var_60, 0x16)
uint64_t x8_1 = zx.q(var_60.b)
int128_t v8
v8.q = fconvert.d(arg1.d)
uint64_t x21
uint64_t var_58

if ((x8_1.d & 1) == 0)
    x21 = x8_1 u>> 1
else
    x21 = var_58

while (true)
    char* s_1
    char* s
    
    if ((x8_1.d & 1) == 0)
        s = &var_60 | 1
    else
        s = s_1
    
    int32_t x0_1 = snprintf(s, x21 + 1, "%f", v8)
    
    if ((x0_1 & 0x80000000) != 0)
        x21 = 1 | (0x7fffffffffffffff & x21) << 1
    else
        uint64_t x1_2 = zx.q(x0_1)
        bool cond:1_1 = x21 u< x1_2
        x21 = x1_2
        
        if (not(cond:1_1))
            int64_t result
            int128_t v0_1
            result, v0_1 = sub_10e7b94(&var_60, x1_2)
            int128_t* entry_x8
            entry_x8[1].q = s_1
            *entry_x8 = var_60.o
            
            if (*(x22 + 0x28) == x8)
                return result
            
            __stack_chk_fail()
            noreturn
    
    sub_10e7b94(&var_60, x21)
    x8_1 = zx.q(var_60.b)
