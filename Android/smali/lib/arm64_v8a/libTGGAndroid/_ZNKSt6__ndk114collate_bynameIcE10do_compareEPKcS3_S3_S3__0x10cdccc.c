// 函数: _ZNKSt6__ndk114collate_bynameIcE10do_compareEPKcS3_S3_S3_
// 地址: 0x10cdccc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
size_t x23 = arg3 - arg2

if (x23 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    int64_t var_80
    char* var_70
    char* x25_1
    
    if (x23 u> 0x16)
        uint64_t x26_1 = (x23 + 0x10) & 0xfffffffffffffff0
        char* x0_1 = operator new(x26_1)
        x25_1 = x0_1
        size_t var_78_1 = x23
        var_70 = x0_1
        var_80 = x26_1 | 1
        
        if (arg2 != arg3)
            memcpy(x25_1, arg2, x23)
            x25_1 = &x25_1[x23]
    else
        var_80.b = (x23.d << 1).b
        x25_1 = &var_80 | 1
        
        if (arg2 != arg3)
            memcpy(x25_1, arg2, x23)
            x25_1 = &x25_1[x23]
    
    int64_t entry_x4
    size_t x22_2 = entry_x4 - arg4
    *x25_1 = 0
    
    if (x22_2 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        int64_t var_98
        int64_t* var_88
        int64_t* x23_1
        
        if (x22_2 u> 0x16)
            uint64_t x24_2 = (x22_2 + 0x10) & 0xfffffffffffffff0
            int64_t* x0_9 = operator new(x24_2)
            x23_1 = x0_9
            size_t var_90_1 = x22_2
            var_88 = x0_9
            var_98 = x24_2 | 1
            
            if (arg4 != entry_x4)
                memcpy(x23_1, arg4, x22_2)
                x23_1 += x22_2
        else
            var_98.b = (x22_2.d << 1).b
            x23_1 = &var_98 | 1
            
            if (arg4 != entry_x4)
                memcpy(x23_1, arg4, x22_2)
                x23_1 += x22_2
        
        *x23_1 = 0
        uint32_t x22_3 = zx.d(var_80.b)
        uint32_t x23_2 = zx.d(var_98.b)
        char* x0_4
        
        if ((x22_3 & 1) == 0)
            x0_4 = &var_80 | 1
        else
            x0_4 = var_70
        
        int64_t* x1_2
        
        if ((x23_2 & 1) == 0)
            x1_2 = &var_98 | 1
        else
            x1_2 = var_88
        
        int32_t x0_5 = strcoll_l(x0_4, x1_2, *(arg1 + 0x10))
        
        if ((x23_2 & 1) != 0)
            operator delete(var_88)
        
        if ((x22_3 & 1) != 0)
            operator delete(var_70)
        
        uint64_t result
        
        if (x0_5 s>= 0)
            result = zx.q(x0_5 != 0 ? 1 : 0)
        else
            result = 0xffffffff
        
        if (*(x27 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
