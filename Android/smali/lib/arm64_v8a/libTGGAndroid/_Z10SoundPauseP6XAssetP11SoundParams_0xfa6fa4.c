// 函数: _Z10SoundPauseP6XAssetP11SoundParams
// 地址: 0xfa6fa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_50 = v8
SoundParams* x20 = arg2

if (arg2 != 0)
    __builtin_memset(x20, 0, 0x40)

if (x20 == 0)
    while (true)
        SoundParams** x8_14 = *gpSoundGlobals
        SoundParams* x9_7
        
        if (x20 == 0)
            x9_7 = *x8_14
            x20 = x9_7
        else
            x9_7 = *x8_14
            x20 += 0x80
        
        void* x8_16 = x9_7 + (zx.q(x8_14[1].d) << 7)
        
        if (x20 u>= x8_16)
            break
        
        while (*(x20 + 0x78) u< 0x10000)
            x20 += 0x80
            
            if (x20 u>= x8_16)
                return 
        
        if (*x20 != arg1 && *(x20 + 8) != arg1)
            continue
        
        int64_t* x0_3 = *gSoundInterface
        (*(*x0_3 + 0x50))(x0_3, x20)
        *(x20 + 0x72) = 0
    
    return 

void* x21_1 = nullptr

while (true)
    int64_t* x8_1 = *gpSoundGlobals
    void* x8_3
    void* x9_1
    
    if (x21_1 == 0)
        void* x10_2 = *x8_1
        x9_1 = x10_2
        x8_3 = x10_2 + (zx.q(x8_1[1].d) << 7)
        
        if (x9_1 u>= x8_3)
            break
    else
        x9_1 = x21_1 + 0x80
        x8_3 = *x8_1 + (zx.q(x8_1[1].d) << 7)
        
        if (x9_1 u>= x8_3)
            break
    
    void* x26_1 = x9_1 + 0x50
    
    while (zx.d(*(x26_1 + 0x2a)) == 0)
        void* x9_3 = x26_1 + 0x30
        x26_1 += 0x80
        
        if (x9_3 u>= x8_3)
            return 
    
    x21_1 = x26_1 - 0x50
    int64_t x8_5 = *x21_1
    
    if (x8_5 != arg1 && *(x26_1 - 0x48) != arg1)
        continue
    
    if (*x20 != 0)
        pthread_kill(pthread_self(), 6)
        uint32_t x0_5
        SoundParams* x1_3
        x0_5, x1_3 = XNoReturn()
        return SoundPauseHandle(x0_5, x1_3) __tailcall
    
    *x20 = x8_5
    *(x20 + 0x18) = *(x26_1 - 0x48)
    *(x20 + 0x20) = *(x26_1 + 0x20)
    *(x20 + 8) = *x26_1
    *(x20 + 0xc) = *(x26_1 + 4)
    char x8_8 = *(x26_1 + 0x23)
    *(x20 + 0x22) = 0
    *(x20 + 0x21) = x8_8
    int64_t x9_6 = *V0
    *(x20 + 0x2c) = *(V0 + 8)
    *(x20 + 0x24) = x9_6
    *(x20 + 0x30) = 0x4248000040a00000
    int64_t* x0 = *gSoundInterface
    *(x20 + 0x10) = (*(*x0 + 0x58))(x0, x21_1)
    int64_t* x0_2 = *gSoundInterface
    (*(*x0_2 + 0x50))(x0_2, x21_1)
    *(x26_1 + 0x22) = 0
