// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE23__append_forward_unsafeIPcEERS5_T_S9_
// 地址: 0x10de1d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
char* x23 = arg2
uint64_t x8_1 = zx.q(*arg1)
void* entry_x2
void* x20 = entry_x2 - arg2
uint64_t x1
void* x9_1
uint64_t x22_1

if ((x8_1.d & 1) == 0)
    if (x20 == 0)
        goto label_10de3e8
    
    x22_1 = x8_1 u>> 1
    x9_1 = &arg1[1]
    x1 = 0x16
    
    if (x9_1 u<= x23 && x9_1 + x22_1 u> x23)
        goto label_10de25c
    
    goto label_10de290

if (x20 == 0)
label_10de3e8:
    
    if (*(x25 + 0x28) == x8)
        return arg1
else
    x8_1 = *arg1
    x22_1 = *(arg1 + 8)
    x9_1 = *(arg1 + 0x10)
    x1 = (x8_1 & 0xfffffffffffffffe) - 1
    
    if (x9_1 u> x23 || x9_1 + x22_1 u<= x23)
    label_10de290:
        int128_t v0
        int128_t v1
        
        if (x1 - x22_1 u< x20)
            v0, v1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
                arg1, x1, x20 + x22_1 - x1, x22_1, x22_1, 0)
            x8_1 = zx.q(*arg1)
        
        void* x9_4
        
        if ((x8_1.d & 1) != 0)
            x9_4 = *(arg1 + 0x10)
        else
            x9_4 = &arg1[1]
        
        void* x8_4 = x9_4 + x22_1
        
        if (x23 != entry_x2)
            if (x20 u< 0x20 || (x8_4 u< entry_x2 && x9_4 + entry_x2 + x22_1 - x23 u> x23))
            label_10de340:
                
                do
                    char x9_7 = *x23
                    x23 = &x23[1]
                    *x8_4 = x9_7
                    x8_4 += 1
                while (entry_x2 != x23)
            else
                void* i_2 = x20 & 0xffffffffffffffe0
                void* x11_1 = &x23[0x10]
                x8_4 += i_2
                x23 += i_2
                void* x9_6 = x22_1 + x9_4 + 0x10
                void* i_1 = i_2
                void* i
                
                do
                    v0 = *(x11_1 - 0x10)
                    v1 = *x11_1
                    x11_1 += 0x20
                    i = i_1
                    i_1 -= 0x20
                    *(x9_6 - 0x10) = v0
                    *x9_6 = v1
                    x9_6 += 0x20
                while (i != 0x20)
                
                if (x20 != i_2)
                    goto label_10de340
        
        *x8_4 = 0
        void* x8_5 = x20 + x22_1
        
        if ((zx.d(*arg1) & 1) != 0)
            *(arg1 + 8) = x8_5
        else
            *arg1 = (x8_5.d << 1).b
        
        goto label_10de3e8
    
label_10de25c:
    
    if (x20 u< -0x10)
        int64_t var_70
        void* var_60
        void* x22_2
        
        if (x20 u> 0x16)
            uint64_t x24_1 = (x20 + 0x10) & 0xfffffffffffffff0
            void* x0_2 = operator new(x24_1)
            x22_2 = x0_2
            void* var_68 = x20
            var_60 = x0_2
            var_70 = x24_1 | 1
            
            if (x23 != entry_x2)
                memcpy(x22_2, x23, x20)
                x22_2 += x20
        else
            var_70.b = (x20.d << 1).b
            x22_2 = &var_70 | 1
            
            if (x23 != entry_x2)
                memcpy(x22_2, x23, x20)
                x22_2 += x20
        
        *x22_2 = 0
        void* x1_2
        
        if ((zx.d(var_70.b) & 1) == 0)
            x1_2 = &var_70 | 1
        else
            x1_2 = var_60
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            arg1, x1_2)
        
        if ((zx.d(var_70.b) & 1) != 0)
            operator delete(var_60)
        
        goto label_10de3e8
    
    std::__ndk1::__basic_string_common<true>::__throw_length_error()

__stack_chk_fail()
noreturn
