// 函数: _Z16NetLocTCPReceiveR6NetLoc
// 地址: 0xf85fb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

NetBufferMakeRoom(arg1 + 0x50, 1)
int64_t* result = *(arg1 + 0x58)
void* x8 = *result
int32_t x9 = *(x8 + 0xfde8)
int32_t* x25_1 = x8 + 0xfdec
int32_t x10 = *x25_1

if (*(arg1 + 0x24) - 3 u>= 2)
    int32_t x21_1 = 0xfde8 - (x9 + x10)
    
    while (true)
        int64_t* x0_2 = *gNetworkInterface
        int32_t x0_3 =
            (*(*x0_2 + 0x60))(x0_2, zx.q(*(arg1 + 0x20)), x8 + sx.q(x9) + sx.q(x10), zx.q(x21_1))
        
        if (x0_3 != 0)
            if (x0_3 == 0xffffffff)
                goto label_f86160
            
            *x25_1 += x0_3
            
            if (x0_3 s>= x21_1)
                uint64_t x8_13 = *gNetwork
                int32_t x9_2 = *(x8_13 + 0x78)
                int64_t x21_2
                
                if (x9_2 == 0)
                    x21_2 = XMalloc(0xfe20)
                else
                    void* x0_4 = *(x8_13 + 0x70)
                    void* x10_1 = *(x0_4 + 0x10)
                    *(x8_13 + 0x70) = x10_1
                    
                    if (x10_1 == 0)
                        *(x8_13 + 0x68) = 0
                    else
                        *(x10_1 + 8) = 0
                        x9_2 = *(x8_13 + 0x78)
                    
                    x21_2 = *x0_4
                    *(x8_13 + 0x78) = x9_2 - 1
                    XPooledFree(x0_4, 0x18)
                
                __builtin_memset(x21_2 + 0xfde8, 0, 0x14)
                result = XPooledCalloc(0x18)
                *result = x21_2
                result[1] = 0
                result[2] = *(arg1 + 0x58)
                void* x8_6 = *(arg1 + 0x58)
                void* __offset(NetLoc, 0x50) x8_7
                
                if (x8_6 == 0)
                    x8_7 = arg1 + 0x50
                else
                    x8_7 = x8_6 + 8
                
                *x8_7 = result
                int32_t x8_8 = *(arg1 + 0x60)
                *(arg1 + 0x58) = result
                *(arg1 + 0x60) = x8_8 + 1
                x8 = *result
                x9 = *(x8 + 0xfde8)
                x25_1 = x8 + 0xfdec
                x10 = *x25_1
                x21_1 = 0xfde8 - (x9 + x10)
                
                if (*(arg1 + 0x24) - 3 u< 2)
                    break
                
                continue
        
        result = *(arg1 + 0x58)
        
        if (*(*result + 0xfdec) != 0)
            goto label_f8602c
        
        goto label_f86178

if (*(arg1 + 0x48) == 0)
label_f86160:
    return NetConnectionClosed(arg1) __tailcall

if (*(*result + 0xfdec) == 0)
label_f86178:
    void* x8_17 = result[2]
    *(arg1 + 0x58) = x8_17
    void* __offset(NetLoc, 0x50) x8_18
    
    if (x8_17 == 0)
        x8_18 = arg1 + 0x50
    else
        x8_18 = x8_17 + 8
    
    *x8_18 = 0
    int64_t x20_1 = *result
    *(arg1 + 0x60) -= 1
    XPooledFree(result, 0x18)
    void* x19_1 = *gNetwork
    result = XPooledCalloc(0x18)
    *result = x20_1
    result[1] = 0
    result[2] = *(x19_1 + 0x70)
    void* x8_22 = *(x19_1 + 0x70)
    void* x8_23
    
    if (x8_22 == 0)
        x8_23 = x19_1 + 0x68
    else
        x8_23 = x8_22 + 8
    
    *x8_23 = result
    int32_t x8_24 = *(x19_1 + 0x78)
    *(x19_1 + 0x70) = result
    *(x19_1 + 0x78) = x8_24 + 1

label_f8602c:
return result
