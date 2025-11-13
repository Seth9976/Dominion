// 函数: _ZNSt6__ndk16__sortIR8ItemSortP10HandleItemEEvT0_S5_T_
// 地址: 0xc54260
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

HandleItem* x20 = arg2
HandleItem* x21 = arg1

while (true)
    void* __offset(HandleItem, -0x8) x27_1 = x20 - 8
    void* __offset(HandleItem, 0x4) x23_1 = x21
    
    while (true)
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 2
        x21 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    int32_t x22_2 = *(x20 - 4)
                    int32_t x23_4 = *x21
                    arg1 = (*gPile)(zx.q(x22_2), zx.q(x23_4), zx.q(*arg3))
                    
                    if ((arg1.d & 0x80000000) == 0 && (x22_2 s< x23_4 || arg1.d != 0))
                        int32_t x9_9 = *x21
                        *x21 = *(x20 - 4)
                        *(x20 - 4) = x9_9
                case 3
                    return std::__ndk1::__sort3<ItemSort&, HandleItem*>(x21, x21 + 4, x20 - 4, arg3)
                        __tailcall
                case 4
                    return std::__ndk1::__sort4<ItemSort&, HandleItem*>(x21, x21 + 4, x21 + 8, 
                        x20 - 4, arg3) __tailcall
                case 5
                    return sub_c54ac8(x21, x21 + 4, x21 + 8, x21 + 0xc, x20 - 4, arg3) __tailcall
        else if (x9_1 s<= 0x7b)
            void* __offset(HandleItem, 0xc) x22_3 = x21 + 8
            std::__ndk1::__sort3<ItemSort&, HandleItem*>(x21, x21 + 4, x22_3, arg3)
            void* __offset(HandleItem, 0xc) x8_25 = x21 + 0xc
            
            if (x8_25 != x20)
                int64_t x25_8 = 8
                
                while (true)
                    int32_t x23_5 = *x22_3
                    int32_t x24_8 = *x8_25
                    x22_3 = x8_25
                    arg1 = (*gPile)(zx.q(x24_8), zx.q(x23_5), zx.q(*arg3))
                    
                    if ((arg1.d & 0x80000000) == 0 && (x24_8 s< x23_5 || arg1.d != 0))
                        int32_t x23_6 = *x22_3
                        int64_t x8_28 = x25_8
                        void* x8_26
                        
                        while (true)
                            int64_t x26_7 = x8_28
                            void* x8_29 = x21 + x8_28
                            *(x8_29 + 4) = *x8_29
                            
                            if (x26_7 == 0)
                                x8_26 = x21
                                break
                            
                            int32_t x24_9 = *(x8_29 - 4)
                            arg1 = (*gPile)(zx.q(x23_6), zx.q(x24_9), zx.q(*arg3))
                            
                            if ((arg1.d & 0x80000000) == 0)
                                x8_28 = x26_7 - 4
                                
                                if (x23_6 s< x24_9)
                                    continue
                                else if (arg1.d != 0)
                                    continue
                            
                            x8_26 = x21 + x26_7
                            break
                        
                        *x8_26 = x23_6
                    
                    x8_25 = x22_3 + 4
                    x25_8 += 4
                    
                    if (x8_25 == x20)
                        break
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* __offset(HandleItem, -0x8) x23_2 = x21 + (x10_1 << 1 & 0xfffffffffffffffc)
            int32_t x0_1
            
            if (x9_1 s< 0xf9d)
                x0_1 = std::__ndk1::__sort3<ItemSort&, HandleItem*>(x21, x23_2, x20 - 4, arg3)
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_3 = x8_2 & 0xfffffffffffffffc
                x0_1 = sub_c54ac8(x21, x21 + x8_3, x23_2, x23_2 + x8_3, x20 - 4, arg3)
            
            int32_t x25_1 = *x21
            int32_t x26_1 = *x23_2
            int32_t x24_1 = x0_1
            int32_t x0_4 = (*gPile)(zx.q(x25_1), zx.q(x26_1), zx.q(*arg3))
            void* __offset(HandleItem, -0x8) var_68_1
            HandleItem* x25_4
            void* __offset(HandleItem, -0x8) fp_1
            
            if ((x0_4 & 0x80000000) != 0 || (x25_1 s>= x26_1 && x0_4 == 0))
                fp_1 = x27_1
                
                if (x21 != x27_1)
                    while (true)
                        int32_t x25_3 = *fp_1
                        int32_t x26_2 = *x23_2
                        int32_t x0_7 = (*gPile)(zx.q(x25_3), zx.q(x26_2), zx.q(*arg3))
                        
                        if ((x0_7 & 0x80000000) == 0)
                            if (x25_3 s< x26_2)
                                break
                            
                            if (x0_7 != 0)
                                break
                        
                        fp_1 -= 4
                        
                        if (x21 == fp_1)
                            goto label_c54358
                    
                    int32_t x9_3 = *x21
                    x24_1 += 1
                    *x21 = *fp_1
                    *fp_1 = x9_3
                    x25_4 = x21 + 4
                    var_68_1 = x27_1
                    
                    if (x25_4 u< fp_1)
                        goto label_c54504
                    
                    goto label_c54570
                
            label_c54358:
                int32_t x24_2 = *x21
                x23_1 = x21 + 4
                int32_t x25_2 = *(x20 - 4)
                arg1 = (*gPile)(zx.q(x24_2), zx.q(x25_2), zx.q(*arg3))
                
                if ((arg1.d & 0x80000000) == 0 && (x24_2 s< x25_2 || arg1.d != 0))
                label_c5443c:
                    
                    if (x23_1 != x20 - 4)
                        void* __offset(HandleItem, -0x4) x26_3 = x20 - 4
                        
                        while (true)
                            int32_t x24_4 = *x21
                            int32_t x25_6 = *x23_1
                            int32_t x0_10 = (*gPile)(zx.q(x24_4), zx.q(x25_6), zx.q(*arg3))
                            
                            if ((x0_10 & 0x80000000) == 0 && (x24_4 s< x25_6 || x0_10 != 0))
                                void* __offset(HandleItem, -0x8) x8_11 = x26_3 - 4
                                
                                while (true)
                                    int32_t x24_5 = *x21
                                    int32_t x25_7 = *x8_11
                                    x26_3 = x8_11
                                    arg1 = (*gPile)(zx.q(x24_5), zx.q(x25_7), zx.q(*arg3))
                                    
                                    if ((arg1.d & 0x80000000) != 0)
                                        break
                                    
                                    x8_11 = x26_3 - 4
                                    
                                    if (x24_5 s>= x25_7)
                                        if (arg1.d == 0)
                                            break
                                
                                if (x23_1 u>= x26_3)
                                    break
                                
                                int32_t x9_5 = *x23_1
                                *x23_1 = *x26_3
                                x23_1 += 4
                                *x26_3 = x9_5
                                continue
                            
                            x23_1 += 4
                        
                        continue
                else if (x23_1 != x20 - 4)
                    x23_1 = x21 + 8
                    
                    while (true)
                        int32_t x24_3 = *x21
                        int32_t x25_5 = *(x23_1 - 4)
                        arg1 = (*gPile)(zx.q(x24_3), zx.q(x25_5), zx.q(*arg3))
                        
                        if ((arg1.d & 0x80000000) == 0)
                            if (x24_3 s< x25_5)
                                break
                            
                            if (arg1.d != 0)
                                break
                        
                        x23_1 += 4
                        
                        if (x20 == x23_1)
                            return 
                    
                    int32_t x9_4 = *(x23_1 - 4)
                    *(x23_1 - 4) = *(x20 - 4)
                    *(x20 - 4) = x9_4
                    goto label_c5443c
            else
                fp_1 = x20 - 4
                x25_4 = x21 + 4
                var_68_1 = x27_1
                
                if (x25_4 u< fp_1)
                label_c54504:
                    
                    while (true)
                        int32_t x26_4 = *x25_4
                        
                        while (true)
                            int32_t x27_2 = *x23_2
                            int32_t x0_13 = (*gPile)(zx.q(x26_4), zx.q(x27_2), zx.q(*arg3))
                            
                            if ((x0_13 & 0x80000000) != 0)
                                break
                            
                            if (x26_4 s>= x27_2 && x0_13 == 0)
                                break
                            
                            x25_4 += 4
                            x26_4 = *x25_4
                        
                        while (true)
                            fp_1 -= 4
                            int32_t x26_5 = *fp_1
                            int32_t x27_3 = *x23_2
                            int32_t x0_15 = (*gPile)(zx.q(x26_5), zx.q(x27_3), zx.q(*arg3))
                            
                            if ((x0_15 & 0x80000000) == 0)
                                if (x26_5 s< x27_3)
                                    break
                                
                                if (x0_15 != 0)
                                    break
                        
                        if (x25_4 u> fp_1)
                            break
                        
                        int32_t x9_6 = *x25_4
                        bool cond:7_1 = x23_2 == x25_4
                        x24_1 += 1
                        *x25_4 = *fp_1
                        x25_4 += 4
                        *fp_1 = x9_6
                        
                        if (cond:7_1)
                            x23_2 = fp_1
                    
                    goto label_c54570
                
            label_c54570:
                int32_t x0_17
                int32_t x26_6
                int32_t x27_4
                
                if (x25_4 != x23_2)
                    x26_6 = *x23_2
                    x27_4 = *x25_4
                    x0_17 = (*gPile)(zx.q(x26_6), zx.q(x27_4), zx.q(*arg3))
                
                if (x25_4 != x23_2 && (x0_17 & 0x80000000) == 0 && (x26_6 s< x27_4 || x0_17 != 0))
                    int32_t x9_7 = *x25_4
                    *x25_4 = *x23_2
                    *x23_2 = x9_7
                    x27_1 = var_68_1
                    
                    if (x24_1 == 0xffffffff)
                        goto label_c545b4
                    
                    goto label_c54600
                
                x27_1 = var_68_1
                
                if (x24_1 != 0)
                label_c54600:
                    
                    if (x25_4 - x21 s>= x20 - x25_4)
                        std::__ndk1::__sort<ItemSort&, HandleItem*>(x25_4 + 4, x20, arg3)
                        x20 = x25_4
                        break
                    
                    std::__ndk1::__sort<ItemSort&, HandleItem*>(x21, x25_4, arg3)
                    x23_1 = x25_4 + 4
                    continue
                else
                label_c545b4:
                    int32_t x0_19 =
                        std::__ndk1::__insertion_sort_incomplete<ItemSort&, HandleItem*>(x21, 
                        x25_4, arg3)
                    x23_1 = x25_4 + 4
                    
                    if ((std::__ndk1::__insertion_sort_incomplete<ItemSort&, HandleItem*>(x23_1, 
                            x20, arg3).d & 1) != 0)
                        x20 = x25_4
                        
                        if ((x0_19 & 1) == 0)
                            break
                    else
                        if ((x0_19 & 1) == 0)
                            goto label_c54600
                        
                        continue
        
        return 
