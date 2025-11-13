// 函数: _ZNSt6__ndk18ios_base16__call_callbacksENS0_5eventE
// 地址: 0x10a33b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x48)

if (x8 == 0)
    return 

void* x19_1 = arg1
int64_t i = x8 - 1

do
    int32_t entry_x1
    (*(*(x19_1 + 0x38) + (i << 3)))(zx.q(entry_x1), x19_1, zx.q(*(*(x19_1 + 0x40) + (i << 2))))
    i -= 1
while (i != -1)
