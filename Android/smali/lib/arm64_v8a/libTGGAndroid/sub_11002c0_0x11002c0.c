// 函数: sub_11002c0
// 地址: 0x11002c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 8) == typeinfo_name_for_std::nullptr_t)
    int64_t x0_2 = *(arg1 + 0x18)
    int64_t x0_3
    
    if (x0_2 != 0)
        x0_3 = __dynamic_cast(x0_2, _typeinfo_for___cxxabiv1::__shim_type_info, 
            _typeinfo_for___cxxabiv1::__function_type_info, 0)
    
    void* const x8_2
    
    if (x0_2 == 0 || x0_3 == 0)
        x8_2 = &data_87bb60
    else
        x8_2 = &data_87bb50
    
    *arg3 = x8_2
else if ((zx.d(*(arg1 + 0x10)) & 0x18) == 0)
    void* x0_5 = __dynamic_cast(arg2, _typeinfo_for___cxxabiv1::__shim_type_info, 
        _typeinfo_for___cxxabiv1::__pbase_type_info, 0)
    
    if (x0_5 == 0)
    label_11003a0:
        uint64_t result = __dynamic_cast(arg2, _typeinfo_for___cxxabiv1::__shim_type_info, 
            _typeinfo_for___cxxabiv1::__pointer_to_member_type_info, 0)
        
        if (result == 0)
            return result
        
        int32_t x8_5 = *(result + 0x10)
        int32_t x9_2 = *(arg1 + 0x10)
        
        if ((x8_5 & not.d(x9_2) & 7) == 0 && (x9_2 & not.d(x8_5) & 0x60) == 0
                && *(*(arg1 + 0x18) + 8) == *(*(result + 0x18) + 8))
            return zx.q(*(*(arg1 + 0x20) + 8) == *(*(result + 0x20) + 8) ? 1 : 0)
        
        return 0
    
    if ((zx.d(*(x0_5 + 0x10)) & 0x18) != 0)
        goto label_11002fc
    
    if (*(arg1 + 8) != *(arg2 + 8))
        goto label_11003a0
else
label_11002fc:
    
    if (arg1 != arg2 && strcmp(*(arg1 + 8), *(arg2 + 8)) != 0)
        goto label_11003a0

return 1
