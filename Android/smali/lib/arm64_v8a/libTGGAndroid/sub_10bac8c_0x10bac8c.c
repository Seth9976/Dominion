// 函数: sub_10bac8c
// 地址: 0x10bac8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int64_t* result = arg1

if (arg1 == 0)
    goto label_10bae04

int64_t x9_1 = *(arg5 + 0x18)
int64_t x10_2 = (arg4 - arg2) s>> 2
int64_t x8_1 = arg3 - arg2
size_t n

if (x9_1 s> x10_2)
    n = x9_1 - x10_2
else
    n = 0

int64_t x0_1
int64_t x25_1

if (x8_1 s>= 1)
    x25_1 = x8_1 s>> 2
    x0_1 = (*(*result + 0x60))(result, arg2, x25_1)

if (x8_1 s>= 1 && x0_1 != x25_1)
label_10badf8:
    result = nullptr
label_10bae04:
    
    if (*(x26 + 0x28) == x8)
        return result
else
    if (n s< 1)
    label_10badc0:
        int64_t x8_8 = arg4 - arg3
        int64_t x0_8
        int64_t x22_2
        
        if (x8_8 s>= 1)
            x22_2 = x8_8 s>> 2
            x0_8 = (*(*result + 0x60))(result, arg3, x22_2)
        
        if (x8_8 s>= 1 && x0_8 != x22_2)
            goto label_10badf8
        
        *(arg5 + 0x18) = 0
        goto label_10bae04
    
    if (n u< 0x3ffffffffffffff0)
        int64_t var_80
        void* s_2
        void* s
        
        if (n u>= 5)
            int64_t x27_1 = (n + 4) & 0x7ffffffffffffffc
            void* s_1 = operator new(x27_1 << 2)
            s = s_1
            size_t n_1 = n
            s_2 = s_1
            var_80 = x27_1 | 1
        else
            s = &var_80 | 4
            var_80.b = (n.d << 1).b
        
        wmemset(s, arg6, n)
        *(s + (n << 2)) = 0
        void* s_3
        
        if ((zx.d(var_80.b) & 1) == 0)
            s_3 = &var_80 | 4
        else
            s_3 = s_2
        
        int64_t x0_5 = (*(*result + 0x60))(result, s_3, n)
        
        if ((zx.d(var_80.b) & 1) != 0)
            operator delete(s_2)
        
        if (x0_5 != n)
            goto label_10badf8
        
        goto label_10badc0
    
    std::__ndk1::__basic_string_common<true>::__throw_length_error()

__stack_chk_fail()
noreturn
