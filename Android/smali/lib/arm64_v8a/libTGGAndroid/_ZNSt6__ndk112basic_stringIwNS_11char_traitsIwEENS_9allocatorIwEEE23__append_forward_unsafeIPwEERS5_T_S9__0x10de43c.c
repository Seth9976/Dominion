// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE23__append_forward_unsafeIPwEERS5_T_S9_
// 地址: 0x10de43c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
wchar_t* x22 = arg2
uint64_t x8_1 = zx.q(*arg1)
int64_t entry_x2
void* x25 = entry_x2 - arg2
uint64_t x1
void* x9_1
uint64_t x21_1

if ((x8_1.d & 1) == 0)
    if (x25 == 0)
        goto label_10de670
    
    x21_1 = x8_1 u>> 1
    x9_1 = &arg1[1]
    x1 = 4
    goto label_10de4ac

if (x25 == 0)
label_10de670:
    
    if (*(x23 + 0x28) == x8)
        return arg1
else
    x8_1 = *arg1
    x21_1 = *(arg1 + 8)
    x9_1 = *(arg1 + 0x10)
    x1 = (x8_1 & 0xfffffffffffffffe) - 1
label_10de4ac:
    int64_t x24_1 = x25 s>> 2
    
    if (x9_1 u> x22 || x9_1 + (x21_1 << 2) u<= x22)
        int128_t v0
        int128_t v1
        
        if (x1 - x21_1 u< x24_1)
            v0, v1 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                arg1, x1, x24_1 + x21_1 - x1, x21_1, x21_1, 0)
            x8_1 = zx.q(*arg1)
        
        void* x9_4
        
        if ((x8_1.d & 1) != 0)
            x9_4 = *(arg1 + 0x10)
        else
            x9_4 = &arg1[1]
        
        wchar_t* x8_5 = x9_4 + (x21_1 << 2)
        
        if (x22 != entry_x2)
            if (x25 - 4 u< 0x1c)
            label_10de5bc:
                
                do
                    wchar_t x9_5 = *x22
                    x22 = &x22[1]
                    *x8_5 = x9_5
                    x8_5 = &x8_5[1]
                while (entry_x2 != x22)
            else
                uint64_t x10_3 = (x25 - 4) u>> 2
                
                if (x8_5 u< &x22[x10_3 + 1] && x9_4 + ((x21_1 + x10_3) << 2) + 4 u> x22)
                    goto label_10de5bc
                
                int64_t i_2 = (x10_3 + 1) & 0x7ffffffffffffff8
                void* x11_6 = &x22[4]
                x8_5 = &x8_5[i_2]
                x22 = &x22[i_2]
                void* x12_2 = x9_4 + (x21_1 << 2) + 0x10
                int64_t i_1 = i_2
                int64_t i
                
                do
                    v0 = *(x11_6 - 0x10)
                    v1 = *x11_6
                    x11_6 += 0x20
                    i = i_1
                    i_1 -= 8
                    *(x12_2 - 0x10) = v0
                    *x12_2 = v1
                    x12_2 += 0x20
                while (i != 8)
                
                if (x10_3 + 1 != i_2)
                    goto label_10de5bc
        
        *x8_5 = 0
        int64_t x8_6 = x24_1 + x21_1
        
        if ((zx.d(*arg1) & 1) != 0)
            *(arg1 + 8) = x8_6
        else
            *arg1 = (x8_6.d << 1).b
        
        goto label_10de670
    
    if ((x25 & 0xffffffff80000000) == 0)
        int64_t var_70
        void* var_60
        int32_t* x21_2
        
        if (x24_1 u> 4)
            int64_t x26_1 = (x24_1 + 4) & 0xfffffffffffffffc
            void* x0_2 = operator new(x26_1 << 2)
            x21_2 = x0_2
            int64_t var_68 = x24_1
            var_60 = x0_2
            var_70 = x26_1 | 1
            
            if (x22 != entry_x2)
                memcpy(x21_2, x22, x25 & 0xfffffffffffffffc)
                x21_2 = ((x25 - 4) & 0xfffffffffffffffc) + x21_2 + 4
        else
            var_70.b = (x25 u>> 1).b & 0xfe
            x21_2 = &var_70 | 4
            
            if (x22 != entry_x2)
                memcpy(x21_2, x22, x25 & 0xfffffffffffffffc)
                x21_2 = ((x25 - 4) & 0xfffffffffffffffc) + x21_2 + 4
        
        *x21_2 = 0
        uint64_t x1_2
        
        if ((zx.d(var_70.b) & 1) == 0)
            x1_2 = &var_70 | 4
        else
            x1_2 = var_60
        
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(
            arg1, x1_2)
        
        if ((zx.d(var_70.b) & 1) != 0)
            operator delete(var_60)
        
        goto label_10de670
    
    std::__ndk1::__basic_string_common<true>::__throw_length_error()

__stack_chk_fail()
noreturn
