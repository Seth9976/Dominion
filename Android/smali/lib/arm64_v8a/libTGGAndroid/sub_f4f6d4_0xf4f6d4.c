// 函数: sub_f4f6d4
// 地址: 0xf4f6d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg2 + 0x14)
int64_t var_78
size_t i_30
char* var_68
char* x22_1
char* x22_3

if (x9 != *(arg3 + 0x14) && arg1[7] != arg1[6])
    int64_t x24_1 = 0
    char* x26_1 = &var_78 | 1
    
    while (true)
        Botan::TLS::kex_method_to_string(zx.q(x9))
        int64_t x10_2 = arg1[6]
        uint64_t x8_2 = zx.q(var_78.b)
        char* x11_1 = x10_2 + x24_1 * 0x18
        uint64_t x12_1 = zx.q(*x11_1)
        uint64_t i_12 = x8_2 u>> 1
        size_t i_20
        
        if ((x8_2.d & 1) == 0)
            i_20 = i_12
        else
            i_20 = i_30
        
        uint64_t x13_3
        
        if ((x12_1.d & 1) == 0)
            x13_3 = x12_1 u>> 1
        else
            x13_3 = *(x11_1 + 8)
        
        if (i_20 == x13_3)
            x22_1 = var_68
            void* x1
            
            if ((x12_1.d & 1) != 0)
                x1 = *(x10_2 + x24_1 * 0x18 + 0x10)
            else
                x1 = &x11_1[1]
            
            if ((x8_2.d & 1) != 0)
                if (i_20 == 0)
                label_f50448:
                    operator delete(x22_1)
                    return 1
                
                int32_t x0_2 = memcmp()
                operator delete(x22_1)
                
                if (x0_2 == 0)
                    return 1
            else
                char* x10_5 = x26_1
                
                if (i_20 == 0)
                    return 1
                
                uint32_t x22_2
                uint32_t x23_1
                uint64_t i
                
                do
                    x22_2 = zx.d(*x10_5)
                    x23_1 = zx.d(*x1)
                    
                    if (x22_2 != x23_1)
                        break
                    
                    i = i_12
                    i_12 -= 1
                    x10_5 = &x10_5[1]
                    x1 += 1
                while (i != 1)
                
                if ((x8_2.d & 1) != 0)
                    operator delete(var_68)
                    
                    if (x22_2 == x23_1)
                        return 1
                else if (x22_2 == x23_1)
                    return 1
        else if ((x8_2.d & 1) != 0)
            operator delete(var_68)
        
        Botan::TLS::kex_method_to_string(zx.q(*(arg3 + 0x14)))
        int64_t x8_3 = arg1[6]
        uint64_t x9_1 = zx.q(var_78.b)
        char* x11_2 = x8_3 + x24_1 * 0x18
        uint64_t x12_2 = zx.q(*x11_2)
        uint64_t i_16 = x9_1 u>> 1
        size_t i_21
        
        if ((x9_1.d & 1) == 0)
            i_21 = i_16
        else
            i_21 = i_30
        
        uint64_t x13_7
        
        if ((x12_2.d & 1) == 0)
            x13_7 = x12_2 u>> 1
        else
            x13_7 = *(x11_2 + 8)
        
        if (i_21 == x13_7)
            x22_3 = var_68
            void* x1_1
            
            if ((x12_2.d & 1) != 0)
                x1_1 = *(x8_3 + x24_1 * 0x18 + 0x10)
            else
                x1_1 = &x11_2[1]
            
            if ((x9_1.d & 1) != 0)
                if (i_21 == 0)
                    break
                
                int32_t x0_7 = memcmp()
                operator delete(x22_3)
                
                if (x0_7 == 0)
                    return 0
                
                x8_3 = arg1[6]
            else
                char* x11_3 = x26_1
                
                if (i_21 == 0)
                    return 0
                
                uint32_t x22_4
                uint32_t x23_3
                uint64_t i_1
                
                do
                    x22_4 = zx.d(*x11_3)
                    x23_3 = zx.d(*x1_1)
                    
                    if (x22_4 != x23_3)
                        break
                    
                    i_1 = i_16
                    i_16 -= 1
                    x11_3 = &x11_3[1]
                    x1_1 += 1
                while (i_1 != 1)
                
                if ((x9_1.d & 1) != 0)
                    operator delete(var_68)
                    
                    if (x22_4 == x23_3)
                        return 0
                    
                    x8_3 = arg1[6]
                else if (x22_4 == x23_3)
                    return 0
        else if ((x9_1.d & 1) != 0)
            operator delete(var_68)
            x8_3 = arg1[6]
        
        x24_1 += 1
        
        if (x24_1 == ((arg1[7] - x8_3) s>> 3) * -0x5555555555555555)
            goto label_f4f918
        
        x9 = *(arg2 + 0x14)
    
    goto label_f50458

