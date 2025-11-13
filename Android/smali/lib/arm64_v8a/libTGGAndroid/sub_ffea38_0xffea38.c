// 函数: sub_ffea38
// 地址: 0xffea38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
void* x8 = *(arg1 + 0xc0)
uint32_t x20

if (x9 u>= x8)
    if (*(arg1 + 0x30) == 0)
        x20 = 0
        
        if (x9 u< x8)
            goto label_ffeb10
        
        goto label_ffeab0
    
    int32_t x0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    
    if (x0_1 == 0)
        x20 = 0
        *(arg1 + 0x30) = 0
        x8 = arg1 + 0x39
        *(arg1 + 0x38) = 0
    else
        x20 = zx.d(*(arg1 + 0x38))
        x8 = &(arg1 + 0x38)[sx.q(x0_1)]
    
    x9 = arg1 + 0x39
    *(arg1 + 0xb8) = x9
    *(arg1 + 0xc0) = x8
    
    if (x9 u>= x8)
        goto label_ffeab0
    
    goto label_ffeb10

*(arg1 + 0xb8) = &x9[1]
x20 = zx.d(*x9)
x9 = &x9[1]
char x21

if (x9 u>= x8)
label_ffeab0:
    
    if (*(arg1 + 0x30) == 0)
        x21 = 0
        
        if (x9 u< x8)
            goto label_ffeb28
        
        goto label_ffeb64
    
    int32_t x0_3 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    
    if (x0_3 == 0)
        x21 = 0
        *(arg1 + 0x30) = 0
        x8 = arg1 + 0x39
        *(arg1 + 0x38) = 0
    else
        x21 = *(arg1 + 0x38)
        x8 = arg1 + 0x38 + sx.q(x0_3)
    
    x9 = arg1 + 0x39
    *(arg1 + 0xb8) = x9
    *(arg1 + 0xc0) = x8
    
    if (x9 u< x8)
        goto label_ffeb28
    
    goto label_ffeb64

label_ffeb10:
*(arg1 + 0xb8) = &x9[1]
x21 = *x9
x9 = &x9[1]
uint32_t x8_12
char x22

if (x9 u>= x8)
label_ffeb64:
    
    if (*(arg1 + 0x30) == 0)
        x22 = 0
        
        if (x9 u>= x8)
            goto label_ffeb9c
        
        *(arg1 + 0xb8) = &x9[1]
        x8_12 = zx.d(*x9)
    else
        int32_t x0_5 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        void* x8_10
        
        if (x0_5 == 0)
            x22 = 0
            *(arg1 + 0x30) = 0
            x8_10 = arg1 + 0x39
            *(arg1 + 0x38) = 0
        else
            x22 = *(arg1 + 0x38)
            x8_10 = arg1 + 0x38 + sx.q(x0_5)
        
        x9 = arg1 + 0x39
        *(arg1 + 0xb8) = x9
        *(arg1 + 0xc0) = x8_10
        
        if (x9 u>= x8_10)
            goto label_ffeb9c
        
        *(arg1 + 0xb8) = &x9[1]
        x8_12 = zx.d(*x9)
else
label_ffeb28:
    *(arg1 + 0xb8) = &x9[1]
    x22 = *x9
    x9 = &x9[1]
    
    if (x9 u>= x8)
    label_ffeb9c:
        x8_12 = *(arg1 + 0x30)
        
        if (x8_12 != 0)
            int32_t x0_7 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            void* x9_3
            
            if (x0_7 == 0)
                x8_12 = 0
                *(arg1 + 0x30) = 0
                x9_3 = arg1 + 0x39
                *(arg1 + 0x38) = 0
            else
                x8_12 = zx.d(*(arg1 + 0x38))
                x9_3 = &(arg1 + 0x38)[sx.q(x0_7)]
            
            *(arg1 + 0xb8) = arg1 + 0x39
            *(arg1 + 0xc0) = x9_3
    else
        *(arg1 + 0xb8) = &x9[1]
        x8_12 = zx.d(*x9)

return (0xffffff
    & ((0xff00ffff & ((0xffff00ff & zx.q(x20)) | zx.q(zx.d(x21) << 8))) | zx.q(zx.d(x22) << 0x10)))
    | zx.q((0xff & x8_12) << 0x18)
