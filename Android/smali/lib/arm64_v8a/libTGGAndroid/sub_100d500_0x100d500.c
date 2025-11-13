// 函数: sub_100d500
// 地址: 0x100d500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(arg1 + 0xc)
int64_t x11_1 = sx.q(arg1[1].d)

if (x11_1.d s< x10)
    void* x8_1 = *arg1
    uint64_t x9_1 = x11_1 + 1
    arg1[1].d = x9_1.d
    uint32_t x12_1 = zx.d(*(x8_1 + x11_1))
    
    if (zx.d(x12_1.b - 0x20) u<= 0xd6)
        return zx.q(x12_1 - 0x8b)
    
    if (zx.d(x12_1.b + 9) u<= 3)
        uint32_t x8_2
        
        if (x9_1.d s>= x10)
            x8_2 = 0
        else
            arg1[1].d = x11_1.d + 2
            x8_2 = zx.d(*(x8_1 + x9_1))
        
        return zx.q((x12_1 << 8) + x8_2 - 0xf694)
    
    if (zx.d(x12_1.b + 5) u<= 3)
        uint32_t x13_7 = 0
        
        if (x9_1.d s< x10)
            arg1[1].d = x11_1.d + 2
            x13_7 = zx.d(*(x8_1 + x9_1))
        
        return zx.q(neg.d(x12_1 << 8) - x13_7 + 0xfa94)
    
    uint32_t x11_5
    
    if (x12_1 == 0x1d)
        uint16_t x11_7
        
        if (x9_1.d s< x10)
            arg1[1].d = x11_1.d + 2
            uint32_t x12_3 = zx.d(*(x8_1 + x9_1))
            x9_1 = zx.q(x11_1.d + 2)
            x11_7 = (x12_3 << 8).w
            
            if (x9_1.d s< x10)
                goto label_100d684
            
            goto label_100d634
        
        x11_7 = 0
        uint16_t x12_4
        
        if (x9_1.d s>= x10)
        label_100d634:
            x12_4 = x11_7
            
            if (x9_1.d s>= x10)
            label_100d644:
                x11_5 = zx.d(x12_4) << 0x10
                
                if (x9_1.d s>= x10)
                    return zx.q(x11_5)
                
                arg1[1].d = x9_1.d + 1
                return zx.q(x11_5) | zx.q(*(x8_1 + sx.q(x9_1.d)))
        else
        label_100d684:
            arg1[1].d = x9_1.d + 1
            uint16_t x12_5 = zx.w(*(x8_1 + sx.q(x9_1.d)))
            x9_1 = zx.q(x9_1.d + 1)
            x12_4 = x11_7 | x12_5
            
            if (x9_1.d s>= x10)
                goto label_100d644
        
        arg1[1].d = x9_1.d + 1
        uint32_t x13_9 = zx.d(*(x8_1 + sx.q(x9_1.d)))
        x9_1 = zx.q(x9_1.d + 1)
        x11_5 = zx.d((x13_9 << 8).w) | zx.d(x12_4) << 0x10
        
        if (x9_1.d s>= x10)
            return zx.q(x11_5)
        
        arg1[1].d = x9_1.d + 1
        return zx.q(x11_5) | zx.q(*(x8_1 + sx.q(x9_1.d)))
    
    if (x12_1 == 0x1c)
        if (x9_1.d s>= x10)
            x11_5 = 0
            
            if (x9_1.d s>= x10)
                return zx.q(x11_5)
            
            arg1[1].d = x9_1.d + 1
            return zx.q(x11_5) | zx.q(*(x8_1 + sx.q(x9_1.d)))
        
        arg1[1].d = x11_1.d + 2
        uint32_t x12_2 = zx.d(*(x8_1 + x9_1))
        x9_1 = zx.q(x11_1.d + 2)
        x11_5 = x12_2 << 8
        
        if (x9_1.d s>= x10)
            return zx.q(x11_5)
        
        arg1[1].d = x9_1.d + 1
        return zx.q(x11_5) | zx.q(*(x8_1 + sx.q(x9_1.d)))

int64_t x0_5
int64_t x1
int64_t x2
x0_5, x1, x2 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0x4b7, 
    "stbtt_uint32 stbtt__cff_int(stbtt__buf *)", &data_75c628)
return sub_100d6e0(x0_5, x1, x2) __tailcall
