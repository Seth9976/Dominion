// 函数: sub_10ffd18
// 地址: 0x10ffd18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

bool cond:0_1

if ((zx.d(*(arg1 + 0x10)) & 0x18) == 0)
    if (arg2 == 0)
        return 0
    
    uint64_t result = __dynamic_cast(arg2, _typeinfo_for___cxxabiv1::__shim_type_info, 
        _typeinfo_for___cxxabiv1::__pbase_type_info, 0)
    
    if (result == 0)
        return result
    
    if ((zx.d(*(result + 0x10)) & 0x18) != 0)
        goto label_10ffd3c
    
    cond:0_1 = *(arg1 + 8) == *(arg2 + 8)
else
label_10ffd3c:
    
    if (arg1 == arg2)
        return 1
    
    cond:0_1 = strcmp(*(arg1 + 8), *(arg2 + 8)) == 0

return zx.q(cond:0_1 ? 1 : 0)
