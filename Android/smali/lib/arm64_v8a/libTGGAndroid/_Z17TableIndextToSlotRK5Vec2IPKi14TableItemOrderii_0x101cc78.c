// 函数: _Z17TableIndextToSlotRK5Vec2IPKi14TableItemOrderii
// 地址: 0x101cc78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg1
int32_t x3 = arg5 + arg4
uint64_t x0
uint32_t x8_1

if (arg2 == 0)
    if (x9 == 0)
        return zx.q(*V2I0) | zx.q(*(V2I0 + 4)) << 0x20
    
    int32_t x10_1 = *(arg1 + 4)
    uint32_t x12_1 = x3 s/ x9
    
    if (x12_1 s< x10_1)
        x8_1 = x12_1
    else
        x8_1 = x10_1 - 1
    
    int32_t x11_3
    
    if (x12_1 s< x10_1)
        x11_3 = 0
    else
        x11_3 = (x12_1 - x10_1) * x9
    
    if (arg3.d u> 5)
    label_101cde0:
        pthread_kill(pthread_self(), 6)
        UI2* x0_21
        int32_t x1
        RectF* x2
        RectF* x3_1
        bool x4
        x0_21, x1, x2, x3_1, x4 = XNoReturn()
        return UI2TableTransform(x0_21, x1, x2, x3_1, x4) __tailcall
    
    x0 = zx.q(x11_3 + x3 s% x9)
    
    switch (arg3.d)
        case 1
            return zx.q(x0.d) | zx.q(x10_1 + not.d(x8_1)) << 0x20
        case 2
            x0 = zx.q(x3 s/ x10_1)
            x8_1 = x3 - x0.d * x10_1
            
            if (x0.d s>= x9)
                return zx.q(x9 - 1) | zx.q(x8_1 + (x0.d - x9) * x10_1) << 0x20
        case 3
            return zx.q(x9 + not.d(x0.d)) | zx.q(x8_1) << 0x20
        case 4
            return zx.q(x9 + not.d(x0.d)) | zx.q(x10_1 + not.d(x8_1)) << 0x20
        case 5
            return zx.q(x9 + not.d(x3 s/ x10_1)) | zx.q(x3 s% x10_1) << 0x20
else
    int32_t x10 = *(arg1 + 4)
    
    if (x3 s>= x10 * x9)
        if (arg3.d == 1)
            return zx.q(x3 - (x10 - 1) * x9)
        
        if (arg3.d == 0)
            return zx.q(x3 - (x10 - 1) * x9) | zx.q(x10 - 1) << 0x20
        
        goto label_101cde0
    
    x0 = TableIndextToSlot(arg1, nullptr, arg3, x3, 0)
    x8_1 = (x0 u>> 0x20).d

return zx.q(x0.d) | zx.q(x8_1) << 0x20
