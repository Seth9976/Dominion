// 函数: _Z15CardsetsDisposev
// 地址: 0x9a99bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gCardset + 8))
void* result = *gCardset

if (x8.d != 0)
    void* i = result
    
    do
        if (zx.d(*(i + 0x156a)) != 0)
            while (i != 0xffffffff)
                for (int64_t k = 0; k != 0x258; k += 4)
                    void* x0 = i + k
                    
                    if (*x0 != 0)
                        UI2Free(x0)
                
                uint32_t x11_2 = zx.d(*(i + 0x1568))
                *(i + 0x1568) = *(gCardset + 0x10)
                result = *gCardset
                x8 = zx.q(*(gCardset + 8))
                i += 0x1570
                int32_t x10_2 = *(gCardset + 0x14) - 1
                *(gCardset + 0x10) = x11_2
                *(gCardset + 0x14) = x10_2
                int64_t x9_3 = result + x8 * 0x1570
                
                if (x9_3 u<= i)
                    break
                
                while (zx.d(*(i + 0x156a)) == 0)
                    i += 0x1570
                    
                    if (i u>= x9_3)
                        goto label_9a9a90
            
            break
        
        i += 0x1570
    while (i u< result + x8 * 0x1570)

label_9a9a90:

if (result != 0)
    if (x8.d != 0)
        void* x8_2 = result + mulu.dp.d(x8.d, 0x1570)
        void* result_1 = result
        
        while (true)
            int32_t x11_5 = *(result_1 + 0x1568)
            
            if (x11_5 u>> 0x10 != 0)
                *(result_1 + 0x1568) = *(gCardset + 0x10)
                result_1 += 0x1570
                int32_t x11_4 = *(gCardset + 0x14) - 1
                *(gCardset + 0x10) = x11_5 & 0xffff
                *(gCardset + 0x14) = x11_4
                
                if (x8_2 u<= result_1)
                    break
            else
                result_1 += 0x1570
                
                if (result_1 u>= x8_2)
                    break
    
    *(gCardset + 8) = 0
    *(gCardset + 0x10) = 0
    result = XFree(result)
    *(gCardset + 0x20) = 0
    *(gCardset + 8) = 0
    *(gCardset + 0x10) = 0
    *gCardset = 0

return result
