// 函数: _ZNKSt6__ndk114collate_bynameIwE12do_transformEPKwS3_
// 地址: 0x10ce5c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t entry_x2
void* x25 = entry_x2 - arg2

if (entry_x2 - arg2 s< 0)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    int64_t x26_1 = x25 s>> 2
    int64_t var_80
    void* var_70
    void* x23_1
    
    if (x26_1 u> 4)
        int64_t x27_1 = (x26_1 + 4) & 0xfffffffffffffffc
        void* x0_1 = operator new(x27_1 << 2)
        x23_1 = x0_1
        int64_t var_78_1 = x26_1
        var_70 = x0_1
        var_80 = x27_1 | 1
        
        if (arg2 != entry_x2)
            memcpy(x23_1, arg2, x25 & 0xfffffffffffffffc)
            x23_1 = ((x25 - 4) & 0xfffffffffffffffc) + x23_1 + 4
    else
        var_80.b = (x25 u>> 1).b & 0xfe
        x23_1 = &var_80 | 4
        
        if (arg2 != entry_x2)
            memcpy(x23_1, arg2, x25 & 0xfffffffffffffffc)
            x23_1 = ((x25 - 4) & 0xfffffffffffffffc) + x23_1 + 4
    
    *x23_1 = 0
    void* x23_2 = &var_80 | 4
    void* x1_1
    
    if ((zx.d(var_80.b) & 1) == 0)
        x1_1 = x23_2
    else
        x1_1 = var_70
    
    size_t n = wcsxfrm_l(nullptr, x1_1, 0, *(arg1 + 0x10))
    
    if (n u>= 0x3ffffffffffffff0)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        char* entry_x8
        void* s
        
        if (n u>= 5)
            int64_t x25_1 = (n + 4) & 0xfffffffffffffffc
            void* s_1 = operator new(x25_1 << 2)
            s = s_1
            *(entry_x8 + 8) = n
            *(entry_x8 + 0x10) = s_1
            *entry_x8 = x25_1 | 1
            wmemset(s, 0, n)
        else
            char* x22_3 = entry_x8
            *x22_3 = (n.d << 1).b
            s = &x22_3[4]
            
            if (n != 0)
                wmemset(s, 0, n)
        
        uint32_t x8_11 = zx.d(var_80.b)
        *(s + (n << 2)) = 0
        uint64_t x11_1 = zx.q(*entry_x8)
        void* x1_2
        
        if ((x8_11 & 1) == 0)
            x1_2 = x23_2
        else
            x1_2 = var_70
        
        int32_t temp0_1 = x11_1.d & 1
        int64_t* x0_5
        
        if (temp0_1 == 0)
            x0_5 = &entry_x8[4]
        else
            x0_5 = *(entry_x8 + 0x10)
        
        uint64_t x8_13
        
        if (temp0_1 == 0)
            x8_13 = x11_1 u>> 1
        else
            x8_13 = *(entry_x8 + 8)
        
        int64_t result = wcsxfrm_l(x0_5, x1_2, x8_13 + 1, *(arg1 + 0x10))
        
        if ((zx.d(var_80.b) & 1) != 0)
            result = operator delete(var_70)
        
        if (*(x24 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
