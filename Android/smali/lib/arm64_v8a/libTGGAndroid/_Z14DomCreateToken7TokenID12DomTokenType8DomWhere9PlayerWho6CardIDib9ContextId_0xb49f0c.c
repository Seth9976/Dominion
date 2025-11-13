// 函数: _Z14DomCreateToken7TokenID12DomTokenType8DomWhere9PlayerWho6CardIDib9ContextId
// 地址: 0xb49f0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_124 = arg4
int32_t x23 = arg5
void* result_1 = *(gDomClient + 0x205e0)
uint64_t x8_1 = zx.q(*(gDomClient + 0x205e8))
int32_t x24 = arg3
void* result

if (arg3 == 0x474)
    if (x8_1.d == 0)
        goto label_b4a0ec
    
    int64_t x10_1 = result_1 + x8_1 * 0x21d8
    result = result_1
    
    while (zx.d(*(result + 0x21d2)) == 0)
        result += 0x21d8
        
        if (result u>= x10_1)
            goto label_b4a0ec
    
    if (result == 0xffffffff)
        goto label_b4a0ec
    
    while (*(result + 0x2c) != 4 || *(result + 0x1b4) != arg2 || *(result + 0x1bc) != 0x474
            || *(result + 0x1c0) != x23 || *(result + 0x1c4) != var_124
            || *(result + 0x1c8) != arg8)
        if (result == 0)
            result = result_1
        else
            result += 0x21d8
        
        if (result u>= x10_1)
            goto label_b4a0ec
        
        while (zx.d(*(result + 0x21d2)) == 0)
            result += 0x21d8
            
            if (result u>= x10_1)
                goto label_b4a0ec
        
        if (result == 0xffffffff)
            goto label_b4a0ec
    
    goto label_b4a464

