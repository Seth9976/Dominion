// 函数: _Z31MessageQueueAppendSimpleMessageR6NetLoci
// 地址: 0xf83754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gNetwork
int32_t x9 = *(x8 + 0x90)
int32_t* x21
int128_t v0
int128_t v1

if (x9 == 0)
    int32_t* x0_1
    x0_1, v0, v1 = XCalloc(0xed70)
    x21 = x0_1
else
    void* x0 = *(x8 + 0x88)
    void* x10_1 = *(x0 + 0x10)
    *(x8 + 0x88) = x10_1
    
    if (x10_1 == 0)
        *(x8 + 0x80) = 0
    else
        *(x10_1 + 8) = 0
        x9 = *(x8 + 0x90)
    
    x21 = *x0
    *(x8 + 0x90) = x9 - 1
    v0, v1 = XPooledFree(x0, 0x18)
x21[1] = arg2
int32_t x8_1 = *(arg1 + 0x88)
x21[2] = 0
*x21 = x8_1
v0 = *(arg1 + 0x10)
*(x21 + 0xed48) = *arg1
*(x21 + 0xed58) = v0
void* x19_1 = *gNetwork
void** result = XPooledCalloc(0x18)
*result = x21
result[1] = 0
result[2] = *(x19_1 + 0x58)
void* x8_4 = *(x19_1 + 0x58)
void* x8_5

if (x8_4 == 0)
    x8_5 = x19_1 + 0x50
else
    x8_5 = x8_4 + 8

*x8_5 = result
int32_t x8_6 = *(x19_1 + 0x60)
*(x19_1 + 0x58) = result
*(x19_1 + 0x60) = x8_6 + 1
return result
