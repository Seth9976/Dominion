// 函数: _ZN5Botan15Entropy_Sources9poll_justERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xd65948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1

if (*(arg1 + 8) != x8)
    int64_t i = 0
    
    do
        (***(x8 + (i << 3)))()
        char var_68
        uint64_t x8_2 = zx.q(var_68)
        char* entry_x2
        uint64_t x10_1 = zx.q(*entry_x2)
        uint64_t j_1 = x8_2 u>> 1
        uint64_t j_2
        uint64_t j_3
        
        if ((x8_2.d & 1) == 0)
            j_2 = j_1
        else
            j_2 = j_3
        uint64_t x11_2
        
        if ((x10_1.d & 1) == 0)
            x11_2 = x10_1 u>> 1
        else
            x11_2 = *(entry_x2 + 8)
        
        void* var_58
        
        if (j_2 == x11_2)
            char* x1
            
            if ((x10_1.d & 1) == 0)
                x1 = &entry_x2[1]
            else
                x1 = *(entry_x2 + 0x10)
            
            int64_t* x0_6
            
            if ((x8_2.d & 1) != 0)
                if (j_2 == 0)
                    operator delete(var_58)
                    x0_6 = *(*arg1 + (i << 3))
                    return (*(*x0_6 + 8))(x0_6, arg2)
                
                int32_t x0_3 = memcmp()
                operator delete(var_58)
                
                if (x0_3 == 0)
                    x0_6 = *(*arg1 + (i << 3))
                    return (*(*x0_6 + 8))(x0_6, arg2)
            else
                char* x10_2 = &var_68 | 1
                
                if (j_2 == 0)
                    x0_6 = *(*arg1 + (i << 3))
                    return (*(*x0_6 + 8))(x0_6, arg2)
                
                uint32_t x22_2
                uint32_t x23_1
                uint64_t j
                
                do
                    x22_2 = zx.d(*x10_2)
                    x23_1 = zx.d(*x1)
                    
                    if (x22_2 != x23_1)
                        break
                    
                    j = j_1
                    j_1 -= 1
                    x10_2 = &x10_2[1]
                    x1 = &x1[1]
                while (j != 1)
                
                if ((x8_2.d & 1) != 0)
                    operator delete(var_58)
                
                if (x22_2 == x23_1)
                    x0_6 = *(*arg1 + (i << 3))
                    return (*(*x0_6 + 8))(x0_6, arg2)
        else if ((x8_2.d & 1) != 0)
            operator delete(var_58)
        x8 = *arg1
        i += 1
    while (i != (*(arg1 + 8) - x8) s>> 3)

return 0
