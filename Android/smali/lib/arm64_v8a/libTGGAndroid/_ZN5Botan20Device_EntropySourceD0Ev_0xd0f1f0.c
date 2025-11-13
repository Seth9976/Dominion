// 函数: _ZN5Botan20Device_EntropySourceD0Ev
// 地址: 0xd0f1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::Device_EntropySource + 0x10
int32_t* x20 = entry_x0[1]
int64_t x22 = entry_x0[2]

if (x20 != x22)
    do
        close(*x20)
        x20 = &x20[1]
    while (x22 != x20)
    
    x20 = entry_x0[1]

if (x20 != 0)
    entry_x0[2] = x20
    operator delete(x20)

return operator delete(entry_x0) __tailcall
