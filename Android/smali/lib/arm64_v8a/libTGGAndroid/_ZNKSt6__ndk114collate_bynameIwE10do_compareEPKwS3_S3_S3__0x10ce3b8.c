// 函数: _ZNKSt6__ndk114collate_bynameIwE10do_compareEPKwS3_S3_S3_
// 地址: 0x10ce3b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t x26 = arg3 - arg2

if (arg3 - arg2 s< 0)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    int64_t x27_1 = x26 s>> 2
    int64_t var_80
    int32_t* var_70
    int32_t* x24_1
    
    if (x27_1 u> 4)
        int64_t x28_1 = (x27_1 + 4) & 0xfffffffffffffffc
        int32_t* x0_1 = operator new(x28_1 << 2)
        x24_1 = x0_1
        int64_t var_78_1 = x27_1
        var_70 = x0_1
        var_80 = x28_1 | 1
        
        if (arg2 != arg3)
            memcpy(x24_1, arg2, x26 & 0xfffffffffffffffc)
            x24_1 = ((x26 - 4) & 0xfffffffffffffffc) + x24_1 + 4
    else
        var_80.b = (x26 u>> 1).b & 0xfe
        x24_1 = &var_80 | 4
        
        if (arg2 != arg3)
            memcpy(x24_1, arg2, x26 & 0xfffffffffffffffc)
            x24_1 = ((x26 - 4) & 0xfffffffffffffffc) + x24_1 + 4
    
    int64_t entry_x4
    void* x23_3 = entry_x4 - arg4
    *x24_1 = 0
    
    if (entry_x4 - arg4 s< 0)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        int64_t x24_2 = x23_3 s>> 2
        int64_t var_98
        void* var_88
        void* x22_2
        
        if (x24_2 u> 4)
            int64_t x26_1 = (x24_2 + 4) & 0xfffffffffffffffc
            void* x0_9 = operator new(x26_1 << 2)
            x22_2 = x0_9
            int64_t var_90_1 = x24_2
            var_88 = x0_9
            var_98 = x26_1 | 1
            
            if (arg4 != entry_x4)
                memcpy(x22_2, arg4, x23_3 & 0xfffffffffffffffc)
                x22_2 = ((x23_3 - 4) & 0xfffffffffffffffc) + x22_2 + 4
        else
            var_98.b = (x23_3 u>> 1).b & 0xfe
            x22_2 = &var_98 | 4
            
            if (arg4 != entry_x4)
                memcpy(x22_2, arg4, x23_3 & 0xfffffffffffffffc)
                x22_2 = ((x23_3 - 4) & 0xfffffffffffffffc) + x22_2 + 4
        
        *x22_2 = 0
        uint32_t x22_3 = zx.d(var_80.b)
        uint32_t x23_4 = zx.d(var_98.b)
        int32_t* x0_4
        
        if ((x22_3 & 1) == 0)
            x0_4 = &var_80 | 4
        else
            x0_4 = var_70
        
        void* x1_2
        
        if ((x23_4 & 1) == 0)
            x1_2 = &var_98 | 4
        else
            x1_2 = var_88
        
        int32_t x0_5 = wcscoll_l(x0_4, x1_2, *(arg1 + 0x10))
        
        if ((x23_4 & 1) != 0)
            operator delete(var_88)
        
        if ((x22_3 & 1) != 0)
            operator delete(var_70)
        
        uint64_t result
        
        if (x0_5 s>= 0)
            result = zx.q(x0_5 != 0 ? 1 : 0)
        else
            result = 0xffffffff
        
        if (*(x25 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
