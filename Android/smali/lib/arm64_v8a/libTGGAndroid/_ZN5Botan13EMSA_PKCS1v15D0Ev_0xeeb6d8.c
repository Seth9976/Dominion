// 函数: _ZN5Botan13EMSA_PKCS1v15D0Ev
// 地址: 0xeeb6d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[2]
*entry_x0 = _vtable_for_Botan::EMSA_PKCS1v15 + 0x10

if (x0 != 0)
    entry_x0[3] = x0
    operator delete(x0)

int64_t* x0_1 = entry_x0[1]
entry_x0[1] = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

return operator delete(entry_x0) __tailcall
