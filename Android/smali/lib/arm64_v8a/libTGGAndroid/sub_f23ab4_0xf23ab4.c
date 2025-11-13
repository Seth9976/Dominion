// 函数: sub_f23ab4
// 地址: 0xf23ab4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int64_t x8_1 = *(arg5 + 0x18)
    int64_t x9_1 = arg4 - arg2
    int64_t x25_1 = arg3 - arg2
    size_t x23_1
    
    if (x8_1 s> x9_1)
        x23_1 = x8_1 - x9_1
    else
        x23_1 = 0
    
    int64_t x0_1
    
    if (x25_1 s>= 1)
        x0_1 = (*(*arg1 + 0x60))(arg1, arg2, x25_1)
    
    if (x25_1 s>= 1 && x0_1 != x25_1)
        return nullptr
    
    int64_t x0_6
    
    if (x23_1 s>= 1)
        int64_t var_68
        void* var_58
        char* x25_2
        
        if (x23_1 u>= 0x17)
            uint64_t x26_1 = (x23_1 + 0x10) & 0xfffffffffffffff0
            void* x0_3 = operator new(x26_1)
            x25_2 = x0_3
            size_t var_60_1 = x23_1
            var_58 = x0_3
            var_68 = x26_1 | 1
        else
            x25_2 = &var_68 | 1
            var_68.b = (x23_1.d << 1).b
        
        memset(x25_2, arg6, x23_1)
        x25_2[x23_1] = 0
        void* x1_1
        
        if ((zx.d(var_68.b) & 1) != 0)
            x1_1 = var_58
        else
            x1_1 = &var_68:1
        
        x0_6 = (*(*arg1 + 0x60))(arg1, x1_1, x23_1)
        
        if ((zx.d(var_68.b) & 1) != 0)
            operator delete(var_58)
    
    if (x23_1 s>= 1 && x0_6 != x23_1)
        return nullptr
    
    int64_t x22_2 = arg4 - arg3
    
    if (x22_2 s>= 1 && (*(*arg1 + 0x60))(arg1, arg3, x22_2) != x22_2)
        return nullptr
    
    *(arg5 + 0x18) = 0

return arg1
