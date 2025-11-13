// 函数: _ZN5Botan17DataSource_StreamD0Ev
// 地址: 0xe8c180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[4]
entry_x0[4] = 0
*entry_x0 = _vtable_for_Botan::DataSource_Stream + 0x10

if (x0 != 0)
    (*(*x0 + 8))()

if ((zx.d(entry_x0[1].b) & 1) != 0)
    operator delete(entry_x0[3])

return operator delete(entry_x0) __tailcall
