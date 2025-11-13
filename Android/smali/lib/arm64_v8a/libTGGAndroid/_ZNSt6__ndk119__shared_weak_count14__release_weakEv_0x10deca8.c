// 函数: _ZNSt6__ndk119__shared_weak_count14__release_weakEv
// 地址: 0x10deca8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t* entry_x0

if (entry_x0[2] != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&entry_x0[2])
        i = __stlxr(x9_1 - 1, &entry_x0[2])
    while (i != 0)
    
    if (x9_1 != 0)
        return 

jump(*(*entry_x0 + 0x20))
