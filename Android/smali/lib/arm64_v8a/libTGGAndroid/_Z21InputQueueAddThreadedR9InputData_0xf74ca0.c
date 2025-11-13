// 函数: _Z21InputQueueAddThreadedR9InputData
// 地址: 0xf74ca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

mutex_lock(*(*gInputGameGlobals + 0x18))
int64_t* x22 = *gInputGameGlobals
int128_t* x0_1
int128_t v0
x0_1, v0 = XPooledCalloc(0x38)
int64_t x8_2 = *(arg1 + 0x10)
*x0_1 = *arg1
x0_1[1].q = x8_2
XString::XString(x0_1 + 0x18)
char x8_3 = *(arg1 + 0x20)
*(x0_1 + 0x28) = 0
x0_1[2].b = x8_3
x0_1[3].q = x22[1]
void* x8_5 = x22[1]
int64_t* x8_6

if (x8_5 == 0)
    x8_6 = x22
else
    x8_6 = x8_5 + 0x28

*x8_6 = x0_1
int32_t x8_7 = x22[2].d
x22[1] = x0_1
x22[2].d = x8_7 + 1
return mutex_release(*(*gInputGameGlobals + 0x18)) __tailcall
