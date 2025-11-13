// 函数: _Z20StartEndGameSequenceb
// 地址: 0xb4e93c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ActiveGameComplete_Stats(ActiveGame())

if ((arg1.d & 1) != 0)
    return ToggleScore() __tailcall

int32_t x21 = 0
*(gDomClient + 0x205a0) = &data_114f758
int64_t result

while (true)
    int64_t x0_2 = Now()
    int64_t x23_1 = *(gDomClient + 0x205a0)
    *(gDomClient + 0x205b0) = x0_2
    *(gDomClient + 0x205a8) = x21
    void* x24_1 = x23_1 + muls.dp.d(x21, 0x18)
    result = (*(x24_1 + 0x10))()
    
    if (*(x24_1 + 8) != 0)
        break
    
    x21 = *(x23_1 + sx.q(x21) * 0x18 + 4)
    
    if (x21 == 0xffffffff)
        *(gDomClient + 0x205a0) = 0
        break

return result
