// 函数: sub_10ffdb8
// 地址: 0x10ffdb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t* result

if (*(arg2 + 8) == typeinfo_name_for_std::nullptr_t)
    *arg3 = 0
    result = 1
label_10fff58:
    
    if (*(x23 + 0x28) == x8)
        return result
else
    if ((zx.d(*(arg1 + 0x10)) & 0x18) != 0)
    label_10ffe0c:
        
        if (arg1 != arg2)
            if (strcmp(*(arg1 + 8), *(arg2 + 8)) != 0)
                goto label_10ffe9c
            
            goto label_10ffe24
        
    label_10ffe24:
        int64_t* x8_3 = *arg3
        
        if (x8_3 == 0)
        label_10fff4c:
            result = 1
            goto label_10fff58
        
        result = 1
        *arg3 = *x8_3
        goto label_10fff58
    
    void* x0_3 = __dynamic_cast(arg2, _typeinfo_for___cxxabiv1::__shim_type_info, 
        _typeinfo_for___cxxabiv1::__pbase_type_info, 0)
    
    if (x0_3 != 0)
        if ((zx.d(*(x0_3 + 0x10)) & 0x18) != 0)
            goto label_10ffe0c
        
        if (*(arg1 + 8) == *(arg2 + 8))
            goto label_10ffe24
        
        goto label_10ffe9c
    
label_10ffe9c:
    result = __dynamic_cast(arg2, _typeinfo_for___cxxabiv1::__shim_type_info, 
        _typeinfo_for___cxxabiv1::__pointer_type_info, 0)
    
    if (result == 0)
        goto label_10fff58
    
    int64_t* x8_7 = *arg3
    int64_t* result_3 = result
    
    if (x8_7 != 0)
        *arg3 = *x8_7
    
    int32_t x8_9 = result_3[2].d
    int32_t x9_2 = *(arg1 + 0x10)
    
    if ((x8_9 & not.d(x9_2) & 7) != 0 || (x9_2 & not.d(x8_9) & 0x60) != 0)
    label_10ffed8:
        result = nullptr
        goto label_10fff58
    
    void* x0_5 = *(arg1 + 0x18)
    void* x8_11 = result_3[3]
    int64_t x9_3 = *(x0_5 + 8)
    
    if (x9_3 == *(x8_11 + 8))
        goto label_10fff4c
    
    struct typeinfo_for___cxxabiv1::__shim_type_info* const x1_3 =
        _typeinfo_for___cxxabiv1::__shim_type_info
    
    if (x9_3 == typeinfo_name_for_void)
        result = zx.q(
            __dynamic_cast(x8_11, x1_3, _typeinfo_for___cxxabiv1::__function_type_info, 0) == 0 ? 1
            : 0)
        goto label_10fff58
    
    void* x0_6 = __dynamic_cast(x0_5, x1_3, _typeinfo_for___cxxabiv1::__pointer_type_info, 0)
    
    if (x0_6 == 0)
        result = *(arg1 + 0x18)
        
        if (result == 0)
            goto label_10fff58
        
        void* x0_10 = __dynamic_cast(result, _typeinfo_for___cxxabiv1::__shim_type_info, 
            _typeinfo_for___cxxabiv1::__pointer_to_member_type_info, 0)
        
        if (x0_10 != 0)
            if ((zx.d(*(arg1 + 0x10)) & 1) == 0)
                goto label_10ffed8
            
            result = result_3[3]
            
            if (result == 0)
                goto label_10fff58
            
            result = __dynamic_cast(result, _typeinfo_for___cxxabiv1::__shim_type_info, 
                _typeinfo_for___cxxabiv1::__pointer_to_member_type_info, 0)
            
            if (result == 0)
                goto label_10fff58
            
            if ((result[2].d & not.d(*(x0_10 + 0x10))) != 0
                    || *(*(x0_10 + 0x18) + 8) != *(result[3] + 8))
                goto label_10ffed8
            
            result = zx.q(*(*(x0_10 + 0x20) + 8) == *(result[4] + 8) ? 1 : 0)
            goto label_10fff58
        
        result = *(arg1 + 0x18)
        
        if (result != 0)
            result = __dynamic_cast(result, _typeinfo_for___cxxabiv1::__shim_type_info, 
                &_typeinfo_for___cxxabiv1::__class_type_info, 0)
            
            if (result != 0)
                int64_t* result_2 = result
                result = result_3[3]
                
                if (result != 0)
                    int128_t v0_1
                    result, v0_1 = __dynamic_cast(result, 
                        _typeinfo_for___cxxabiv1::__shim_type_info, 
                        &_typeinfo_for___cxxabiv1::__class_type_info, 0)
                    
                    if (result != 0)
                        v0_1.q = 0
                        v0_1:8.q = 0
                        int64_t* result_1 = result
                        int64_t var_90_1 = 0
                        int64_t* result_4 = result_2
                        int64_t var_80_1 = -1
                        int128_t var_59_1 = zx.o(0)
                        int64_t var_78_1 = (zx.o(0)).q
                        int32_t var_68_1 = (zx.o(0)).d
                        var_59_1:9.d = 1
                        (*(*result + 0x38))(result, &result_1, *arg3, 1, v0_1)
                        result = zx.q(var_68_1 == 1 ? 1 : 0)
                        
                        if (*arg3 != 0 && var_68_1 == 1)
                            *arg3 = var_78_1
        
        goto label_10fff58
    
    if ((zx.d(*(arg1 + 0x10)) & 1) == 0)
        goto label_10ffed8
    
    int32_t x0_7 = sub_11000e8(x0_6, result_3[3])
    
    if (*(x23 + 0x28) == x8)
        return zx.q(x0_7) & 1
__stack_chk_fail()
noreturn
