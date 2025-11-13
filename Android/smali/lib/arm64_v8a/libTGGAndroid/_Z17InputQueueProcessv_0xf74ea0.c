// 函数: _Z17InputQueueProcessv
// 地址: 0xf74ea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gInputGameGlobals

if (zx.d(*(x8 + 0x3c)) != 0)
    float v0 = *gSecondsPerUpdate + *(x8 + 0x40)
    *(x8 + 0x40) = v0
    
    if (not(v0 < fconvert.s(0.75f)))
        *(x8 + 0x3c) = 0

mutex_lock(*(x8 + 0x18))
int64_t* x21 = *gInputGameGlobals
int128_t* i_4 = *x21

if (i_4 != 0)
    void* x24_1 = x21[5]
    
    if (x24_1 == 0)
        int128_t* i
        
        do
            i = *(i_4 + 0x28)
            int128_t* x0_3
            int128_t v0_2
            x0_3, v0_2 = XPooledCalloc(0x38)
            int64_t x8_8 = i_4[1].q
            *x0_3 = *i_4
            x0_3[1].q = x8_8
            XString::XString(x0_3 + 0x18)
            char x8_9 = i_4[2].b
            *(x0_3 + 0x28) = 0
            i_4 = i
            x0_3[2].b = x8_9
            x0_3[3].q = x21[5]
            void* x8_11 = x21[5]
            void* x8_12
            
            if (x8_11 == 0)
                x8_12 = &x21[4]
            else
                x8_12 = x8_11 + 0x28
            
            *x8_12 = x0_3
            int32_t x8_13 = x21[6].d
            x21[5] = x0_3
            x21[6].d = x8_13 + 1
        while (i != 0)
    else
        int128_t* i_1
        
        do
            i_1 = *(i_4 + 0x28)
            int128_t* x0_1
            int128_t v0_1
            x0_1, v0_1 = XPooledCalloc(0x38)
            int64_t x8_1 = i_4[1].q
            *x0_1 = *i_4
            x0_1[1].q = x8_1
            XString::XString(x0_1 + 0x18)
            char x8_2 = i_4[2].b
            *(x0_1 + 0x28) = x24_1
            i_4 = i_1
            x0_1[2].b = x8_2
            x0_1[3].q = *(x24_1 + 0x30)
            void* x8_4 = *(x24_1 + 0x30)
            void* x8_5
            
            if (x8_4 == 0)
                x8_5 = &x21[4]
            else
                x8_5 = x8_4 + 0x28
            
            *x8_5 = x0_1
            *(x24_1 + 0x30) = x0_1
            x21[6].d += 1
        while (i_1 != 0)

int64_t* x21_1 = *gInputGameGlobals
void* i_3 = *x21_1
int64_t* x8_15 = x21_1

if (i_3 != 0)
    void* i_2
    
    do
        i_2 = *(i_3 + 0x28)
        XString::~XString()
        XPooledFree(i_3, 0x38)
        i_3 = i_2
    while (i_2 != 0)
    x8_15 = *gInputGameGlobals

__builtin_memset(x21_1, 0, 0x14)
int64_t result = mutex_release(x8_15[3])
InputData* x19_3 = nullptr

while (true)
    int64_t* x8_18
    
    if (x19_3 == 0)
        x8_18 = *gInputGameGlobals + 0x20
    else
        x8_18 = x19_3 + 0x28
    
    do
        x19_3 = *x8_18
        
        if (x19_3 == 0)
            return result
        
        x8_18 = x19_3 + 0x28
    while (zx.d(*(x19_3 + 0x20)) != 0)
    
    result = InputHandle(x19_3)
    
    if ((result.d & 1) != 0)
        *(x19_3 + 0x20) = 1
