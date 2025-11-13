// 函数: sub_f4ee98
// 地址: 0xf4ee98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
void* x21 = arg2
uint64_t x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_f4eef4:
        int64_t x8_2 = x21 - x23_1
        int64_t x9_2 = (x8_2 s>> 3) * -0x71c71c71c71c71c7
        x19 = x23_1
        int128_t var_b0
        
        if (x9_2 u<= 5)
            switch (x9_2)
                case 2
                    int128_t v0_6
                    int128_t v1_6
                    int128_t v2_6
                    arg1, v0_6, v1_6, v2_6 = sub_f4f6d4(arg3, x21 - 0x48, x19)
                    
                    if ((arg1.d & 1) != 0)
                        var_b0 = *x19
                        char x8_28 = (*(x19 + 0x40)).b
                        int128_t var_90_6 = *(x19 + 0x20)
                        int128_t var_80_6 = *(x19 + 0x30)
                        int128_t var_a0_6 = *(x19 + 0x10)
                        v2_6 = *(x21 - 0x28)
                        v0_6 = *(x21 - 0x18)
                        v1_6 = *(x21 - 0x38)
                        *(x19 + 0x40) = *(x21 - 8)
                        *(x19 + 0x20) = v2_6
                        *(x19 + 0x30) = v0_6
                        *(x19 + 0x10) = v1_6
                        *x19 = *(x21 - 0x48)
                        *(x21 - 8) = x8_28
                        *(x21 - 0x28) = var_90_6
                        *(x21 - 0x18) = var_80_6
                        *(x21 - 0x38) = var_a0_6
                        *(x21 - 0x48) = var_b0
                case 3
                    sub_f504b8(x19, x19 + 0x48, x21 - 0x48, arg3)
                case 4
                    sub_f504b8(x19, x19 + 0x48, x19 + 0x90, arg3)
                    int128_t v0_7
                    int128_t v1_7
                    int128_t v2_7
                    arg1, v0_7, v1_7, v2_7 = sub_f4f6d4(arg3, x21 - 0x48, x19 + 0x90)
                    
                    if ((arg1.d & 1) != 0)
                        v2_7 = *(x19 + 0xa0)
                        var_b0 = *(x19 + 0x90)
                        int128_t var_a0_7 = v2_7
                        char x8_31 = (*(x19 + 0xd0)).b
                        int128_t var_90_7 = *(x19 + 0xb0)
                        int128_t var_80_7 = *(x19 + 0xc0)
                        v2_7 = *(x21 - 0x28)
                        v0_7 = *(x21 - 0x18)
                        v1_7 = *(x21 - 0x38)
                        *(x19 + 0xd0) = *(x21 - 8)
                        *(x19 + 0xb0) = v2_7
                        *(x19 + 0xc0) = v0_7
                        *(x19 + 0xa0) = v1_7
                        *(x19 + 0x90) = *(x21 - 0x48)
                        *(x21 - 8) = x8_31
                        *(x21 - 0x28) = var_90_7
                        *(x21 - 0x18) = var_80_7
                        *(x21 - 0x38) = var_a0_7
                        *(x21 - 0x48) = var_b0
                        int128_t v0_8
                        int128_t v1_8
                        int128_t v2_8
                        arg1, v0_8, v1_8, v2_8 = sub_f4f6d4(arg3, x19 + 0x90, x19 + 0x48)
                        
                        if ((arg1.d & 1) != 0)
                            v2_8 = *(x19 + 0x58)
                            var_b0 = *(x19 + 0x48)
                            int128_t var_a0_8 = v2_8
                            char x8_34 = (*(x19 + 0x88)).b
                            int128_t var_90_8 = *(x19 + 0x68)
                            int128_t var_80_8 = *(x19 + 0x78)
                            v2_8 = *(x19 + 0xb0)
                            v0_8 = *(x19 + 0xc0)
                            *(x19 + 0x88) = *(x19 + 0xd0)
                            *(x19 + 0x68) = v2_8
                            *(x19 + 0x78) = v0_8
                            v1_8 = *(x19 + 0xa0)
                            *(x19 + 0x48) = *(x19 + 0x90)
                            *(x19 + 0x58) = v1_8
                            *(x19 + 0xd0) = x8_34
                            *(x19 + 0xb0) = var_90_8
                            *(x19 + 0xc0) = var_80_8
                            *(x19 + 0x90) = var_b0
                            *(x19 + 0xa0) = var_a0_8
                            int128_t v0_9
                            int128_t v1_9
                            int128_t v2_9
                            arg1, v0_9, v1_9, v2_9 = sub_f4f6d4(arg3, x19 + 0x48, x19)
                            
                            if ((arg1.d & 1) != 0)
                                var_b0 = *x19
                                char x8_37 = (*(x19 + 0x40)).b
                                int128_t var_90_9 = *(x19 + 0x20)
                                int128_t var_80_9 = *(x19 + 0x30)
                                int128_t var_a0_9 = *(x19 + 0x10)
                                v2_9 = *(x19 + 0x68)
                                v0_9 = *(x19 + 0x78)
                                *(x19 + 0x40) = *(x19 + 0x88)
                                *(x19 + 0x20) = v2_9
                                *(x19 + 0x30) = v0_9
                                v1_9 = *(x19 + 0x58)
                                *x19 = *(x19 + 0x48)
                                *(x19 + 0x10) = v1_9
                                *(x19 + 0x88) = x8_37
                                *(x19 + 0x68) = var_90_9
                                *(x19 + 0x78) = var_80_9
                                *(x19 + 0x48) = var_b0
                                *(x19 + 0x58) = var_a0_9
                case 5
                    sub_f50700(x19, x19 + 0x48, x19 + 0x90, x19 + 0xd8, x21 - 0x48, arg3)
        else if (x8_2 s<= 0x8b7)
            int128_t* x22_2 = x19 + 0x90
            sub_f504b8(x19, x19 + 0x48, x22_2, arg3)
            void* x8_40 = x19 + 0xd8
            
            if (x8_40 != x21)
                int64_t x23_4 = 0
                
                do
                    int128_t* x2_23 = x22_2
                    x22_2 = x8_40
                    int128_t v0_10
                    int128_t v1_10
                    int128_t v2_10
                    arg1, v0_10, v1_10, v2_10 = sub_f4f6d4(arg3, x8_40, x2_23)
                    
                    if ((arg1.d & 1) != 0)
                        int64_t x24_4 = x23_4
                        var_b0 = *x22_2
                        char x8_42 = (x22_2[4].q).b
                        int128_t var_90_10 = x22_2[2]
                        int128_t var_80_10 = x22_2[3]
                        int128_t var_a0_10 = x22_2[1]
                        uint64_t x8_41
                        
                        while (true)
                            void* x8_43 = x19 + x24_4
                            v2_10 = *(x8_43 + 0xb0)
                            *(x8_43 + 0x108) = *(x8_43 + 0xc0)
                            char x10_2 = *(x8_43 + 0xd0)
                            *(x8_43 + 0xf8) = v2_10
                            *(x8_43 + 0x118) = x10_2
                            v0_10 = *(x8_43 + 0x90)
                            *(x8_43 + 0xe8) = *(x8_43 + 0xa0)
                            *(x8_43 + 0xd8) = v0_10
                            
                            if (x24_4 == -0x90)
                                x8_41 = x19
                                break
                            
                            arg1, v0_10, v1_10, v2_10 = sub_f4f6d4(arg3, &var_b0, x8_43 + 0x48)
                            x24_4 -= 0x48
                            
                            if ((arg1.d & 1) == 0)
                                x8_41 = x19 + x24_4 + 0xd8
                                break
                        
                        *x8_41 = var_b0
                        *(x8_41 + 0x40) = x8_42
                        *(x8_41 + 0x20) = var_90_10
                        *(x8_41 + 0x30) = var_80_10
                        *(x8_41 + 0x10) = var_a0_10
                    
                    x8_40 = x22_2 + 0x48
                    x23_4 += 0x48
                while (x8_40 != x21)
        else
            int32_t x0_1
            int128_t* x23_2
            
            if (x8_2 s< 0x118f9)
                x23_2 = x19 + (((x8_2 & 0xffffffff) * 0x38e38e39) u>> 0x25) * 0x48
                x0_1 = sub_f504b8(x19, x23_2, x21 - 0x48, arg3)
            else
                x23_2 = x19 + x8_2 u/ 0x90 * 0x48
                uint64_t x8_6 = x8_2 u/ 0x120 * 0x48
                x0_1 = sub_f50700(x19, x19 + x8_6, x23_2, x23_2 + x8_6, x21 - 0x48, arg3)
            
            int32_t x24_1 = x0_1
            void* x25_1
            int128_t* x26_1
            
            if ((sub_f4f6d4(arg3, x19, x23_2) & 1) == 0)
                void* x25_2 = x21 - 0x90
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                int32_t x0_6
                
                do
                    if (x19 == x25_2)
                        void* x25_3 = x19 + 0x48
                        
                        if ((sub_f4f6d4(arg3, x19, x21 - 0x48).d & 1) == 0)
                            if (x25_3 != x21 - 0x48)
                                x25_3 = x19 + 0x90
                                
                                do
                                    int128_t v0_4
                                    int128_t v1_4
                                    int128_t v2_4
                                    arg1, v0_4, v1_4, v2_4 = sub_f4f6d4(arg3, x19, x25_3 - 0x48)
                                    
                                    if ((arg1.d & 1) != 0)
                                        var_b0 = *(x25_3 - 0x48)
                                        char x8_22 = (*(x25_3 - 8)).b
                                        int128_t var_90_4 = *(x25_3 - 0x28)
                                        int128_t var_80_4 = *(x25_3 - 0x18)
                                        int128_t var_a0_4 = *(x25_3 - 0x38)
                                        v2_4 = *(x21 - 0x28)
                                        char x8_23 = *(x21 - 8)
                                        v1_4 = *(x21 - 0x18)
                                        *(x25_3 - 0x38) = *(x21 - 0x38)
                                        *(x25_3 - 8) = x8_23
                                        *(x25_3 - 0x18) = v1_4
                                        *(x25_3 - 0x28) = v2_4
                                        *(x25_3 - 0x48) = *(x21 - 0x48)
                                        *(x21 - 8) = x8_22
                                        *(x21 - 0x28) = var_90_4
                                        *(x21 - 0x18) = var_80_4
                                        *(x21 - 0x38) = var_a0_4
                                        *(x21 - 0x48) = var_b0
                                        goto label_f4f2c4
                                    
                                    x25_3 += 0x48
                                while (x21 != x25_3)
                            
                            goto label_f4f6a8
                        
                    label_f4f2c4:
                        
                        if (x25_3 == x21 - 0x48)
                            goto label_f4f6a8
                        
                        int128_t* x24_3 = x21 - 0x48
                        
                        while (true)
                            x23_1 = x25_3 - 0x48
                            int32_t x0_20
                            
                            do
                                x23_1 += 0x48
                                x0_20 = sub_f4f6d4(arg3, x19, x23_1)
                            while ((x0_20 & 1) == 0)
                            x25_3 = x23_1 + 0x48
                            int128_t v0_5
                            int128_t v1_5
                            int128_t v2_5
                            
                            do
                                x24_3 -= 0x48
                                arg1, v0_5, v1_5, v2_5 = sub_f4f6d4(arg3, x19, x24_3)
                            while ((arg1.d & 1) != 0)
                            
                            if (x23_1 u>= x24_3)
                                break
                            
                            var_b0 = *x23_1
                            char x8_25 = (*(x23_1 + 0x40)).b
                            int128_t var_90_5 = *(x23_1 + 0x20)
                            int128_t var_80_5 = *(x23_1 + 0x30)
                            int128_t var_a0_5 = *(x23_1 + 0x10)
                            v2_5 = x24_3[2]
                            v0_5 = x24_3[3]
                            v1_5 = x24_3[1]
                            *(x23_1 + 0x40) = x24_3[4].b
                            *(x23_1 + 0x20) = v2_5
                            *(x23_1 + 0x30) = v0_5
                            *(x23_1 + 0x10) = v1_5
                            *x23_1 = *x24_3
                            x24_3[4].b = x8_25
                            x24_3[2] = var_90_5
                            x24_3[3] = var_80_5
                            x24_3[1] = var_a0_5
                            *x24_3 = var_b0
                        
                        goto label_f4eef4
                    
                    x0_6, v0_1, v1_1, v2_1 = sub_f4f6d4(arg3, x25_2, x23_2)
                    x25_2 -= 0x48
                while ((x0_6 & 1) == 0)
                x26_1 = x25_2 + 0x48
                x24_1 += 1
                var_b0 = *x19
                char x8_10 = (*(x19 + 0x40)).b
                int128_t var_90_1 = *(x19 + 0x20)
                int128_t var_80_1 = *(x19 + 0x30)
                int128_t var_a0_1 = *(x19 + 0x10)
                v0_1 = *(x25_2 + 0x78)
                v1_1 = *(x25_2 + 0x58)
                v2_1 = *(x25_2 + 0x68)
                *(x19 + 0x40) = *(x25_2 + 0x88)
                *(x19 + 0x10) = v1_1
                *(x19 + 0x20) = v2_1
                *(x19 + 0x30) = v0_1
                *x19 = *(x25_2 + 0x48)
                *(x25_2 + 0x58) = var_a0_1
                *(x25_2 + 0x88) = x8_10
                *(x25_2 + 0x78) = var_80_1
                *(x25_2 + 0x68) = var_90_1
                *(x25_2 + 0x48) = var_b0
                x25_1 = x19 + 0x48
                
                if (x25_1 u>= x26_1)
                    goto label_f4efc0
                
                goto label_f4f06c
            
            x26_1 = x21 - 0x48
            x25_1 = x19 + 0x48
            
            if (x25_1 u< x26_1)
            label_f4f06c:
                int128_t* x27_1
                
                while (true)
                    x27_1 = x25_1 - 0x48
                    int32_t x0_8
                    
                    do
                        x27_1 += 0x48
                        x0_8 = sub_f4f6d4(arg3, x27_1, x23_2)
                    while ((x0_8 & 1) != 0)
                    x25_1 = x27_1 + 0x48
                    int128_t v0_2
                    int128_t v1_2
                    int32_t x0_10
                    
                    do
                        x26_1 -= 0x48
                        int128_t v2_2
                        x0_10, v0_2, v1_2, v2_2 = sub_f4f6d4(arg3, x26_1, x23_2)
                    while ((x0_10 & 1) == 0)
                    
                    if (x27_1 u> x26_1)
                        break
                    
                    x24_1 += 1
                    
                    if (x23_2 == x27_1)
                        x23_2 = x26_1
                    
                    var_b0 = *x27_1
                    char x8_13 = (x27_1[4].q).b
                    int128_t var_90_2 = x27_1[2]
                    int128_t var_80_2 = x27_1[3]
                    int128_t var_a0_2 = x27_1[1]
                    v0_2 = x26_1[3]
                    v1_2 = x26_1[1]
                    x27_1[4].b = x26_1[4].b
                    x27_1[2] = x26_1[2]
                    x27_1[3] = v0_2
                    x27_1[1] = v1_2
                    *x27_1 = *x26_1
                    x26_1[4].b = x8_13
                    x26_1[2] = var_90_2
                    x26_1[3] = var_80_2
                    x26_1[1] = var_a0_2
                    *x26_1 = var_b0
                
                x25_1 = x27_1
                
                if (x25_1 != x23_2)
                    goto label_f4f13c
            else
            label_f4efc0:
                
                if (x25_1 != x23_2)
                label_f4f13c:
                    int32_t x0_12
                    int128_t v0_3
                    int128_t v1_3
                    int128_t v2_3
                    x0_12, v0_3, v1_3, v2_3 = sub_f4f6d4(arg3, x23_2, x25_1)
                    
                    if ((x0_12 & 1) != 0)
                        x24_1 += 1
                        var_b0 = *x25_1
                        char x8_16 = (*(x25_1 + 0x40)).b
                        int128_t var_90_3 = *(x25_1 + 0x20)
                        int128_t var_80_3 = *(x25_1 + 0x30)
                        int128_t var_a0_3 = *(x25_1 + 0x10)
                        v2_3 = x23_2[2]
                        v0_3 = x23_2[3]
                        v1_3 = x23_2[1]
                        *(x25_1 + 0x40) = x23_2[4].b
                        *(x25_1 + 0x20) = v2_3
                        *(x25_1 + 0x30) = v0_3
                        *(x25_1 + 0x10) = v1_3
                        *x25_1 = *x23_2
                        x23_2[4].b = x8_16
                        x23_2[2] = var_90_3
                        x23_2[3] = var_80_3
                        x23_2[1] = var_a0_3
                        *x23_2 = var_b0
            
            if (x24_1 != 0)
            label_f4f1f4:
                
                if (((x25_1 - x19) s>> 3) * -0x71c71c71c71c71c7
                        s>= ((x21 - x25_1) s>> 3) * -0x71c71c71c71c71c7)
                    sub_f4ee98(x25_1 + 0x48, x21, arg3)
                    x21 = x25_1
                    break
                
                sub_f4ee98(x19, x25_1, arg3)
                x23_1 = x25_1 + 0x48
                continue
            else
                int32_t x0_14 = sub_f50a94(x19, x25_1, arg3)
                x23_1 = x25_1 + 0x48
                
                if ((sub_f50a94(x23_1, x21, arg3).d & 1) != 0)
                    x21 = x25_1
                    
                    if ((x0_14 & 1) == 0)
                        break
                else
                    if ((x0_14 & 1) == 0)
                        goto label_f4f1f4
                    
                    continue
    label_f4f6a8:
        
        if (*(x8 + 0x28) == x8_1)
            return 
        
        __stack_chk_fail()
        noreturn
