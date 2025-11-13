// 函数: _ZN5Botan15DataSink_StreamD1Ev
// 地址: 0xd79560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[0xd]
entry_x0[0xd] = 0
*entry_x0 = _vtable_for_Botan::DataSink_Stream + 0x10

if (x0 != 0)
    (*(*x0 + 8))()

if ((zx.d(entry_x0[0xa].b) & 1) != 0)
    operator delete(entry_x0[0xc])

void* x0_2 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Filter + 0x10

if (x0_2 != 0)
    entry_x0[5] = x0_2
    operator delete(x0_2)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_5 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_5 - result, 1)
