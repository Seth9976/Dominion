// 函数: _Z22CalcTrantitionsEndTimePK13UI2Transition
// 地址: 0x1019e34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0 || (zx.d(*(gUI2Editor + 0x88068)) | zx.d(*(gUI2Editor + 0x7054))
        | zx.d(*(gUI2Editor + 0x88069)) | zx.d(*(gUI2Editor + 0x8806a))
        | zx.d(*(gUI2Editor + 0x8806b))) != 0)
    return 

uint64_t i_1 = zx.q(*(arg1 + 0x10))

if (i_1.d s< 1)
    return 

float v0 = 0f
void* x9_6 = *(arg1 + 8) + 8
uint64_t i

do
    float v2 = *(x9_6 - 4)
    float v1 = *x9_6
    x9_6 += 0x10
    v1 = v1 + v2
    
    if (v1 > v0)
        v0 = v1
    
    i = i_1
    i_1 -= 1
while (i != 1)
