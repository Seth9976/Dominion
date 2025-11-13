// 函数: sub_110022c
// 地址: 0x110022c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    uint64_t result = __dynamic_cast(arg2, _typeinfo_for___cxxabiv1::__shim_type_info, 
        _typeinfo_for___cxxabiv1::__pointer_to_member_type_info, 0)
    
    if (result == 0)
        return result
    
    if ((*(result + 0x10) & not.d(*(arg1 + 0x10))) == 0
            && *(*(arg1 + 0x18) + 8) == *(*(result + 0x18) + 8))
        return zx.q(*(*(arg1 + 0x20) + 8) == *(*(result + 0x20) + 8) ? 1 : 0)

return 0
