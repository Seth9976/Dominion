// 函数: _Z16PileUpdateStacks10HandlePile9SortStyle13StackingStyle
// 地址: 0xc54024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_50 = v8
int32_t x21 = arg2
int32_t* result = (*(gPile + 8))()
int32_t i_1 = result[1]
int32_t* result_1 = result
int32_t var_1050[0x400]
int64_t x23

if (i_1 s< 1)
    x23 = 0
    
    if (x21 != 0)
    label_c540a4:
        
        if (x21 != 1)
            int32_t var_48 = x21
            result = std::__ndk1::__sort<ItemSort&, HandleItem*>(&var_1050, &var_1050[zx.q(x23.d)], 
                &var_48)
        else if (i_1 s>= 2)
            int64_t i = 0
            int32_t x10_1 = -1
            int32_t i_3
            
            do
                int64_t x8_3 = zx.q(i_1 + x10_1) << 0x20 s>> 0x1e
                int32_t x14_1 = var_1050[i]
                i += 1
                x10_1 -= 1
                var_1050[i] = *(&var_1050 + x8_3)
                *(&var_1050 + x8_3) = x14_1
                i_1 = result_1[1]
                
                if (i_1 s< 0)
                    i_3 = i_1 + 1
                else
                    i_3 = i_1
            while (i s< sx.q(i_3 s>> 1))
else
    x23 = 0
    int32_t* result_2 = result_1
    
    do
        int64_t x8_1 = *(gPile + 0x10)
        var_1050[x23] = *result_2
        x23 += 1
        result = x8_1()
        i_1 = result_1[1]
        result_2 = &result[1]
    while (x23.d s< i_1)
    
    if (x21 != 0)
        goto label_c540a4

result_1[3] = 0

if (x23.d != 0)
    uint64_t i_4 = zx.q(x23.d)
    
    if (arg3 == 0)
        int32_t (* x21_2)[0x400] = &var_1050
        uint64_t i_2
        
        do
            int32_t x0_9 = result_1[2]
            int32_t x20_2 = *x21_2
            
            if (x0_9 != 0)
                (*gPile)(x0_9, zx.q(x20_2), 0)
            
            result = (*(gPile + 0x10))(zx.q(x20_2))
            *(result + 8) = 0x100000000
            i_2 = i_4
            i_4 -= 1
            x21_2 = &(*x21_2)[1]
            result[5] = result_1[2]
            result_1[2] = x20_2
            result[4] = 0
            result_1[3] += 1
        while (i_2 != 1)
    else
        int32_t (* x24_1)[0x400] = &var_1050
        
        while (true)
            int32_t x0_3 = result_1[2]
            int32_t x20_1 = *x24_1
            
            if (x0_3 != 0 && (*gPile)(x0_3, zx.q(x20_1), 0) == 0)
                void* x0_6 = (*(gPile + 0x10))(zx.q(result_1[2]))
                result = (*(gPile + 0x10))(zx.q(x20_1))
                result[2] = result_1[2]
                result[3] = *(x0_6 + 0xc) + 1
                int32_t x8_14 = *(x0_6 + 0x14)
                result[4] = 0
                result[5] = x8_14
                result_1[2] = x20_1
                uint64_t i_6 = i_4
                i_4 -= 1
                x24_1 = &(*x24_1)[1]
                
                if (i_6 == 1)
                    break
                
                continue
            
            result = (*(gPile + 0x10))(zx.q(x20_1))
            *(result + 8) = 0x100000000
            result[5] = result_1[2]
            result_1[2] = x20_1
            result[4] = 0
            result_1[3] += 1
            uint64_t i_5 = i_4
            i_4 -= 1
            x24_1 = &(*x24_1)[1]
            
            if (i_5 == 1)
                break

return result
