// 函数: _ZNSt6__ndk114__shared_count16__release_sharedEv
// 地址: 0x10deb9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x19_1
int32_t i

do
    x19_1 = __ldaxr(&entry_x0[1])
    i = __stlxr(x19_1 - 1, &entry_x0[1])
while (i != 0)

if (x19_1 == 0)
    (*(*entry_x0 + 0x10))()

return zx.q(x19_1 == 0 ? 1 : 0)
