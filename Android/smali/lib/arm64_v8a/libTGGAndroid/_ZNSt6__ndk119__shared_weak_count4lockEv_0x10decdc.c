// 函数: _ZNSt6__ndk119__shared_weak_count4lockEv
// 地址: 0x10decdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
void* const entry_x0
int64_t i_1 = *(entry_x0 + 8)

if (i_1 == -1)
    return 

int64_t i

do
    i = __ldaxr(entry_x0 + 8)
    int32_t x10_1
    
    if (i != i_1)
        __clrex()
        x10_1 = 0
    else if (__stlxr(i_1 + 1, entry_x0 + 8) != 0)
        x10_1 = 0
    else
        x10_1 = 1
    
    if ((x10_1 & 1) != 0)
        break
    
    i_1 = i
while (i != -1)
