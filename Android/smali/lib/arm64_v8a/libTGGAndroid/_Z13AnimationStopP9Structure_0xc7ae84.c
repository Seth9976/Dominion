// 函数: _Z13AnimationStopP9Structure
// 地址: 0xc7ae84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *(arg1 + 0x38)

if (x19 == 0)
    return 

arg1 = *(x19 + 8)

if (arg1 == 0)
    return 

Structure* i

do
    void** x8_1 = *arg1
    i = *(arg1 + 8)
    int32_t x9_1 = x8_1[5].d
    bool z_1
    
    if (x9_1 != 2)
        z_1 = x9_1 == 4
    else
        z_1 = true
    
    if (not(z_1))
        void** x9_3 = *(*gpGameData + 8)
        void* x11_1 = *x9_3
        *(x9_3 + 0x14) -= 1
        *x8_1 = x11_1
        *x9_3 = x8_1
        void* x8_2 = *(arg1 + 0x10)
        Structure** x8_3
        
        if (x8_2 == 0)
            x8_3 = x19 + 8
        else
            x8_3 = x8_2 + 8
        
        *x8_3 = *(arg1 + 8)
        void* x8_4 = *(arg1 + 8)
        void* x8_5
        
        if (x8_4 == 0)
            x8_5 = x19 + 0x10
        else
            x8_5 = x8_4 + 0x10
        
        *x8_5 = *(arg1 + 0x10)
        *(x19 + 0x18) -= 1
        XPooledFree(arg1, 0x18)
    
    arg1 = i
while (i != 0)
