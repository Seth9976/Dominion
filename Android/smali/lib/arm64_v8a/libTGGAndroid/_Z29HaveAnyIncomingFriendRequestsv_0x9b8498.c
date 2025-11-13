// 函数: _Z29HaveAnyIncomingFriendRequestsv
// 地址: 0x9b8498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x8 = zx.q(*(x0 + 0x5028))

if (x8.d s< 1)
    return 0

if (*(x0 + 0x3c) == 3)
    return 1

void* x9_1 = x0 + 0x5c
int64_t x11 = 1
int64_t x10_1
int32_t i

do
    x10_1 = x11
    
    if (x8 == x11)
        break
    
    i = *x9_1
    x9_1 += 0x20
    x11 = x10_1 + 1
while (i != 3)
return zx.q(x10_1 u< x8 ? 1 : 0)
