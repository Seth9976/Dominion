// 函数: _Z22NetBufferTotalSendSizeR6NetLoc
// 地址: 0xf854e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 0x68)

if (i == 0)
    return 0

uint64_t result = 0

do
    void* x10_1 = *i
    i = i[1]
    result = zx.q(*(x10_1 + 0xfdec) + result.d)
while (i != 0)

return result
