// 函数: _Z18DomCreateTokenIcon12DomTokenIcon11DomCardEnum9PlayerWhob
// 地址: 0xb10094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3
uint64_t x24 = zx.q(*(gDomClient + 0x205e8))
void* result_1 = *(gDomClient + 0x205e0)
int32_t x21 = arg2
int32_t x22 = arg1
void* result

if (x24.d != 0)
    result = result_1
    
    while (zx.d(*(result + 0x21d2)) == 0)
        result += 0x21d8
        
        if (result u>= result_1 + x24 * 0x21d8)
            goto label_b10184

if (x24.d == 0 || result == 0xffffffff)
label_b10184:
    uint64_t x26_1 = zx.q(*(gDomClient + 0x205f0))
    int32_t x8_1
    
    if (x26_1.d != x24.d)
        x8_1 = *(result_1 + x26_1 * 0x21d8 + 0x21d0)
        x24 = x26_1
    else
        x8_1 = x24.d + 1
        *(gDomClient + 0x205e8) = x8_1
    
    result = result_1 + x24 * 0x21d8
    *(gDomClient + 0x205f0) = x8_1
    memset(result, 0, 0x21d0)
    *(result + 0x21d0) = x26_1.d | *(gDomClient + 0x205f8) << 0x10
    int32_t x9_4 = *(gDomClient + 0x205f8)
    int32_t x9_5
    
    if (x9_4 == 0xffff)
        x9_5 = 1
    else
        x9_5 = x9_4 + 1
    
    *(gDomClient + 0x205f8) = x9_5
    *(gDomClient + 0x205f4) += 1
    *(result + 0x2c) = 6
    *(result + 0x1e0) = x22
    *(result + 0x1e4) = x20
    *(result + 0x1e8) = 1
    *(result + 0x1ec) = x21
    
    if (x21 == 0)
        int32_t x0_4 = PlayerAreaAdd(result, zx.q(x20), 0xffffffff)
        void* x8_5 = result_1 + x24 * 0x21d8
        *(x8_5 + 0x260) = 1
        *(x8_5 + 0x270) = x20
        *(x8_5 + 0x274) = x0_4
        *(x8_5 + 0x268) = 0x3f100000013
        __builtin_memset(x8_5 + 0x278, 0, 0x70)
        *(x8_5 + 0x308) = 1
        *(x8_5 + 0x3b0) = 1
        *(x8_5 + 0x318) = x20
        *(x8_5 + 0x3c0) = x20
        *(x8_5 + 0x31c) = x0_4
        *(x8_5 + 0x3c4) = x0_4
        *(x8_5 + 0x310) = 0x3f100000013
        __builtin_memset(x8_5 + 0x320, 0, 0x70)
        *(x8_5 + 0x3b8) = 0x3f100000013
        *(x8_5 + 0x1f78) = 0
        __builtin_memset(x8_5 + 0x3c8, 0, 0x70)
    else
        int32_t x0_2 = BoardPileWhere(gDomClient + 0x20728, zx.q(x21))
        
        if (x0_2 == 0)
            return nullptr
        
        uint64_t x9_8 = zx.q(*(gDomClient + 0x205e8))
        void* x8_4 = *(gDomClient + 0x205e0)
        int64_t x9_9
        void* x10_3
        
        if (x9_8.d != 0)
            x9_9 = x8_4 + x9_8 * 0x21d8
            x10_3 = x8_4
            
            while (zx.d(*(x10_3 + 0x21d2)) == 0)
                x10_3 += 0x21d8
                
                if (x10_3 u>= x9_9)
                    goto label_b103f0
        
        void* x10_9
        void* x11_9
        int32_t i
        
        if (x9_8.d != 0 && x10_3 != 0xffffffff)
            while (true)
                if (*(x10_3 + 0x2c) == 3 && *(x10_3 + 0x58) == 0xffffffff && *(x10_3 + 0x5c) == x0_2
                        && *(x10_3 + 0x60) == 0)
                    x11_9 = x10_3
                    x10_9 = x11_9 + 0x74
                    i = *x10_9
                    
                    if (i != 0)
                        break
                    
                    goto label_b10448
                
                if (x10_3 == 0)
                    x10_3 = x8_4
                else
                    x10_3 += 0x21d8
                
                if (x10_3 u>= x9_9)
                    goto label_b103f0
                
                while (zx.d(*(x10_3 + 0x21d2)) == 0)
                    x10_3 += 0x21d8
                    
                    if (x10_3 u>= x9_9)
                        goto label_b103f0
                
                x11_9 = nullptr
                
                if (x10_3 == 0xffffffff)
                    goto label_b103f8
            
            goto label_b10400
        
    label_b103f0:
        x11_9 = nullptr
    label_b103f8:
        x10_9 = 0x74
        i = *0x74
        int32_t x9_15
        
        if (i == 0)
        label_b10448:
            x9_15 = 0
        else
        label_b10400:
            x9_15 = 0
            void* x14_1
            
            do
                x14_1 = x8_4 + mulu.dp.d(i & 0xffff, 0x21d8)
                i = *(x14_1 + 0x213c)
                x9_15 += 1
            while (i != 0)
            
            x10_9 = x14_1 + 0x213c
        
        void* x12_9 = result_1 + x24 * 0x21d8
        *x10_9 = *(result + 0x21d0)
        *(x12_9 + 0x2140) = x9_15
        int32_t x11_10 = *(x11_9 + 0x5c)
        *(x12_9 + 0x260) = 1
        *(x12_9 + 0x268) = 7
        *(x12_9 + 0x270) = 0xffffffff
        *(x12_9 + 0x274) = x9_15
        *(x12_9 + 0x26c) = x11_10
        *(x12_9 + 0x278) = zx.o(0)
        *(x12_9 + 0x288) = zx.o(0)
        *(x12_9 + 0x298) = zx.o(0)
        *(x12_9 + 0x2a8) = zx.o(0)
        *(x12_9 + 0x2b8) = zx.o(0)
        *(x12_9 + 0x2c8) = zx.o(0)
        *(x12_9 + 0x2d8) = zx.o(0)
        *(x12_9 + 0x308) = 1
        *(x12_9 + 0x3b0) = 1
        *(x12_9 + 0x310) = 7
        *(x12_9 + 0x3b8) = 7
        *(x12_9 + 0x314) = x11_10
        *(x12_9 + 0x3bc) = x11_10
        *(x12_9 + 0x318) = 0xffffffff
        *(x12_9 + 0x3c0) = 0xffffffff
        *(x12_9 + 0x31c) = x9_15
        *(x12_9 + 0x3c4) = x9_15
        __builtin_memset(x12_9 + 0x320, 0, 0x70)
        *(x12_9 + 0x1f78) = 0
        __builtin_memset(x12_9 + 0x3c8, 0, 0x70)
else
    int64_t x10_1 = result_1 + x24 * 0x21d8
    
    while (*(result + 0x2c) != 6 || *(result + 0x1e0) != x22 || *(result + 0x1e4) != x20
            || *(result + 0x1ec) != x21)
        if (result == 0)
            result = result_1
        else
            result += 0x21d8
        
        if (result u>= x10_1)
            goto label_b10184
        
        while (zx.d(*(result + 0x21d2)) == 0)
            result += 0x21d8
            
            if (result u>= x10_1)
                goto label_b10184
        
        if (result == 0xffffffff)
            goto label_b10184
    
    *(result + 0x1e8) += 1

return result
