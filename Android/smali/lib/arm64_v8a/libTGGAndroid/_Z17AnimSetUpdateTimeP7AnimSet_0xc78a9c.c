// 函数: _Z17AnimSetUpdateTimeP7AnimSet
// 地址: 0xc78a9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg1 + 4)
float v1 = *arg1 * *gSecondsPerUpdate
float i = v2 + v1
v1 - 0f
*(arg1 + 4) = i
*(arg1 + 8) = v2

if (not(v1 <= 0f))
    int32_t x8_1 = *(arg1 + 0x24)
    
    if (x8_1 != 1)
        if (x8_1 != 0)
            pthread_kill(pthread_self(), 6)
            return AnimationUpdateTime(XNoReturn()) __tailcall
        
        v1 = fconvert.s(1f)
        
        if (not(i <= v1))
            do
                i = i + fconvert.s(-1f)
            while (i > v1)
            
            *(arg1 + 4) = i
    else if (not(i < fconvert.s(1f)))
        *(arg1 + 4) = 0x3f800000
else if (not(v1 >= 0f))
    int32_t x8_2 = *(arg1 + 0x24)
    
    if (x8_2 != 0)
        if (x8_2 != 1)
            pthread_kill(pthread_self(), 6)
            return AnimationUpdateTime(XNoReturn()) __tailcall
        
        if (not(i > 0f))
            *(arg1 + 4) = 0
    else if (not(i >= 0f))
        do
            i = i + fconvert.s(1f)
        while (i < 0f)
        
        *(arg1 + 4) = i

i = *(arg1 + 0x20)
i - 0f

if (i <= 0f)
    v1 = *(arg1 + 0x1c)
    
    if (not(i >= 0f))
        i = i + v1
        *(arg1 + 0x1c) = i
        
        if (not(i > 0f))
            return 0
    else if (v1 <= 0f)
        return 0
else
    i = i + *(arg1 + 0x1c)
    *(arg1 + 0x1c) = i
    
    if (not(i <= fconvert.s(1f)))
        *(arg1 + 0x1c) = 0x3f800000

return 1
