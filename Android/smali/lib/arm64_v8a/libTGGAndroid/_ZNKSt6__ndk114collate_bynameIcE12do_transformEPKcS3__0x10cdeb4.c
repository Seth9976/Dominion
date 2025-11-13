// 函数: _ZNKSt6__ndk114collate_bynameIcE12do_transformEPKcS3_
// 地址: 0x10cdeb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int64_t entry_x2
void* x22 = entry_x2 - arg2

if (x22 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    int64_t var_70
    void* var_60
    void* x24_1
    
    if (x22 u> 0x16)
        uint64_t x25_1 = (x22 + 0x10) & 0xfffffffffffffff0
        void* x0_1 = operator new(x25_1)
        x24_1 = x0_1
        void* var_68_1 = x22
        var_60 = x0_1
        var_70 = x25_1 | 1
        
        if (arg2 != entry_x2)
            memcpy(x24_1, arg2, x22)
            x24_1 += x22
    else
        var_70.b = (x22.d << 1).b
        x24_1 = &var_70 | 1
        
        if (arg2 != entry_x2)
            memcpy(x24_1, arg2, x22)
            x24_1 += x22
    
    *x24_1 = 0
    void* x24_2 = &var_70 | 1
    void* x1_1
    
    if ((zx.d(var_70.b) & 1) == 0)
        x1_1 = x24_2
    else
        x1_1 = var_60
    
    size_t x0_3 = strxfrm_l(nullptr, x1_1, nullptr, *(arg1 + 0x10))
    
    if (x0_3 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        char* entry_x8
        void* x22_2
        
        if (x0_3 u>= 0x17)
            uint64_t x23_2 = (x0_3 + 0x10) & 0xfffffffffffffff0
            void* x0_5 = operator new(x23_2)
            x22_2 = x0_5
            *(entry_x8 + 8) = x0_3
            *(entry_x8 + 0x10) = x0_5
            *entry_x8 = x23_2 | 1
            memset(x22_2, 0, x0_3)
        else
            *entry_x8 = (x0_3.d << 1).b
            x22_2 = &entry_x8[1]
            
            if (x0_3 != 0)
                memset(x22_2, 0, x0_3)
        
        *(x22_2 + x0_3) = 0
        uint64_t x10_1 = zx.q(*entry_x8)
        void* x1_2
        
        if ((zx.d(var_70.b) & 1) == 0)
            x1_2 = x24_2
        else
            x1_2 = var_60
        
        int32_t temp0_1 = x10_1.d & 1
        char* x0_7
        
        if (temp0_1 != 0)
            x0_7 = *(entry_x8 + 0x10)
        else
            x0_7 = &entry_x8[1]
        
        uint64_t x8_10
        
        if (temp0_1 == 0)
            x8_10 = x10_1 u>> 1
        else
            x8_10 = *(entry_x8 + 8)
        
        int64_t result = strxfrm_l(x0_7, x1_2, x8_10 + 1, *(arg1 + 0x10))
        
        if ((zx.d(var_70.b) & 1) != 0)
            result = operator delete(var_60)
        
        if (*(x26 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