label_f4f918:
char* x23_5 = *(arg2 + 0x20)
size_t i_31 = strlen(x23_5)

if (i_31 u>= -0x10)
label_f50484:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f5048c:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    char* x24_2
    
    if (i_31 u>= 0x17)
        uint64_t x25_1 = (i_31 + 0x10) & 0xfffffffffffffff0
        char* x0_12 = operator new(x25_1)
        x24_2 = x0_12
        i_30 = i_31
        var_68 = x0_12
        var_78 = x25_1 | 1
        memcpy(x24_2, x23_5, i_31)
    else
        x24_2 = &var_78 | 1
        var_78.b = (i_31.d << 1).b
        
        if (i_31 != 0)
            memcpy(x24_2, x23_5, i_31)
    
    x24_2[i_31] = 0
    char* x23_6 = *(arg3 + 0x20)
    size_t x0_15 = strlen(x23_6)
    
    if (x0_15 u>= -0x10)
        goto label_f5048c
    
    int64_t var_90
    size_t var_88
    char* var_80
    char* x24_3
    
    if (x0_15 u>= 0x17)
        uint64_t x25_2 = (x0_15 + 0x10) & 0xfffffffffffffff0
        char* x0_17 = operator new(x25_2)
        x24_3 = x0_17
        var_88 = x0_15
        var_80 = x0_17
        var_90 = x25_2 | 1
        memcpy(x24_3, x23_6, x0_15)
    else
        x24_3 = &var_90 | 1
        var_90.b = (x0_15.d << 1).b
        
        if (x0_15 != 0)
            memcpy(x24_3, x23_6, x0_15)
    
    x24_3[x0_15] = 0
    uint64_t x8_13 = zx.q(var_78.b)
    uint64_t x23_7 = zx.q(var_90.b)
    int32_t x22_7 = x8_13.d & 1
    uint64_t i_10 = x8_13 u>> 1
    size_t i_22
    
    i_22 = x22_7 == 0 ? i_10 : i_30
    
    size_t x9_5
    
    if ((x23_7.d & 1) == 0)
        x9_5 = x23_7 u>> 1
    else
        x9_5 = var_88
    
    int32_t x24_4
    
    if (i_22 != x9_5)
        x24_4 = 1
        
        if ((x23_7.d & 1) != 0)
            operator delete(var_80)
            x22_7 = zx.d(var_78.b) & 1
    else
        char* x9_6 = &var_78 | 1
        char* x1_4
        
        if ((x23_7.d & 1) == 0)
            x1_4 = &var_90 | 1
        else
            x1_4 = var_80
        
        if ((x22_7 & 0xff) == 0)
            if (i_22 == 0)
                goto label_f50134
            
            uint32_t x10_7
            uint32_t x11_5
            uint64_t i_2
            
            do
                x10_7 = zx.d(*x9_6)
                x11_5 = zx.d(*x1_4)
                
                if (x10_7 != x11_5)
                    break
                
                i_2 = i_10
                i_10 -= 1
                x9_6 = &x9_6[1]
                x1_4 = &x1_4[1]
            while (i_2 != 1)
            x24_4 = x10_7 != x11_5 ? 1 : 0
            
            if ((x23_7.d & 1) != 0)
                operator delete(var_80)
                x22_7 = zx.d(var_78.b) & 1
        else if (i_22 == 0)
        label_f50134:
            x24_4 = 0
            
            if ((x23_7.d & 1) != 0)
                operator delete(var_80)
                x22_7 = zx.d(var_78.b) & 1
        else
            x24_4 = memcmp() != 0 ? 1 : 0
            
            if ((x23_7.d & 1) != 0)
                operator delete(var_80)
                x22_7 = zx.d(var_78.b) & 1
    
    if ((x22_7 & 0xff) != 0)
        operator delete(var_68)
    
    if (x24_4 != 0 && arg1[1] != *arg1)
        int64_t x26_2 = 0
        char* x28_1 = &var_78 | 1
        
        while (true)
            char* x23_8 = *(arg2 + 0x20)
            size_t i_32 = strlen(x23_8)
            
            if (i_32 u>= -0x10)
                goto label_f50484
            
            char* x24_5
            
            if (i_32 u>= 0x17)
                uint64_t x25_3 = (i_32 + 0x10) & 0xfffffffffffffff0
                char* x0_24 = operator new(x25_3)
                x24_5 = x0_24
                i_30 = i_32
                var_68 = x0_24
                var_78 = x25_3 | 1
                memcpy(x24_5, x23_8, i_32)
            else
                x24_5 = x28_1
                var_78.b = (i_32.d << 1).b
                
                if (i_32 != 0)
                    memcpy(x24_5, x23_8, i_32)
            
            x24_5[i_32] = 0
            int64_t x10_8 = *arg1
            uint64_t x8_23 = zx.q(var_78.b)
            char* x11_6 = x10_8 + x26_2 * 0x18
            uint64_t x12_4 = zx.q(*x11_6)
            uint64_t i_13 = x8_23 u>> 1
            size_t i_23
            
            if ((x8_23.d & 1) == 0)
                i_23 = i_13
            else
                i_23 = i_30
            
            uint64_t x13_13
            
            if ((x12_4.d & 1) == 0)
                x13_13 = x12_4 u>> 1
            else
                x13_13 = *(x11_6 + 8)
            
            if (i_23 == x13_13)
                x22_1 = var_68
                void* x1_6
                
                if ((x12_4.d & 1) != 0)
                    x1_6 = *(x10_8 + x26_2 * 0x18 + 0x10)
                else
                    x1_6 = &x11_6[1]
                
                if ((x8_23.d & 1) != 0)
                    if (i_23 == 0)
                        goto label_f50448
                    
                    int32_t x0_27 = memcmp()
                    operator delete(x22_1)
                    
                    if (x0_27 == 0)
                        return 1
                else
                    char* x10_11 = x28_1
                    
                    if (i_23 == 0)
                        return 1
                    
                    uint32_t x22_9
                    uint32_t x23_9
                    uint64_t i_3
                    
                    do
                        x22_9 = zx.d(*x10_11)
                        x23_9 = zx.d(*x1_6)
                        
                        if (x22_9 != x23_9)
                            break
                        
                        i_3 = i_13
                        i_13 -= 1
                        x10_11 = &x10_11[1]
                        x1_6 += 1
                    while (i_3 != 1)
                    
                    if ((x8_23.d & 1) != 0)
                        operator delete(var_68)
                        
                        if (x22_9 == x23_9)
                            return 1
                    else if (x22_9 == x23_9)
                        return 1
            else if ((x8_23.d & 1) != 0)
                operator delete(var_68)
            
            char* x23_11 = *(arg3 + 0x20)
            size_t i_33 = strlen(x23_11)
            
            if (i_33 u>= -0x10)
                goto label_f50484
            
            char* x24_6
            
            if (i_33 u>= 0x17)
                uint64_t x25_4 = (i_33 + 0x10) & 0xfffffffffffffff0
                char* x0_32 = operator new(x25_4)
                x24_6 = x0_32
                i_30 = i_33
                var_68 = x0_32
                var_78 = x25_4 | 1
                memcpy(x24_6, x23_11, i_33)
            else
                x24_6 = x28_1
                var_78.b = (i_33.d << 1).b
                
                if (i_33 != 0)
                    memcpy(x24_6, x23_11, i_33)
            
            x24_6[i_33] = 0
            int64_t x8_16 = *arg1
            uint64_t x9_9 = zx.q(var_78.b)
            char* x11_7 = x8_16 + x26_2 * 0x18
            uint64_t x12_5 = zx.q(*x11_7)
            uint64_t i_17 = x9_9 u>> 1
            size_t i_24
            
            if ((x9_9.d & 1) == 0)
                i_24 = i_17
            else
                i_24 = i_30
            
            uint64_t x13_17
            
            if ((x12_5.d & 1) == 0)
                x13_17 = x12_5 u>> 1
            else
                x13_17 = *(x11_7 + 8)
            
            if (i_24 == x13_17)
                x22_3 = var_68
                void* x1_8
                
                if ((x12_5.d & 1) != 0)
                    x1_8 = *(x8_16 + x26_2 * 0x18 + 0x10)
                else
                    x1_8 = &x11_7[1]
                
                if ((x9_9.d & 1) != 0)
                    if (i_24 == 0)
                        break
                    
                    int32_t x0_35 = memcmp()
                    operator delete(x22_3)
                    
                    if (x0_35 == 0)
                        return 0
                    
                    x8_16 = *arg1
                else
                    char* x11_8 = x28_1
                    
                    if (i_24 == 0)
                        return 0
                    
                    uint32_t x22_11
                    uint32_t x23_12
                    uint64_t i_4
                    
                    do
                        x22_11 = zx.d(*x11_8)
                        x23_12 = zx.d(*x1_8)
                        
                        if (x22_11 != x23_12)
                            break
                        
                        i_4 = i_17
                        i_17 -= 1
                        x11_8 = &x11_8[1]
                        x1_8 += 1
                    while (i_4 != 1)
                    
                    if ((x9_9.d & 1) != 0)
                        operator delete(var_68)
                        
                        if (x22_11 == x23_12)
                            return 0
                        
                        x8_16 = *arg1
                    else if (x22_11 == x23_12)
                        return 0
            else if ((x9_9.d & 1) != 0)
                operator delete(var_68)
                x8_16 = *arg1
            
            x26_2 += 1
            
            if (x26_2 == ((arg1[1] - x8_16) s>> 3) * -0x5555555555555555)
                goto label_f4fd6c
        
        goto label_f50458
    