if (x8_1.d == 0)
label_b4a0ec:
    uint64_t fp_1 = zx.q(*(gDomClient + 0x205f0))
    int32_t x9
    uint64_t x11_1
    int64_t x28_1
    
    if (fp_1.d != x8_1.d)
        x28_1 = *(gDomClient + 0x205e0)
        x11_1 = fp_1
        x9 = *(x28_1 + fp_1 * 0x21d8 + 0x21d0)
    else
        x28_1 = *(gDomClient + 0x205e0)
        x9 = x8_1.d + 1
        *(gDomClient + 0x205e8) = x9
        x11_1 = zx.q(x8_1.d)
    
    result = x28_1 + x11_1 * 0x21d8
    *(gDomClient + 0x205f0) = x9
    int128_t v2_1
    int128_t v3_1
    v2_1, v3_1 = memset(result, 0, 0x21d0)
    *(result + 0x21d0) = fp_1.d | *(gDomClient + 0x205f8) << 0x10
    int32_t x9_3 = *(gDomClient + 0x205f8)
    int32_t x9_4
    
    if (x9_3 == 0xffff)
        x9_4 = 1
    else
        x9_4 = x9_3 + 1
    
    *(gDomClient + 0x205f8) = x9_4
    *(gDomClient + 0x205f4) += 1
    *(result + 0x2c) = 4
    *(result + 0x1b4) = arg2
    *(result + 0x1b8) = 0
    *(result + 0x1c4) = var_124
    *(result + 0x1bc) = x24
    *(result + 0x1c0) = x23
    *(result + 0x1d8) = arg6
    *(result + 0x1b0) = arg1
    *(result + 0x1d4) = 0
    *(result + 0x1c8) = arg8
    uint64_t x11_2
    int32_t x21_1
    int32_t x25_3
    int32_t x26_2
    
    if (x24 == 0x3f1)
        x26_2 = var_124
        int32_t x0_3
        x0_3, v2_1, v3_1 = PlayerAreaAdd(result, zx.q(x26_2), 0xffffffff)
        x11_2 = x11_1
        x25_3 = x0_3
        x21_1 = 0x13
        x23 = 0x3f1
    else if (x24 != 6)
        void* i_3 = *(gDomClient + 0x205e0)
        uint64_t x9_9 = zx.q(*(gDomClient + 0x205e8))
        
        if (x24 != 0x474)
            int64_t x9_11
            void* i_4
            
            if (x9_9.d != 0)
                x9_11 = i_3 + x9_9 * 0x21d8
                i_4 = i_3
                
                while (zx.d(*(i_4 + 0x21d2)) == 0)
                    i_4 += 0x21d8
                    
                    if (i_4 u>= x9_11)
                        goto label_b4a424
            
            int32_t i
            void* x14_23
            
            if (x9_9.d != 0 && i_4 != 0xffffffff)
                while (true)
                    if (*(i_4 + 0x2c) == 3 && *(i_4 + 0x58) == 0xffffffff && *(i_4 + 0x5c) == x24
                            && *(i_4 + 0x60) == 0)
                        *(result + 0x1b8) = *(i_4 + 0x21d0)
                        x14_23 = i_4 + 0x74
                        i = *x14_23
                        
                        if (i != 0)
                            break
                        
                        goto label_b4a484
                    
                    if (i_4 == 0)
                        i_4 = i_3
                    else
                        i_4 += 0x21d8
                    
                    if (i_4 u>= x9_11)
                        goto label_b4a424
                    
                    while (zx.d(*(i_4 + 0x21d2)) == 0)
                        i_4 += 0x21d8
                        
                        if (i_4 u>= x9_11)
                            goto label_b4a424
                    
                    if (i_4 == 0xffffffff)
                        goto label_b4a424
                
                goto label_b4a43c
            
        label_b4a424:
            *(result + 0x1b8) = *0x21d0
            x14_23 = 0x74
            i = *0x74
            
            if (i == 0)
            label_b4a484:
                x25_3 = 0
            else
            label_b4a43c:
                x25_3 = 0
                void* x12_2
                
                do
                    x12_2 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
                    i = *(x12_2 + 0x213c)
                    x25_3 += 1
                while (i != 0)
                
                x14_23 = x12_2 + 0x213c
            
            x11_2 = x11_1
            x21_1 = 7
            x26_2 = -1
            x23 = x24
            *x14_23 = *(result + 0x21d0)
            *(x28_1 + x11_2 * 0x21d8 + 0x2140) = x25_3
        else
            int64_t x9_10
            void* i_1
            
            if (x9_9.d != 0)
                x9_10 = i_3 + x9_9 * 0x21d8
                i_1 = i_3
                
                while (zx.d(*(i_1 + 0x21d2)) == 0)
                    i_1 += 0x21d8
                    
                    if (i_1 u>= x9_10)
                        goto label_b4a384
            
            int32_t x11_3
            
            if (x9_9.d == 0 || i_1 == 0xffffffff)
            label_b4a384:
                x11_3 = 0
            else
                x11_3 = 0
                
                do
                    if (*(i_1 + 0x2c) == 4 && *(i_1 + 0x1bc) == 0x474 && *(i_1 + 0x1c0) == x23)
                        x11_3 += 1
                    
                    if (i_1 == 0)
                        i_1 = i_3
                    else
                        i_1 += 0x21d8
                    
                    if (i_1 u>= x9_10)
                        break
                    
                    while (zx.d(*(i_1 + 0x21d2)) == 0)
                        i_1 += 0x21d8
                        
                        if (i_1 u>= x9_10)
                            goto label_b4a388
                while (i_1 != 0xffffffff)
            
        label_b4a388:
            x25_3 = x11_3 - 1
            x26_2 = var_124
            x11_2 = x11_1
            x21_1 = 9
    else
        void* x0_1
        x0_1, v2_1, v3_1 = BoardAreaPile(0x603)
        *(result + 0x1b8) = *(x0_1 + 0x21d0)
        void* x9_6 = x0_1 + 0x74
        int32_t i_2 = *x9_6
        
        if (i_2 == 0)
            x25_3 = 0
        else
            x25_3 = 0
            void* x12_1
            
            do
                x12_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i_2 & 0xffff, 0x21d8)
                i_2 = *(x12_1 + 0x213c)
                x25_3 += 1
            while (i_2 != 0)
            
            x9_6 = x12_1 + 0x213c
        
        x11_2 = x11_1
        x21_1 = 7
        *x9_6 = *(result + 0x21d0)
        *(x28_1 + x11_2 * 0x21d8 + 0x2140) = x25_3
        x23 = *(x0_1 + 0x5c)
        x26_2 = -1
    
    int128_t var_120
    __builtin_memset(&var_120, 0, 0x5c)
    
    if ((arg7.d & 1) == 0)
        v2_1, v3_1 = DomSoundToken(zx.q(var_124), zx.q(*(result + 0x1b4)), arg6)
        x11_2 = x11_1
    
    void* x8_14 = x28_1 + x11_2 * 0x21d8
    int128_t var_c0
    __builtin_memset(&var_c0, 0, 0x5c)
    *(x8_14 + 0x260) = 1
    *(x8_14 + 0x268) = x21_1
    *(x8_14 + 0x26c) = x23
    *(x8_14 + 0x270) = x26_2
    *(x8_14 + 0x274) = x25_3
    *(x8_14 + 0x278) = 0
    *(x8_14 + 0x280) = 0
    *(x8_14 + 0x294) = zx.o(0)
    *(x8_14 + 0x284) = zx.o(0)
    __builtin_memset(x8_14 + 0x2d0, 0, 0x18)
    *(x8_14 + 0x2c4) = zx.o(0)
    *(x8_14 + 0x2b4) = zx.o(0)
    *(x8_14 + 0x2a4) = zx.o(0)
    *(x8_14 + 0x308) = 1
    *(x8_14 + 0x310) = x21_1
    *(x8_14 + 0x314) = x23
    *(x8_14 + 0x318) = x26_2
    *(x8_14 + 0x31c) = x25_3
    *(x8_14 + 0x320) = 0
    *(x8_14 + 0x328) = 0
    int128_t v1 = var_c0
    int128_t var_b0
    *(x8_14 + 0x33c) = var_b0
    *(x8_14 + 0x32c) = v1
    int128_t var_80
    *(x8_14 + 0x378) = var_80
    *(x8_14 + 0x36c) = var_80
    int128_t var_90
    *(x8_14 + 0x35c) = var_90
    int128_t var_a0
    *(x8_14 + 0x34c) = var_a0
    *(x8_14 + 0x388) = 0
    *(x8_14 + 0x3b0) = 1
    *(x8_14 + 0x3b8) = x21_1
    *(x8_14 + 0x3bc) = x23
    *(x8_14 + 0x3c0) = x26_2
    *(x8_14 + 0x3c4) = x25_3
    *(x8_14 + 0x3c8) = 0
    *(x8_14 + 0x3d0) = 0
    int128_t v0 = var_c0
    *(x8_14 + 0x3e4) = var_b0
    *(x8_14 + 0x3d4) = v0
    *(x8_14 + 0x404) = var_90
    *(x8_14 + 0x420) = var_80
    *(x8_14 + 0x414) = var_80
    *(x8_14 + 0x3f4) = var_a0
    *(x8_14 + 0x430) = 0
    *(x8_14 + 0x1f78) = 0
else
    int64_t x10_2 = result_1 + x8_1 * 0x21d8
    result = result_1
    
    while (zx.d(*(result + 0x21d2)) == 0)
        result += 0x21d8
        
        if (result u>= x10_2)
            goto label_b4a0ec
    
    if (result == 0xffffffff)
        goto label_b4a0ec
    
    while (*(result + 0x2c) != 4 || *(result + 0x1b4) != arg2 || *(result + 0x1bc) != x24
            || *(result + 0x1c0) != x23 || *(result + 0x1c4) != var_124
            || *(result + 0x1c8) != arg8)
        if (result == 0)
            result = result_1
        else
            result += 0x21d8
        
        if (result u>= x10_2)
            goto label_b4a0ec
        
        while (zx.d(*(result + 0x21d2)) == 0)
            result += 0x21d8
            
            if (result u>= x10_2)
                goto label_b4a0ec
        
        if (result == 0xffffffff)
            goto label_b4a0ec
    
label_b4a464:
    
    if (result == 0)
        goto label_b4a0ec
    
    *(result + 0x1b0) = arg1

return result
