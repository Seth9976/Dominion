// 函数: _Z19NetConnectionClosedR6NetLoc
// 地址: 0xf83830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x3c) == 5)
    return 

int32_t x8_1 = *(arg1 + 0x40)
*(arg1 + 0x3c) = 5
int32_t x8_5
int32_t* x20_1
int128_t v0_1
int128_t v1_1

if (x8_1 == 1)
    void* x8_3 = *gNetwork
    int32_t x9_2 = *(x8_3 + 0x90)
    
    if (x9_2 == 0)
        int32_t* x0_4
        x0_4, v0_1, v1_1 = XCalloc(0xed70)
        x20_1 = x0_4
        x8_5 = 0x5de
    else
        int32_t** x0_1 = *(x8_3 + 0x88)
        void* x10_2 = x0_1[2]
        *(x8_3 + 0x88) = x10_2
        
        if (x10_2 == 0)
            *(x8_3 + 0x80) = 0
        else
            *(x10_2 + 8) = 0
            x9_2 = *(x8_3 + 0x90)
        
        x20_1 = *x0_1
        *(x8_3 + 0x90) = x9_2 - 1
        v0_1, v1_1 = XPooledFree(x0_1, 0x18)
        x8_5 = 0x5de
    
label_f8398c:
    x20_1[1] = x8_5
    int32_t x8_6 = *(arg1 + 0x88)
    x20_1[2] = 0
    *x20_1 = x8_6
    v0_1 = *(arg1 + 0x10)
    *(x20_1 + 0xed48) = *arg1
    *(x20_1 + 0xed58) = v0_1
    uint64_t x19_2 = *gNetwork
    arg1 = XPooledCalloc(0x18)
    *arg1 = x20_1
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = *(x19_2 + 0x58)
    void* x8_9 = *(x19_2 + 0x58)
    NetLoc** x8_10
    
    if (x8_9 == 0)
        x8_10 = x19_2 + 0x50
    else
        x8_10 = x8_9 + 8
    
    *x8_10 = arg1
    int32_t x8_11 = *(x19_2 + 0x60)
    *(x19_2 + 0x58) = arg1
    *(x19_2 + 0x60) = x8_11 + 1
else
    if (x8_1 == 3)
        void* x8_4 = *gNetwork
        int32_t x9_3 = *(x8_4 + 0x90)
        
        if (x9_3 == 0)
            int32_t* x0_5
            x0_5, v0_1, v1_1 = XCalloc(0xed70)
            x20_1 = x0_5
        else
            int32_t** x0_2 = *(x8_4 + 0x88)
            void* x10_3 = x0_2[2]
            *(x8_4 + 0x88) = x10_3
            
            if (x10_3 == 0)
                *(x8_4 + 0x80) = 0
            else
                *(x10_3 + 8) = 0
                x9_3 = *(x8_4 + 0x90)
            
            x20_1 = *x0_2
            *(x8_4 + 0x90) = x9_3 - 1
            v0_1, v1_1 = XPooledFree(x0_2, 0x18)
        
        x8_5 = 0xfa2
        goto label_f8398c
    
    if (x8_1 == 2)
        uint64_t x8_2 = *gNetwork
        int32_t x9_1 = *(x8_2 + 0x90)
        
        if (x9_1 == 0)
            int32_t* x0_3
            x0_3, v0_1, v1_1 = XCalloc(0xed70)
            x20_1 = x0_3
        else
            void* x0 = *(x8_2 + 0x88)
            void* x10_1 = *(x0 + 0x10)
            *(x8_2 + 0x88) = x10_1
            
            if (x10_1 == 0)
                *(x8_2 + 0x80) = 0
            else
                *(x10_1 + 8) = 0
                x9_1 = *(x8_2 + 0x90)
            
            x20_1 = *x0
            *(x8_2 + 0x90) = x9_1 - 1
            v0_1, v1_1 = XPooledFree(x0, 0x18)
        
        x8_5 = 0x3ec
        goto label_f8398c
