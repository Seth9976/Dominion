// 函数: _ZN5Botan17DataSource_StreamD1Ev
// 地址: 0xe8c134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* result = entry_x0[4]
entry_x0[4] = 0
*entry_x0 = _vtable_for_Botan::DataSource_Stream + 0x10

if (result != 0)
    result = (*(*result + 8))()

if ((zx.d(entry_x0[1].b) & 1) != 0)
    return operator delete(entry_x0[3]) __tailcall

return result