label_f4fd6c:
    int64_t x8_27 = *(arg2 + 0x30)
    int64_t x9_10 = *(arg3 + 0x30)
    
    if (x8_27 != x9_10)
        if (x8_27 u< x9_10)
            return 0
        
        if (x8_27 u> x9_10)
            return 1
    
    uint64_t x0_37 = zx.q(*(arg2 + 0x10))
    
    if (x0_37.d != *(arg3 + 0x10) && arg1[0xa] != arg1[9])
        int64_t x24_7 = 0
        char* x26_3 = &var_78 | 1
        
        while (true)
            Botan::TLS::auth_method_to_string(x0_37)
            int64_t x10_12 = arg1[9]
            uint64_t x8_30 = zx.q(var_78.b)
            char* x11_9 = x10_12 + x24_7 * 0x18
            uint64_t x12_6 = zx.q(*x11_9)
            uint64_t i_14 = x8_30 u>> 1
            size_t i_25
            
            if ((x8_30.d & 1) == 0)
                i_25 = i_14
            else
                i_25 = i_30
            
            uint64_t x13_22
            
            if ((x12_6.d & 1) == 0)
                x13_22 = x12_6 u>> 1
            else
                x13_22 = *(x11_9 + 8)
            
            if (i_25 == x13_22)
                x22_1 = var_68
                void* x1_9
                
                if ((x12_6.d & 1) != 0)
                    x1_9 = *(x10_12 + x24_7 * 0x18 + 0x10)
                else
                    x1_9 = &x11_9[1]
                
                if ((x8_30.d & 1) != 0)
                    if (i_25 == 0)
                        goto label_f50448
                    
                    int32_t x0_39 = memcmp()
                    operator delete(x22_1)
                    
                    if (x0_39 == 0)
                        return 1
                else
                    char* x10_15 = x26_3
                    
                    if (i_25 == 0)
                        return 1
                    
                    uint32_t x22_12
                    uint32_t x23_14
                    uint64_t i_5
                    
                    do
                        x22_12 = zx.d(*x10_15)
                        x23_14 = zx.d(*x1_9)
                        
                        if (x22_12 != x23_14)
                            break
                        
                        i_5 = i_14
                        i_14 -= 1
                        x10_15 = &x10_15[1]
                        x1_9 += 1
                    while (i_5 != 1)
                    
                    if ((x8_30.d & 1) != 0)
                        operator delete(var_68)
                        
                        if (x22_12 == x23_14)
                            return 1
                    else if (x22_12 == x23_14)
                        return 1
            else if ((x8_30.d & 1) != 0)
                operator delete(var_68)
            
            Botan::TLS::auth_method_to_string(zx.q(*(arg3 + 0x10)))
            int64_t x8_31 = arg1[9]
            uint64_t x9_12 = zx.q(var_78.b)
            char* x11_10 = x8_31 + x24_7 * 0x18
            uint64_t x12_7 = zx.q(*x11_10)
            uint64_t i_18 = x9_12 u>> 1
            size_t i_26
            
            if ((x9_12.d & 1) == 0)
                i_26 = i_18
            else
                i_26 = i_30
            
            uint64_t x13_26
            
            if ((x12_7.d & 1) == 0)
                x13_26 = x12_7 u>> 1
            else
                x13_26 = *(x11_10 + 8)
            
            if (i_26 == x13_26)
                x22_3 = var_68
                void* x1_10
                
                if ((x12_7.d & 1) != 0)
                    x1_10 = *(x8_31 + x24_7 * 0x18 + 0x10)
                else
                    x1_10 = &x11_10[1]
                
                if ((x9_12.d & 1) != 0)
                    if (i_26 == 0)
                        goto label_f50458
                    
                    int32_t x0_44 = memcmp()
                    operator delete(x22_3)
                    
                    if (x0_44 == 0)
                        return 0
                    
                    x8_31 = arg1[9]
                else
                    char* x11_11 = x26_3
                    
                    if (i_26 == 0)
                        return 0
                    
                    uint32_t x22_13
                    uint32_t x23_16
                    uint64_t i_6
                    
                    do
                        x22_13 = zx.d(*x11_11)
                        x23_16 = zx.d(*x1_10)
                        
                        if (x22_13 != x23_16)
                            break
                        
                        i_6 = i_18
                        i_18 -= 1
                        x11_11 = &x11_11[1]
                        x1_10 += 1
                    while (i_6 != 1)
                    
                    if ((x9_12.d & 1) != 0)
                        operator delete(var_68)
                        
                        if (x22_13 == x23_16)
                            return 0
                        
                        x8_31 = arg1[9]
                    else if (x22_13 == x23_16)
                        return 0
            else if ((x9_12.d & 1) != 0)
                operator delete(var_68)
                x8_31 = arg1[9]
            
            x24_7 += 1
            
            if (x24_7 == ((arg1[0xa] - x8_31) s>> 3) * -0x5555555555555555)
                break
            
            x0_37 = zx.q(*(arg2 + 0x10))
    
    char* x23_18 = *(arg2 + 0x28)
    size_t i_34 = strlen(x23_18)
    
    if (i_34 u>= -0x10)
        goto label_f50484
    
    char* x24_8
    
    if (i_34 u>= 0x17)
        uint64_t x25_5 = (i_34 + 0x10) & 0xfffffffffffffff0
        char* x0_50 = operator new(x25_5)
        x24_8 = x0_50
        i_30 = i_34
        var_68 = x0_50
        var_78 = x25_5 | 1
        memcpy(x24_8, x23_18, i_34)
    else
        x24_8 = &var_78 | 1
        var_78.b = (i_34.d << 1).b
        
        if (i_34 != 0)
            memcpy(x24_8, x23_18, i_34)
    
    x24_8[i_34] = 0
    char* x23_19 = *(arg3 + 0x28)
    size_t x0_53 = strlen(x23_19)
    
    if (x0_53 u< -0x10)
        char* x24_9
        
        if (x0_53 u>= 0x17)
            uint64_t x25_6 = (x0_53 + 0x10) & 0xfffffffffffffff0
            char* x0_55 = operator new(x25_6)
            x24_9 = x0_55
            var_88 = x0_53
            var_80 = x0_55
            var_90 = x25_6 | 1
            memcpy(x24_9, x23_19, x0_53)
        else
            x24_9 = &var_90 | 1
            var_90.b = (x0_53.d << 1).b
            
            if (x0_53 != 0)
                memcpy(x24_9, x23_19, x0_53)
        
        x24_9[x0_53] = 0
        uint64_t x8_41 = zx.q(var_78.b)
        uint64_t x23_20 = zx.q(var_90.b)
        int32_t x22_16 = x8_41.d & 1
        uint64_t i_11 = x8_41 u>> 1
        size_t i_27
        
        i_27 = x22_16 == 0 ? i_11 : i_30
        
        size_t x9_16
        
        if ((x23_20.d & 1) == 0)
            x9_16 = x23_20 u>> 1
        else
            x9_16 = var_88
        
        int32_t x24_10
        
        if (i_27 != x9_16)
            x24_10 = 1
            
            if ((x23_20.d & 1) != 0)
                operator delete(var_80)
                x22_16 = zx.d(var_78.b) & 1
        else
            char* x9_17 = &var_78 | 1
            char* x1_13
            
            if ((x23_20.d & 1) == 0)
                x1_13 = &var_90 | 1
            else
                x1_13 = var_80
            
            if ((x22_16 & 0xff) == 0)
                if (i_27 == 0)
                    goto label_f50158
                
                uint32_t x10_17
                uint32_t x11_13
                uint64_t i_7
                
                do
                    x10_17 = zx.d(*x9_17)
                    x11_13 = zx.d(*x1_13)
                    
                    if (x10_17 != x11_13)
                        break
                    
                    i_7 = i_11
                    i_11 -= 1
                    x9_17 = &x9_17[1]
                    x1_13 = &x1_13[1]
                while (i_7 != 1)
                x24_10 = x10_17 != x11_13 ? 1 : 0
                
                if ((x23_20.d & 1) != 0)
                    operator delete(var_80)
                    x22_16 = zx.d(var_78.b) & 1
            else if (i_27 == 0)
            label_f50158:
                x24_10 = 0
                
                if ((x23_20.d & 1) != 0)
                    operator delete(var_80)
                    x22_16 = zx.d(var_78.b) & 1
            else
                x24_10 = memcmp() != 0 ? 1 : 0
                
                if ((x23_20.d & 1) != 0)
                    operator delete(var_80)
                    x22_16 = zx.d(var_78.b) & 1
        
        if ((x22_16 & 0xff) != 0)
            operator delete(var_68)
        
        if (x24_10 == 0 || arg1[4] == arg1[3])
            return 0
        
        int64_t x26_4 = 0
        char* x28_2 = &var_78 | 1
        
        while (true)
            char* x23_21 = *(arg2 + 0x28)
            size_t i_35 = strlen(x23_21)
            
            if (i_35 u>= -0x10)
                goto label_f50484
            
            char* x24_11
            
            if (i_35 u>= 0x17)
                uint64_t x25_7 = (i_35 + 0x10) & 0xfffffffffffffff0
                char* x0_63 = operator new(x25_7)
                x24_11 = x0_63
                i_30 = i_35
                var_68 = x0_63
                var_78 = x25_7 | 1
                memcpy(x24_11, x23_21, i_35)
            else
                x24_11 = x28_2
                var_78.b = (i_35.d << 1).b
                
                if (i_35 != 0)
                    memcpy(x24_11, x23_21, i_35)
            
            x24_11[i_35] = 0
            int64_t x10_18 = arg1[3]
            uint64_t x8_51 = zx.q(var_78.b)
            char* x11_14 = x10_18 + x26_4 * 0x18
            uint64_t x12_9 = zx.q(*x11_14)
            size_t i_15 = x8_51 u>> 1
            size_t i_28
            
            if ((x8_51.d & 1) == 0)
                i_28 = i_15
            else
                i_28 = i_30
            
            uint64_t x13_32
            
            if ((x12_9.d & 1) == 0)
                x13_32 = x12_9 u>> 1
            else
                x13_32 = *(x11_14 + 8)
            
            if (i_28 == x13_32)
                x22_1 = var_68
                void* x1_15
                
                if ((x12_9.d & 1) != 0)
                    x1_15 = *(x10_18 + x26_4 * 0x18 + 0x10)
                else
                    x1_15 = &x11_14[1]
                
                if ((x8_51.d & 1) != 0)
                    if (i_28 == 0)
                        goto label_f50448
                    
                    int32_t x0_66 = memcmp()
                    operator delete(x22_1)
                    
                    if (x0_66 == 0)
                        return 1
                else
                    char* x10_21 = x28_2
                    
                    if (i_28 == 0)
                        return 1
                    
                    uint32_t x22_18
                    uint32_t x23_22
                    size_t i_8
                    
                    do
                        x22_18 = zx.d(*x10_21)
                        x23_22 = zx.d(*x1_15)
                        
                        if (x22_18 != x23_22)
                            break
                        
                        i_8 = i_15
                        i_15 -= 1
                        x10_21 = &x10_21[1]
                        x1_15 += 1
                    while (i_8 != 1)
                    
                    if ((x8_51.d & 1) != 0)
                        operator delete(var_68)
                        
                        if (x22_18 == x23_22)
                            return 1
                    else if (x22_18 == x23_22)
                        return 1
            else if ((x8_51.d & 1) != 0)
                operator delete(var_68)
            
            char* x23_24 = *(arg3 + 0x28)
            size_t i_36 = strlen(x23_24)
            
            if (i_36 u>= -0x10)
                goto label_f50484
            
            char* x24_12
            
            if (i_36 u>= 0x17)
                uint64_t x25_8 = (i_36 + 0x10) & 0xfffffffffffffff0
                char* x0_71 = operator new(x25_8)
                x24_12 = x0_71
                i_30 = i_36
                var_68 = x0_71
                var_78 = x25_8 | 1
                memcpy(x24_12, x23_24, i_36)
            else
                x24_12 = x28_2
                var_78.b = (i_36.d << 1).b
                
                if (i_36 != 0)
                    memcpy(x24_12, x23_24, i_36)
            
            x24_12[i_36] = 0
            int64_t x8_44 = arg1[3]
            uint64_t x9_20 = zx.q(var_78.b)
            char* x11_15 = x8_44 + x26_4 * 0x18
            uint64_t x12_10 = zx.q(*x11_15)
            size_t i_19 = x9_20 u>> 1
            size_t i_29
            
            if ((x9_20.d & 1) == 0)
                i_29 = i_19
            else
                i_29 = i_30
            
            uint64_t x13_36
            
            if ((x12_10.d & 1) == 0)
                x13_36 = x12_10 u>> 1
            else
                x13_36 = *(x11_15 + 8)
            
            if (i_29 == x13_36)
                x22_3 = var_68
                void* x1_17
                
                if ((x12_10.d & 1) != 0)
                    x1_17 = *(x8_44 + x26_4 * 0x18 + 0x10)
                else
                    x1_17 = &x11_15[1]
                
                if ((x9_20.d & 1) != 0)
                    if (i_29 == 0)
                        break
                    
                    int32_t x0_74 = memcmp()
                    operator delete(x22_3)
                    
                    if (x0_74 == 0)
                        return 0
                    
                    x8_44 = arg1[3]
                else
                    char* x11_16 = x28_2
                    
                    if (i_29 == 0)
                        return 0
                    
                    uint32_t x22_20
                    uint32_t x23_25
                    size_t i_9
                    
                    do
                        x22_20 = zx.d(*x11_16)
                        x23_25 = zx.d(*x1_17)
                        
                        if (x22_20 != x23_25)
                            break
                        
                        i_9 = i_19
                        i_19 -= 1
                        x11_16 = &x11_16[1]
                        x1_17 += 1
                    while (i_9 != 1)
                    
                    if ((x9_20.d & 1) != 0)
                        operator delete(var_68)
                        
                        if (x22_20 == x23_25)
                            return 0
                        
                        x8_44 = arg1[3]
                    else if (x22_20 == x23_25)
                        return 0
            else if ((x9_20.d & 1) != 0)
                operator delete(var_68)
                x8_44 = arg1[3]
            
            x26_4 += 1
            
            if (x26_4 == ((arg1[4] - x8_44) s>> 3) * -0x5555555555555555)
                return 0
        
    label_f50458:
        operator delete(x22_3)
        return 0

int64_t* x0_79 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

sub_1101e04(x0_79)
noreturn
