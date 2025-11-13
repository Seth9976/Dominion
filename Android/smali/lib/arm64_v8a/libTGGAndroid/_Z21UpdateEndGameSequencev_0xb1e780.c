// 函数: _Z21UpdateEndGameSequencev
// 地址: 0xb1e780
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x205a0) == 0)
    return 

int64_t x0 = Now()
int64_t x8_1 = *(gDomClient + 0x205a0)
int64_t x9_1 = sx.q(*(gDomClient + 0x205a8))

if (*(x8_1 + x9_1 * 0x18 + 8) s> x0 - *(gDomClient + 0x205b0))
    return 

int64_t x23_1

for (int32_t i = *(x8_1 + x9_1 * 0x18 + 4); i != 0xffffffff; i = *(x23_1 + sx.q(i) * 0x18 + 4))
    int64_t x0_1 = Now()
    x23_1 = *(gDomClient + 0x205a0)
    *(gDomClient + 0x205b0) = x0_1
    *(gDomClient + 0x205a8) = i
    void* x24_1 = x23_1 + muls.dp.d(i, 0x18)
    (*(x24_1 + 0x10))()
    
    if (*(x24_1 + 8) != 0)
        return 

*(gDomClient + 0x205a0) = 0
