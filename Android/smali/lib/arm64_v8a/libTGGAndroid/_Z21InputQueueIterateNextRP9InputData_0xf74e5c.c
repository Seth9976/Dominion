// 函数: _Z21InputQueueIterateNextRP9InputData
// 地址: 0xf74e5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

InputData* x8 = *arg1
void* __offset(InputData, 0x28) x9_2

if (x8 == 0)
    x9_2 = *gInputGameGlobals + 0x20
else
    x9_2 = x8 + 0x28

InputData* x8_1

while (true)
    x8_1 = *x9_2
    
    if (x8_1 == 0)
        break
    
    x9_2 = x8_1 + 0x28
    
    if (zx.d(*(x8_1 + 0x20)) == 0)
        *arg1 = x8_1
        break

return zx.q(x8_1 != 0 ? 1 : 0)
