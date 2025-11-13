// 函数: sub_1000808
// 地址: 0x1000808
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
void* x8 = *(arg1 + 0xc0)
int64_t result
void* x10_1

if (x9 u< x8)
    x10_1 = &x9[1]
    *(arg1 + 0xb8) = x10_1
    
    if (zx.d(*x9) == 0x47)
    label_10008ac:
        void* x11_1
        
        if (x10_1 u< x8)
            x11_1 = x10_1 + 1
            *(arg1 + 0xb8) = x11_1
            
            if (zx.d(*x10_1) != 0x49)
                result = 0
                data_2423720 = "not GIF"
            else
            label_100092c:
                void* x10_2
                
                if (x11_1 u< x8)
                    x10_2 = x11_1 + 1
                    *(arg1 + 0xb8) = x10_2
                    
                    if (zx.d(*x11_1) != 0x46)
                        result = 0
                        data_2423720 = "not GIF"
                    else
                    label_10009ac:
                        void* x11_2
                        
                        if (x10_2 u< x8)
                            x11_2 = x10_2 + 1
                            *(arg1 + 0xb8) = x11_2
                            
                            if (zx.d(*x10_2) != 0x38)
                                result = 0
                                data_2423720 = "not GIF"
                            else
                            label_1000a1c:
                                uint32_t x9_9
                                void* x10_3
                                
                                if (x11_2 u>= x8)
                                    if (*(arg1 + 0x30) != 0)
                                        int32_t x0_9 = (*(arg1 + 0x10))(*(arg1 + 0x28), 
                                            arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                                        
                                        if (x0_9 == 0)
                                            x9_9 = 0
                                            *(arg1 + 0x30) = 0
                                            x8 = arg1 + 0x39
                                            *(arg1 + 0x38) = 0
                                        else
                                            x9_9 = zx.d(*(arg1 + 0x38))
                                            x8 = &(arg1 + 0x38)[sx.q(x0_9)]
                                        
                                        x10_3 = arg1 + 0x39
                                        *(arg1 + 0xb8) = x10_3
                                        *(arg1 + 0xc0) = x8
                                        goto label_1000a7c
                                    
                                    result = 0
                                    data_2423720 = "not GIF"
                                else
                                    x10_3 = x11_2 + 1
                                    *(arg1 + 0xb8) = x10_3
                                    x9_9 = zx.d(*x11_2)
                                label_1000a7c:
                                    
                                    if (x9_9 != 0x37 && x9_9 != 0x39)
                                        result = 0
                                        data_2423720 = "not GIF"
                                    else
                                        void* x9_10
                                        uint32_t x10_4
                                        
                                        if (x10_3 u>= x8)
                                            if (*(arg1 + 0x30) != 0)
                                                int32_t x0_11 = (*(arg1 + 0x10))(*(arg1 + 0x28), 
                                                    arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                                                
                                                if (x0_11 == 0)
                                                    x10_4 = 0
                                                    *(arg1 + 0x30) = 0
                                                    x8 = arg1 + 0x39
                                                    *(arg1 + 0x38) = 0
                                                else
                                                    x10_4 = zx.d(*(arg1 + 0x38))
                                                    x8 = &(arg1 + 0x38)[sx.q(x0_11)]
                                                
                                                x9_10 = arg1 + 0x39
                                                *(arg1 + 0xb8) = x9_10
                                                *(arg1 + 0xc0) = x8
                                                goto label_1000aec
                                            
                                            result = 0
                                            data_2423720 = "not GIF"
                                        else
                                            x9_10 = x10_3 + 1
                                            *(arg1 + 0xb8) = x9_10
                                            x10_4 = zx.d(*x10_3)
                                        label_1000aec:
                                            
                                            if (x10_4 != 0x61)
                                                result = 0
                                                data_2423720 = "not GIF"
                                            else
                                                data_2423720 = &data_793a18
                                                uint32_t x23_1
                                                
                                                if (x9_10 u< x8)
                                                    *(arg1 + 0xb8) = x9_10 + 1
                                                    x23_1 = zx.d(*x9_10)
                                                    x9_10 += 1
                                                else if (*(arg1 + 0x30) == 0)
                                                    x23_1 = 0
                                                else
                                                    int32_t x0_13 = (*(arg1 + 0x10))(
                                                        *(arg1 + 0x28), arg1 + 0x38, 
                                                        zx.q(*(arg1 + 0x34)))
                                                    
                                                    if (x0_13 == 0)
                                                        x23_1 = 0
                                                        *(arg1 + 0x30) = 0
                                                        x8 = arg1 + 0x39
                                                        *(arg1 + 0x38) = 0
                                                    else
                                                        x23_1 = zx.d(*(arg1 + 0x38))
                                                        x8 = &(arg1 + 0x38)[sx.q(x0_13)]
                                                    
                                                    x9_10 = arg1 + 0x39
                                                    *(arg1 + 0xb8) = x9_10
                                                    *(arg1 + 0xc0) = x8
                                                
                                                uint32_t x8_29
                                                
                                                if (x9_10 u>= x8)
                                                    x8_29 = *(arg1 + 0x30)
                                                    
                                                    if (x8_29 != 0)
                                                        int32_t x0_15 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x28), arg1 + 0x38, 
                                                            zx.q(*(arg1 + 0x34)))
                                                        void* x9_13
                                                        
                                                        if (x0_15 == 0)
                                                            x8_29 = 0
                                                            *(arg1 + 0x30) = 0
                                                            x9_13 = arg1 + 0x39
                                                            *(arg1 + 0x38) = 0
                                                        else
                                                            x8_29 = zx.d(*(arg1 + 0x38))
                                                            x9_13 = &(arg1 + 0x38)[sx.q(x0_15)]
                                                        
                                                        *(arg1 + 0xb8) = arg1 + 0x39
                                                        *(arg1 + 0xc0) = x9_13
                                                else
                                                    *(arg1 + 0xb8) = x9_10 + 1
                                                    x8_29 = zx.d(*x9_10)
                                                
                                                *arg2 = (0xffff00ff & x23_1) | (0xff & x8_29) << 8
                                                char* x9_14 = *(arg1 + 0xb8)
                                                void* x8_31 = *(arg1 + 0xc0)
                                                uint32_t x23_3
                                                
                                                if (x9_14 u< x8_31)
                                                    *(arg1 + 0xb8) = &x9_14[1]
                                                    x23_3 = zx.d(*x9_14)
                                                    x9_14 = &x9_14[1]
                                                else if (*(arg1 + 0x30) == 0)
                                                    x23_3 = 0
                                                else
                                                    int32_t x0_17 = (*(arg1 + 0x10))(
                                                        *(arg1 + 0x28), arg1 + 0x38, 
                                                        zx.q(*(arg1 + 0x34)))
                                                    
                                                    if (x0_17 == 0)
                                                        x23_3 = 0
                                                        *(arg1 + 0x30) = 0
                                                        x8_31 = arg1 + 0x39
                                                        *(arg1 + 0x38) = 0
                                                    else
                                                        x23_3 = zx.d(*(arg1 + 0x38))
                                                        x8_31 = &(arg1 + 0x38)[sx.q(x0_17)]
                                                    
                                                    x9_14 = arg1 + 0x39
                                                    *(arg1 + 0xb8) = x9_14
                                                    *(arg1 + 0xc0) = x8_31
                                                
                                                uint32_t x8_36
                                                
                                                if (x9_14 u>= x8_31)
                                                    x8_36 = *(arg1 + 0x30)
                                                    
                                                    if (x8_36 != 0)
                                                        int32_t x0_19 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x28), arg1 + 0x38, 
                                                            zx.q(*(arg1 + 0x34)))
                                                        void* x9_17
                                                        
                                                        if (x0_19 == 0)
                                                            x8_36 = 0
                                                            *(arg1 + 0x30) = 0
                                                            x9_17 = arg1 + 0x39
                                                            *(arg1 + 0x38) = 0
                                                        else
                                                            x8_36 = zx.d(*(arg1 + 0x38))
                                                            x9_17 = &(arg1 + 0x38)[sx.q(x0_19)]
                                                        
                                                        *(arg1 + 0xb8) = arg1 + 0x39
                                                        *(arg1 + 0xc0) = x9_17
                                                else
                                                    *(arg1 + 0xb8) = &x9_14[1]
                                                    x8_36 = zx.d(*x9_14)
                                                
                                                arg2[1] = (0xffff00ff & x23_3) | (0xff & x8_36) << 8
                                                char* x8_38 = *(arg1 + 0xb8)
                                                uint32_t x8_39
                                                
                                                if (x8_38 u>= *(arg1 + 0xc0))
                                                    x8_39 = *(arg1 + 0x30)
                                                    
                                                    if (x8_39 != 0)
                                                        int32_t x0_21 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x28), arg1 + 0x38, 
                                                            zx.q(*(arg1 + 0x34)))
                                                        void* x9_22
                                                        
                                                        if (x0_21 == 0)
                                                            x8_39 = 0
                                                            *(arg1 + 0x30) = 0
                                                            x9_22 = arg1 + 0x39
                                                            *(arg1 + 0x38) = 0
                                                        else
                                                            x8_39 = zx.d(*(arg1 + 0x38))
                                                            x9_22 = &(arg1 + 0x38)[sx.q(x0_21)]
                                                        
                                                        *(arg1 + 0xb8) = arg1 + 0x39
                                                        *(arg1 + 0xc0) = x9_22
                                                else
                                                    *(arg1 + 0xb8) = &x8_38[1]
                                                    x8_39 = zx.d(*x8_38)
                                                
                                                arg2[8] = x8_39
                                                char* x8_41 = *(arg1 + 0xb8)
                                                uint32_t x8_42
                                                
                                                if (x8_41 u>= *(arg1 + 0xc0))
                                                    x8_42 = *(arg1 + 0x30)
                                                    
                                                    if (x8_42 != 0)
                                                        int32_t x0_23 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x28), arg1 + 0x38, 
                                                            zx.q(*(arg1 + 0x34)))
                                                        void* x9_27
                                                        
                                                        if (x0_23 == 0)
                                                            x8_42 = 0
                                                            *(arg1 + 0x30) = 0
                                                            x9_27 = arg1 + 0x39
                                                            *(arg1 + 0x38) = 0
                                                        else
                                                            x8_42 = zx.d(*(arg1 + 0x38))
                                                            x9_27 = arg1 + 0x38 + sx.q(x0_23)
                                                        
                                                        *(arg1 + 0xb8) = arg1 + 0x39
                                                        *(arg1 + 0xc0) = x9_27
                                                else
                                                    *(arg1 + 0xb8) = &x8_41[1]
                                                    x8_42 = zx.d(*x8_41)
                                                
                                                arg2[9] = x8_42
                                                char* x8_44 = *(arg1 + 0xb8)
                                                uint32_t x8_45
                                                
                                                if (x8_44 u>= *(arg1 + 0xc0))
                                                    x8_45 = *(arg1 + 0x30)
                                                    
                                                    if (x8_45 != 0)
                                                        int32_t x0_25 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x28), arg1 + 0x38, 
                                                            zx.q(*(arg1 + 0x34)))
                                                        void* x9_32
                                                        
                                                        if (x0_25 == 0)
                                                            x8_45 = 0
                                                            *(arg1 + 0x30) = 0
                                                            x9_32 = arg1 + 0x39
                                                            *(arg1 + 0x38) = 0
                                                        else
                                                            x8_45 = zx.d(*(arg1 + 0x38))
                                                            x9_32 = arg1 + 0x38 + sx.q(x0_25)
                                                        
                                                        *(arg1 + 0xb8) = arg1 + 0x39
                                                        *(arg1 + 0xc0) = x9_32
                                                else
                                                    *(arg1 + 0xb8) = &x8_44[1]
                                                    x8_45 = zx.d(*x8_44)
                                                
                                                arg2[0xa] = x8_45
                                                arg2[0xb] = 0xffffffff
                                                
                                                if (arg3 != 0)
                                                    *arg3 = 4
                                                
                                                uint64_t x8_47
                                                
                                                if (arg4 == 0)
                                                    x8_47 = zx.q(arg2[8])
                                                
                                                if (arg4 != 0 || (x8_47.d & 0x80) == 0)
                                                    return 1
                                                
                                                void* x20_1 = arg2 + 0x37
                                                int64_t i_1 = 2 << (x8_47 & 7)
                                                int64_t x24_1 = 0xffffffff
                                                int64_t i
                                                
                                                do
                                                    char* x8_52 = *(arg1 + 0xb8)
                                                    uint32_t x8_53
                                                    
                                                    if (x8_52 u>= *(arg1 + 0xc0))
                                                        x8_53 = *(arg1 + 0x30)
                                                        
                                                        if (x8_53 != 0)
                                                            int32_t x0_27 = (*(arg1 + 0x10))(
                                                                *(arg1 + 0x28), arg1 + 0x38, 
                                                                zx.q(*(arg1 + 0x34)))
                                                            void* x9_38
                                                            
                                                            if (x0_27 == 0)
                                                                x8_53 = 0
                                                                *(arg1 + 0x30) = 0
                                                                *(arg1 + 0x38) = 0
                                                                x9_38 = arg1 + 0x39
                                                            else
                                                                x8_53 = zx.d(*(arg1 + 0x38))
                                                                x9_38 = arg1 + 0x38 + sx.q(x0_27)
                                                            
                                                            *(arg1 + 0xb8) = arg1 + 0x39
                                                            *(arg1 + 0xc0) = x9_38
                                                    else
                                                        *(arg1 + 0xb8) = &x8_52[1]
                                                        x8_53 = zx.d(*x8_52)
                                                    
                                                    *(x20_1 - 1) = x8_53.b
                                                    char* x8_55 = *(arg1 + 0xb8)
                                                    uint32_t x8_56
                                                    
                                                    if (x8_55 u>= *(arg1 + 0xc0))
                                                        x8_56 = *(arg1 + 0x30)
                                                        
                                                        if (x8_56 != 0)
                                                            int32_t x0_29 = (*(arg1 + 0x10))(
                                                                *(arg1 + 0x28), arg1 + 0x38, 
                                                                zx.q(*(arg1 + 0x34)))
                                                            void* x9_43
                                                            
                                                            if (x0_29 == 0)
                                                                x8_56 = 0
                                                                *(arg1 + 0x30) = 0
                                                                *(arg1 + 0x38) = 0
                                                                x9_43 = arg1 + 0x39
                                                            else
                                                                x8_56 = zx.d(*(arg1 + 0x38))
                                                                x9_43 = arg1 + 0x38 + sx.q(x0_29)
                                                            
                                                            *(arg1 + 0xb8) = arg1 + 0x39
                                                            *(arg1 + 0xc0) = x9_43
                                                    else
                                                        *(arg1 + 0xb8) = &x8_55[1]
                                                        x8_56 = zx.d(*x8_55)
                                                    
                                                    *(x20_1 - 2) = x8_56.b
                                                    char* x8_58 = *(arg1 + 0xb8)
                                                    uint32_t x8_49
                                                    
                                                    if (x8_58 u< *(arg1 + 0xc0))
                                                        *(arg1 + 0xb8) = &x8_58[1]
                                                        x8_49 = zx.d(*x8_58)
                                                    else
                                                        x8_49 = *(arg1 + 0x30)
                                                        
                                                        if (x8_49 != 0)
                                                            int32_t x0_31 = (*(arg1 + 0x10))(
                                                                *(arg1 + 0x28), arg1 + 0x38, 
                                                                zx.q(*(arg1 + 0x34)))
                                                            void* x9_47
                                                            
                                                            if (x0_31 == 0)
                                                                x8_49 = 0
                                                                *(arg1 + 0x30) = 0
                                                                *(arg1 + 0x38) = 0
                                                                x9_47 = arg1 + 0x39
                                                            else
                                                                x8_49 = zx.d(*(arg1 + 0x38))
                                                                x9_47 = arg1 + 0x38 + sx.q(x0_31)
                                                            
                                                            *(arg1 + 0xb8) = arg1 + 0x39
                                                            *(arg1 + 0xc0) = x9_47
                                                    
                                                    int64_t temp0_1 = x24_1
                                                    x24_1 -= 1
                                                    *(x20_1 - 3) = x8_49.b
                                                    i = i_1
                                                    i_1 -= 1
                                                    *x20_1 =
                                                        ((temp0_1 u>= 1 ? 1 : 0) << 0x1f s>> 0x1f).b
                                                    x20_1 += 4
                                                    result = 1
                                                while (i != 1)
                        else if (*(arg1 + 0x30) == 0)
                            result = 0
                            data_2423720 = "not GIF"
                        else
                            int32_t x0_7 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                            uint32_t x9_8
                            
                            if (x0_7 == 0)
                                x9_8 = 0
                                *(arg1 + 0x30) = 0
                                x8 = arg1 + 0x39
                                *(arg1 + 0x38) = 0
                            else
                                x9_8 = zx.d(*(arg1 + 0x38))
                                x8 = arg1 + 0x38 + sx.q(x0_7)
                            
                            x11_2 = arg1 + 0x39
                            *(arg1 + 0xb8) = x11_2
                            *(arg1 + 0xc0) = x8
                            
                            if (x9_8 == 0x38)
                                goto label_1000a1c
                            
                            result = 0
                            data_2423720 = "not GIF"
                else if (*(arg1 + 0x30) == 0)
                    result = 0
                    data_2423720 = "not GIF"
                else
                    int32_t x0_5 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    
                    if (x0_5 == 0)
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        *(arg1 + 0xb8) = arg1 + 0x39
                        *(arg1 + 0xc0) = arg1 + 0x39
                        result = 0
                        data_2423720 = "not GIF"
                    else
                        uint32_t x9_6 = zx.d(*(arg1 + 0x38))
                        x8 = arg1 + 0x38 + sx.q(x0_5)
                        x10_2 = arg1 + 0x39
                        *(arg1 + 0xb8) = x10_2
                        *(arg1 + 0xc0) = x8
                        
                        if (x9_6 == 0x46)
                            goto label_10009ac
                        
                        result = 0
                        data_2423720 = "not GIF"
        else if (*(arg1 + 0x30) == 0)
            result = 0
            data_2423720 = "not GIF"
        else
            int32_t x0_3 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            
            if (x0_3 == 0)
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                *(arg1 + 0xb8) = arg1 + 0x39
                *(arg1 + 0xc0) = arg1 + 0x39
                result = 0
                data_2423720 = "not GIF"
            else
                uint32_t x9_4 = zx.d(*(arg1 + 0x38))
                x8 = arg1 + 0x38 + sx.q(x0_3)
                x11_1 = arg1 + 0x39
                *(arg1 + 0xb8) = x11_1
                *(arg1 + 0xc0) = x8
                
                if (x9_4 == 0x49)
                    goto label_100092c
                
                result = 0
                data_2423720 = "not GIF"
    else
        result = 0
        data_2423720 = "not GIF"
else if (*(arg1 + 0x30) == 0)
    result = 0
    data_2423720 = "not GIF"
else
    int32_t x0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    
    if (x0_1 == 0)
        *(arg1 + 0x30) = 0
        *(arg1 + 0x38) = 0
        *(arg1 + 0xb8) = arg1 + 0x39
        *(arg1 + 0xc0) = arg1 + 0x39
        result = 0
        data_2423720 = "not GIF"
    else
        uint32_t x9_2 = zx.d(*(arg1 + 0x38))
        x8 = arg1 + 0x38 + sx.q(x0_1)
        x10_1 = arg1 + 0x39
        *(arg1 + 0xb8) = x10_1
        *(arg1 + 0xc0) = x8
        
        if (x9_2 == 0x47)
            goto label_10008ac
        
        result = 0
        data_2423720 = "not GIF"
return result
