// 函数: sub_10edf5c
// 地址: 0x10edf5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char* x10 = *arg1
void* x9 = arg1[1]

if (x10 != x9)
    if (zx.d(*x10) == 0x68)
        *arg1 = &x10[1]
        
        if (&x10[1] != x9)
            void* x11_2 = &x10[1]
            
            if (zx.d(x10[1]) == 0x6e)
                x11_2 = &x10[2]
                *arg1 = x11_2
            
            if (x9 != x11_2 && zx.d(*x11_2) - 0x30 u<= 9)
                void* x11_3 = x11_2 + 1
                void* x10_3
                void* x11_5
                
                while (true)
                    x10_3 = x11_3
                    *arg1 = x11_3
                    
                    if (x9 == x11_3)
                        x11_5 = x9
                        break
                    
                    x11_3 = x10_3 + 1
                    
                    if (zx.d(*x10_3) - 0x30 u>= 0xa)
                        x11_5 = x11_3 - 1
                        break
                
                if (&x10[1] == x11_5 || x9 == x10_3)
                    return 1
                
                if (zx.d(*x10_3) == 0x5f)
                    *arg1 = x10_3 + 1
                    return 0
    else if (zx.d(*x10) == 0x76)
        *arg1 = &x10[1]
        
        if (&x10[1] != x9)
            void* x11_7 = &x10[1]
            
            if (zx.d(x10[1]) == 0x6e)
                x11_7 = &x10[2]
                *arg1 = x11_7
            
            if (x9 != x11_7 && zx.d(*x11_7) - 0x30 u<= 9)
                void* x10_6
                
                do
                    x10_6 = x11_7
                    x11_7 += 1
                    *arg1 = x11_7
                    
                    if (x9 - 1 == x10_6)
                        x11_7 = x9
                        break
                while (zx.d(*x11_7) - 0x30 u< 0xa)
                
                if (&x10[1] == x11_7 || x9 - 1 == x10_6)
                    return 1
                
                if (zx.d(*(x10_6 + 1)) == 0x5f)
                    char* x8_8 = x10_6 + 2
                    *arg1 = x8_8
                    
                    if (x9 - 2 != x10_6)
                        if (zx.d(*x8_8) == 0x6e)
                            x8_8 = x10_6 + 3
                            *arg1 = x8_8
                        
                        if (x9 != x8_8 && zx.d(*x8_8) - 0x30 u<= 9)
                            void* x8_9 = &x8_8[1]
                            void* x8_11
                            char* x11_12
                            
                            while (true)
                                x11_12 = x8_9
                                *arg1 = x8_9
                                
                                if (x9 == x8_9)
                                    x8_11 = x9
                                    break
                                
                                x8_9 = &x11_12[1]
                                
                                if (zx.d(*x11_12) - 0x30 u>= 0xa)
                                    x8_11 = x8_9 - 1
                                    break
                            
                            if (x8_11 - 2 == x10_6 || x9 == x11_12)
                                return 1
                            
                            if (zx.d(*x11_12) == 0x5f)
                                *arg1 = &x11_12[1]
                                return 0

return 1
