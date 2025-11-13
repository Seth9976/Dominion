// 函数: _ZN5Botan9SP800_56CD2Ev
// 地址: 0xee5a88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[2]
entry_x0[2] = 0
*entry_x0 = _vtable_for_Botan::SP800_56C + 0x10

if (x0 != 0)
    (*(*x0 + 8))()

int64_t* result = entry_x0[1]
entry_x0[1] = 0

if (result == 0)
    return result

jump(*(*result + 0x10))
