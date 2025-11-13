// 函数: _ZThn8_N5Botan4HMACD0Ev
// 地址: 0xeec72c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1[-1] = _vtable_for_Botan::HMAC + 0x10
void* x0 = arg1[5]
*arg1 = _vtable_for_Botan::HMAC + 0x98

if (x0 != 0)
    int64_t x8_1 = arg1[7]
    arg1[6] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = arg1[2]

if (x0_1 != 0)
    int64_t x8_2 = arg1[4]
    arg1[3] = x0_1
    Botan::deallocate_memory(x0_1, x8_2 - x0_1, 1)

int64_t* x0_2 = arg1[1]
arg1[1] = 0

if (x0_2 != 0)
    (*(*x0_2 + 0x10))()

return operator delete(&arg1[-1]) __tailcall
