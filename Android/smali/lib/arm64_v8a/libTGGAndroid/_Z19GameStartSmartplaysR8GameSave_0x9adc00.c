// 函数: _Z19GameStartSmartplaysR8GameSave
// 地址: 0x9adc00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x11b4) s< 1)
    return 

int64_t i = 0
GameSave& x23_1 = arg1

do
    int32_t x8_3 = *(x23_1 + 0x68)
    void* __offset(GameSave, 0x7c) x0
    void* x1_1
    size_t x2_1
    
    if (x8_3 == 3)
        NoSmartplays()
    label_9adc40:
        int32_t var_48
        int64_t x8_1 = sx.q(var_48)
        x0 = x23_1 + 0x7c
        void var_248
        x1_1 = &var_248
        x2_1 = x8_1 << 3
        *(x23_1 + 0x27c) = x8_1.d
    else
        void* x0_2
        int32_t x9_1
        
        if (x8_3 == 0x3e8)
            x0_2 = GameProfilesTryGetByIndex(zx.q(*(x23_1 + 0x6c)))
            x9_1 = *(x0_2 + 0x5960)
        
        if (x8_3 != 0x3e8 || x9_1 == 0)
            DefaultSmartplays()
            goto label_9adc40
        
        *(x23_1 + 0x27c) = x9_1
        x1_1 = x0_2 + 0x5760
        x0 = x23_1 + 0x7c
        x2_1 = sx.q(*(x0_2 + 0x5960)) << 3
    
    memcpy(x0, x1_1, x2_1)
    i += 1
    x23_1 += 0x22c
while (i s< sx.q(*(arg1 + 0x11b4)))
