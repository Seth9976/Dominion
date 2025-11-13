// 函数: _Z20AnimationFadeOutSetsP13StructureAnimf
// 地址: 0xc78894
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** i = *(arg1 + 8)

if (i == 0)
    return 

float v1 = *gSecondsPerUpdate

do
    void* x9_1 = *i
    i = i[1]
    int32_t x10_1 = *(x9_1 + 0x28)
    bool z_1
    
    if (x10_1 != 2)
        z_1 = x10_1 == 4
    else
        z_1 = true
    
    if (not(z_1))
        *(x9_1 + 0x20) = v1 * fneg(*(x9_1 + 0x1c)) / arg2
while (i != 0)
