// 函数: sub_11000e8
// 地址: 0x11000e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    void* x22_1 = arg1
    
    while (true)
        uint64_t result = __dynamic_cast(arg2, _typeinfo_for___cxxabiv1::__shim_type_info, 
            _typeinfo_for___cxxabiv1::__pointer_type_info, 0)
        
        if (result != 0)
            int32_t x8_1 = *(x22_1 + 0x10)
            uint64_t result_2 = result
            
            if ((*(result + 0x10) & not.d(x8_1)) != 0)
                break
            
            void* x0_1 = *(x22_1 + 0x18)
            
            if (*(x0_1 + 8) == *(*(result_2 + 0x18) + 8))
                return 1
            
            if ((x8_1 & 1) == 0)
                break
            
            void* x0_2 = __dynamic_cast(x0_1, _typeinfo_for___cxxabiv1::__shim_type_info, 
                _typeinfo_for___cxxabiv1::__pointer_type_info, 0)
            
            if (x0_2 == 0)
                result = *(x22_1 + 0x18)
                
                if (result != 0)
                    result = __dynamic_cast(result, _typeinfo_for___cxxabiv1::__shim_type_info, 
                        _typeinfo_for___cxxabiv1::__pointer_to_member_type_info, 0)
                    
                    if (result != 0)
                        uint64_t result_1 = result
                        result = *(result_2 + 0x18)
                        
                        if (result != 0)
                            result = __dynamic_cast(result, 
                                _typeinfo_for___cxxabiv1::__shim_type_info, 
                                _typeinfo_for___cxxabiv1::__pointer_to_member_type_info, 0)
                            
                            if (result != 0)
                                if ((*(result + 0x10) & not.d(*(result_1 + 0x10))) == 0
                                        && *(*(result_1 + 0x18) + 8) == *(*(result + 0x18) + 8))
                                    return zx.q(*(*(result_1 + 0x20) + 8) == *(*(result + 0x20) + 8)
                                        ? 1 : 0)
                                
                                break
            else
                arg2 = *(result_2 + 0x18)
                x22_1 = x0_2
                
                if (arg2 == 0)
                    break
                
                continue
        
        return result

return 0
