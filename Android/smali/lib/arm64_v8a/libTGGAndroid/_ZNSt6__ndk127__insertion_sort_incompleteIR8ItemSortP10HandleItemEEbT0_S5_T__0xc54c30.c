// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIR8ItemSortP10HandleItemEEbT0_S5_T_
// 地址: 0xc54c30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 2
char x8_2

if (x8_1 u> 5)
    HandleItem* x22_2 = arg1 + 8
    int32_t x9_2 = std::__ndk1::__sort3<ItemSort&, HandleItem*>(arg1, arg1 + 4, x22_2, arg3)
    void* __offset(HandleItem, 0x4) x8_5 = arg1 + 0xc
    char x8_12
    
    if (x8_5 == arg2)
    label_c54e1c:
        x8_12 = 1
    else
        int32_t x25_1 = 0
        int64_t x26_1 = 8
        
        while (true)
            int32_t x23_2 = *x22_2
            int32_t x24_1 = *x8_5
            x22_2 = x8_5
            int32_t x0_4
            x0_4, x9_2 = (*gPile)(zx.q(x24_1), zx.q(x23_2), zx.q(*arg3))
            
            if ((x0_4 & 0x80000000) == 0 && (x24_1 s< x23_2 || x0_4 != 0))
                int32_t x23_3 = *x22_2
                int64_t x8_8 = x26_1
                int64_t x28_1
                
                while (true)
                    x28_1 = x8_8
                    void* x8_9 = arg1 + x8_8
                    x9_2 = *x8_9
                    *(x8_9 + 4) = x9_2
                    
                    if (x28_1 == 0)
                        x25_1 += 1
                        *arg1 = x23_3
                        
                        if (x25_1 == 8)
                            goto label_c54db8
                        
                        goto label_c54d14
                    
                    int32_t x24_2 = *(x8_9 - 4)
                    int32_t x0_6
                    x0_6, x9_2 = (*gPile)(zx.q(x23_3), zx.q(x24_2), zx.q(*arg3))
                    
                    if ((x0_6 & 0x80000000) != 0)
                        break
                    
                    x8_8 = x28_1 - 4
                    
                    if (x23_3 s>= x24_2)
                        if (x0_6 == 0)
                            break
                
                x25_1 += 1
                *(arg1 + x28_1) = x23_3
                
                if (x25_1 == 8)
                label_c54db8:
                    x8_12 = 0
                    x9_2 = x22_2 + 4 == arg2 ? 1 : 0
                    break
            
        label_c54d14:
            x8_5 = x22_2 + 4
            x26_1 += 4
            
            if (x8_5 == arg2)
                goto label_c54e1c
    
    x8_2 = x8_12 | x9_2.b
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            int32_t x22_1 = *(arg2 - 4)
            int32_t x23_1 = *arg1
            int32_t x0_1 = (*gPile)(zx.q(x22_1), zx.q(x23_1), zx.q(*arg3))
            
            if ((x0_1 & 0x80000000) == 0 && (x22_1 s< x23_1 || x0_1 != 0))
                int32_t x9_1 = *arg1
                *arg1 = *(arg2 - 4)
                *(arg2 - 4) = x9_1
            
            x8_2 = 1
        case 3
            std::__ndk1::__sort3<ItemSort&, HandleItem*>(arg1, arg1 + 4, arg2 - 4, arg3)
            x8_2 = 1
        case 4
            std::__ndk1::__sort4<ItemSort&, HandleItem*>(arg1, arg1 + 4, arg1 + 8, arg2 - 4, arg3)
            x8_2 = 1
        case 5
            sub_c54ac8(arg1, arg1 + 4, arg1 + 8, arg1 + 0xc, arg2 - 4, arg3)
            x8_2 = 1

return x8_2 & 1
