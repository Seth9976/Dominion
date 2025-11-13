// 函数: _Z20MaterialCacheDisposev
// 地址: 0xf7f854
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gMaterialCache + 8))
void* result = *gMaterialCache
uint64_t x9

if (x8.d == 0)
    x9 = 0
else
    x9 = x8
    void* x21_1 = result
label_f7f87c:
    void* i = x21_1
    x21_1 += 0x1a38
    
    do
        if (zx.d(*(x21_1 - 6)) != 0)
            if (zx.d(*(x21_1 - 0x10)) != 0)
                MaterialStateUnbind(i + 8)
                *(x21_1 - 0x10) = 0
                result = *gMaterialCache
                x8 = zx.q(*(gMaterialCache + 8))
            
            x9 = zx.q(x8.d)
            
            if (result + mulu.dp.d(x8.d, 0x1a38) u> x21_1)
                goto label_f7f87c
            
            goto label_f7f8dc
        
        i += 0x1a38
        x21_1 += 0x1a38
    while (i u< result + x9 * 0x1a38)

label_f7f8dc:

if (result != 0)
    if (x9 s>= 1)
        int64_t x8_1 = result + x9 * 0x1a38
        void* result_1 = result
        
        while (true)
            int32_t x11_4 = *(result_1 + 0x1a30)
            
            if (x11_4 u>> 0x10 != 0)
                *(result_1 + 0x1a30) = *(gMaterialCache + 0x10)
                result_1 += 0x1a38
                int32_t x11_3 = *(gMaterialCache + 0x14) - 1
                *(gMaterialCache + 0x10) = x11_4 & 0xffff
                *(gMaterialCache + 0x14) = x11_3
                
                if (x8_1 u<= result_1)
                    break
            else
                result_1 += 0x1a38
                
                if (result_1 u>= x8_1)
                    break
    
    *(gMaterialCache + 8) = 0
    *(gMaterialCache + 0x10) = 0
    result = XFree(result)
    *(gMaterialCache + 0x20) = 0
    *(gMaterialCache + 8) = 0
    *(gMaterialCache + 0x10) = 0
    *gMaterialCache = 0

return result
