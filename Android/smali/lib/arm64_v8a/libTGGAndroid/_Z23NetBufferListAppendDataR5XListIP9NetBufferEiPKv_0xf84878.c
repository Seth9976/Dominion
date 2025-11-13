// 函数: _Z23NetBufferListAppendDataR5XListIP9NetBufferEiPKv
// 地址: 0xf84878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
void const* x20 = arg3
NetBufferMakeRoom(arg1, 1)
void* x8_1 = **(arg1 + 8)
int64_t x9 = sx.q(*(x8_1 + 0xfde8))
int32_t* x25_1 = x8_1 + 0xfdec
int64_t x10 = sx.q(*x25_1)
int32_t x26 = 0xfde8 - (x9.d + x10.d)
void* x0 = x8_1 + x9 + x10

if (x26 s< x19)
    do
        if (x26 s>= 1)
            size_t x22_2 = zx.q(x26)
            memcpy(x0, x20, x22_2)
            x20 += x22_2
            x19 -= x26
            *x25_1 += x26
        
        void* x8_13 = *gNetwork
        int32_t x9_3 = *(x8_13 + 0x78)
        void* x22_1
        
        if (x9_3 == 0)
            x22_1 = XMalloc(0xfe20)
        else
            void** x0_3 = *(x8_13 + 0x70)
            void* x10_2 = x0_3[2]
            *(x8_13 + 0x70) = x10_2
            
            if (x10_2 == 0)
                *(x8_13 + 0x68) = 0
            else
                *(x10_2 + 8) = 0
                x9_3 = *(x8_13 + 0x78)
            
            x22_1 = *x0_3
            *(x8_13 + 0x78) = x9_3 - 1
            XPooledFree(x0_3, 0x18)
        
        __builtin_memset(x22_1 + 0xfde8, 0, 0x14)
        void** x0_2 = XPooledCalloc(0x18)
        *x0_2 = x22_1
        x0_2[1] = 0
        x0_2[2] = *(arg1 + 8)
        void* x8_5 = *(arg1 + 8)
        void*** x8_6
        
        if (x8_5 == 0)
            x8_6 = arg1
        else
            x8_6 = x8_5 + 8
        
        *x8_6 = x0_2
        int32_t x8_7 = *(arg1 + 0x10)
        *(arg1 + 8) = x0_2
        *(arg1 + 0x10) = x8_7 + 1
        void* x8_9 = *x0_2
        int64_t x9_2 = sx.q(*(x8_9 + 0xfde8))
        x25_1 = x8_9 + 0xfdec
        int64_t x10_1 = sx.q(*x25_1)
        x26 = 0xfde8 - (x9_2.d + x10_1.d)
        x0 = x8_9 + x9_2 + x10_1
    while (x19 s> x26)

int64_t result = memcpy(x0, x20, sx.q(x19))
*x25_1 += x19
return result
