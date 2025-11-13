// 函数: _ZNSt6__ndk119__shared_weak_count16__release_sharedEv
// 地址: 0x10dec20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x9_1
int32_t i

do
    x9_1 = __ldaxr(&entry_x0[1])
    i = __stlxr(x9_1 - 1, &entry_x0[1])
while (i != 0)

if (x9_1 != 0)
    return 

(*(*entry_x0 + 0x10))(entry_x0)
int64_t x8_4

if (entry_x0[2] != 0)
    int32_t i_1
    
    do
        x8_4 = __ldaxr(&entry_x0[2])
        i_1 = __stlxr(x8_4 - 1, &entry_x0[2])
    while (i_1 != 0)

if (entry_x0[2] == 0 || x8_4 == 0)
    jump(*(*entry_x0 + 0x20))
