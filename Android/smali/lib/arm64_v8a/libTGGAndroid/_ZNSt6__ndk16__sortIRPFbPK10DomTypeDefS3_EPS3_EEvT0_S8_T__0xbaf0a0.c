// 函数: _ZNSt6__ndk16__sortIRPFbPK10DomTypeDefS3_EPS3_EEvT0_S8_T_
// 地址: 0xbaf0a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomTypeDef const** x21 = arg2
DomTypeDef const** x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_baf0d4:
        int64_t x9_1 = x21 - x23_1
        int64_t x8_1 = x9_1 s>> 3
        x19 = x23_1
        uint64_t x0_48
        DomTypeDef const* x1_32
        bool (* x8_47)(DomTypeDef const*, DomTypeDef const*)
        DomTypeDef const* x9_18
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    if (((*arg3)(x21[-1], *x19).d & 1) != 0)
                        x9_18 = *x19
                        *x19 = x21[-1]
                        x21[-1] = x9_18
                case 3
                    int32_t x0_40 = (*arg3)(x19[1], *x19)
                    arg1 = (*arg3)(x21[-1], x19[1])
                    
                    if ((x0_40 & 1) != 0)
                        DomTypeDef const* x1_25 = *x19
                        
                        if ((arg1.d & 1) == 0)
                            *x19 = x19[1]
                            x19[1] = x1_25
                            
                            if (((*arg3)(x21[-1]).d & 1) != 0)
                                x9_18 = x19[1]
                                x19[1] = x21[-1]
                                x21[-1] = x9_18
                        else
                            *x19 = x21[-1]
                            x21[-1] = x1_25
                    else if ((arg1.d & 1) != 0)
                        int64_t x9_22 = x19[1]
                        x19[1] = x21[-1]
                        x21[-1] = x9_22
                        x8_47 = *arg3
                        x1_32 = *x19
                        x0_48 = x19[1]
                    label_baf670:
                        uint128_t v0_4
                        arg1, v0_4 = x8_47(x0_48, x1_32)
                        
                        if ((arg1.d & 1) != 0)
                            v0_4 = *x19
                            *x19 = vextq_s8(v0_4, v0_4, 8)
                case 4
                    return std::__ndk1::__sort4<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
                        x19, &x19[1], &x19[2], x21 - 8, arg3) __tailcall
                case 5
                    std::__ndk1::__sort4<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
                        x19, &x19[1], &x19[2], &x19[3], arg3)
                    
                    if (((*arg3)(x21[-1], x19[3]).d & 1) != 0)
                        DomTypeDef* x9_21 = x19[3]
                        x19[3] = x21[-1]
                        x21[-1] = x9_21
                        uint128_t v0_2
                        arg1, v0_2 = (*arg3)(x19[3], x19[2])
                        
                        if ((arg1.d & 1) != 0)
                            v0_2 = *(x19 + 0x10)
                            *(x19 + 0x10) = vextq_s8(v0_2, v0_2, 8)
                            uint128_t v0_3
                            arg1, v0_3 = (*arg3)(v0_2:8.q, x19[1])
                            
                            if ((arg1.d & 1) != 0)
                                v0_3 = *(x19 + 8)
                                x1_32 = *x19
                                *(x19 + 8) = vextq_s8(v0_3, v0_3, 8)
                                x8_47 = *arg3
                                x0_48 = v0_3:8.q
                                goto label_baf670
        else
            if (x9_1 s<= 0xf7)
                return std::__ndk1::__insertion_sort_3<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
                    x19, x21, arg3) __tailcall
            
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* x23_2 = x19 + (x10_1 << 2 & 0xfffffffffffffff8)
            int32_t x24_1
            
            if (x9_1 s< 0x1f39)
                int32_t x0_11 = (*arg3)(*x23_2, *x19)
                int32_t x0_13 = (*arg3)(*(x21 - 8), *x23_2)
                
                if ((x0_11 & 1) != 0)
                    DomTypeDef const* x1_7 = *x19
                    
                    if ((x0_13 & 1) == 0)
                        *x19 = *x23_2
                        *x23_2 = x1_7
                        
                        if (((*arg3)(*(x21 - 8)) & 1) == 0)
                            x24_1 = 1
                        else
                            int64_t x9_11 = *x23_2
                            *x23_2 = *(x21 - 8)
                            *(x21 - 8) = x9_11
                            x24_1 = 2
                    else
                        x24_1 = 1
                        *x19 = *(x21 - 8)
                        *(x21 - 8) = x1_7
                else if ((x0_13 & 1) == 0)
                    x24_1 = 0
                else
                    int64_t x9_9 = *x23_2
                    *x23_2 = *(x21 - 8)
                    *(x21 - 8) = x9_9
                    
                    if (((*arg3)(*x23_2, *x19) & 1) == 0)
                        x24_1 = 1
                    else
                        DomTypeDef const* x9_10 = *x19
                        *x19 = *x23_2
                        *x23_2 = x9_10
                        x24_1 = 2
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_4 = x8_2 << 1 & 0xfffffffffffffff8
                void* x25_1 = x19 + x8_4
                DomTypeDef** x26_1 = x23_2 + x8_4
                x24_1 = std::__ndk1::__sort4<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
                    x19, x25_1, x23_2, x26_1, arg3)
                
                if (((*arg3)(*(x21 - 8), *x26_1) & 1) != 0)
                    DomTypeDef* x9_4 = *x26_1
                    *x26_1 = *(x21 - 8)
                    *(x21 - 8) = x9_4
                    
                    if (((*arg3)(*x26_1, *x23_2) & 1) == 0)
                        x24_1 += 1
                    else
                        DomTypeDef* x9_5 = *x23_2
                        *x23_2 = *x26_1
                        *x26_1 = x9_5
                        
                        if (((*arg3)(*x23_2, *x25_1) & 1) == 0)
                            x24_1 += 2
                        else
                            int64_t x9_6 = *x25_1
                            *x25_1 = *x23_2
                            *x23_2 = x9_6
                            
                            if (((*arg3)(*x25_1, *x19) & 1) == 0)
                                x24_1 += 3
                            else
                                DomTypeDef const* x9_7 = *x19
                                x24_1 += 4
                                *x19 = *x25_1
                                *x25_1 = x9_7
            
            DomTypeDef** x25_2
            void* x26_2
            
            if (((*arg3)(*x19, *x23_2) & 1) == 0)
                void* x26_3 = x21 - 0x10
                int32_t x0_21
                
                do
                    if (x19 == x26_3)
                        int64_t* x24_4 = x19
                        void* x24_5 = &x24_4[1]
                        
                        if (((*arg3)(*x24_4, *(x21 - 8)).d & 1) == 0)
                            if (x24_5 == x21 - 8)
                                goto label_baf6c8
                            
                            x24_5 = &x19[2]
                            
                            while (((*arg3)(*x19, *(x24_5 - 8)).d & 1) == 0)
                                x24_5 += 8
                                
                                if (x21 == x24_5)
                                    return 
                            
                            int64_t x9_16 = *(x24_5 - 8)
                            *(x24_5 - 8) = *(x21 - 8)
                            *(x21 - 8) = x9_16
                        
                        if (x24_5 == x21 - 8)
                            goto label_baf6c8
                        
                        void* x25_3 = x21 - 8
                        
                        while (true)
                            x23_1 = x24_5 - 8
                            int32_t x0_35
                            
                            do
                                x23_1 += 8
                                x0_35 = (*arg3)(*x19, *x23_1)
                            while ((x0_35 & 1) == 0)
                            x24_5 = x23_1 + 8
                            
                            do
                                x25_3 -= 8
                                arg1 = (*arg3)(*x19, *x25_3)
                            while ((arg1.d & 1) != 0)
                            
                            if (x23_1 u>= x25_3)
                                break
                            
                            int64_t x9_17 = *x23_1
                            *x23_1 = *x25_3
                            *x25_3 = x9_17
                        
                        goto label_baf0d4
                    
                    int64_t x0_20 = *x26_3
                    x26_3 -= 8
                    x0_21 = (*arg3)(x0_20, *x23_2)
                while ((x0_21 & 1) == 0)
                DomTypeDef const* x8_24 = *x19
                x26_2 = x26_3 + 8
                x24_1 += 1
                *x19 = *x26_2
                *x26_2 = x8_24
                x25_2 = &x19[1]
                
                if (x25_2 u< x26_2)
                    goto label_baf34c
                
                goto label_baf324
            
            x26_2 = x21 - 8
            x25_2 = &x19[1]
            
            if (x25_2 u< x26_2)
            label_baf34c:
                void* fp_1
                
                while (true)
                    fp_1 = x25_2 - 8
                    int32_t x0_23
                    
                    do
                        fp_1 += 8
                        x0_23 = (*arg3)(*fp_1, *x23_2)
                    while ((x0_23 & 1) != 0)
                    x25_2 = fp_1 + 8
                    int32_t x0_25
                    
                    do
                        x26_2 -= 8
                        x0_25 = (*arg3)(*x26_2, *x23_2)
                    while ((x0_25 & 1) == 0)
                    
                    if (fp_1 u> x26_2)
                        break
                    
                    int64_t x9_13 = *fp_1
                    x24_1 += 1
                    *fp_1 = *x26_2
                    *x26_2 = x9_13
                    
                    if (x23_2 == fp_1)
                        x23_2 = x26_2
                
                x25_2 = fp_1
                
                if (x25_2 != x23_2)
                    goto label_baf39c
            else
            label_baf324:
                
                if (x25_2 != x23_2)
                label_baf39c:
                    
                    if (((*arg3)(*x23_2, *x25_2) & 1) != 0)
                        DomTypeDef* x9_14 = *x25_2
                        x24_1 += 1
                        *x25_2 = *x23_2
                        *x23_2 = x9_14
            
            if (x24_1 != 0)
            label_baf3f4:
                
                if (x25_2 - x19 s>= x21 - x25_2)
                    std::__ndk1::__sort<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
                        &x25_2[1], x21, arg3)
                    x21 = x25_2
                    break
                
                std::__ndk1::__sort<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
                    x19, x25_2, arg3)
                x23_1 = &x25_2[1]
                continue
            else
                int32_t x0_29 = std::__ndk1::__insertion_sort_incomplete<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
                    x19, x25_2, arg3)
                x23_1 = &x25_2[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
                        x23_1, x21, arg3).d & 1) != 0)
                    x21 = x25_2
                    
                    if ((x0_29 & 1) == 0)
                        break
                else
                    if ((x0_29 & 1) == 0)
                        goto label_baf3f4
                    
                    continue
    label_baf6c8:
        return 
