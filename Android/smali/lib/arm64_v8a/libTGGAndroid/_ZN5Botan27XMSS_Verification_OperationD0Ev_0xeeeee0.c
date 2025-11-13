// 函数: _ZN5Botan27XMSS_Verification_OperationD0Ev
// 地址: 0xeeeee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xb]
*entry_x0 = _vtable_for_Botan::XMSS_Verification_Operation + 0x30

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xd]
    entry_x0[0xc] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

if ((zx.d(entry_x0[8].b) & 1) != 0)
    operator delete(entry_x0[0xa])

void* x0_2 = entry_x0[4]

if (x0_2 != 0)
    entry_x0[5] = x0_2
    operator delete(x0_2)

int64_t* x0_3 = entry_x0[3]
entry_x0[3] = 0

if (x0_3 != 0)
    (*(*x0_3 + 0x10))()

int64_t* x0_4 = entry_x0[2]
entry_x0[2] = 0

if (x0_4 != 0)
    (*(*x0_4 + 0x10))()

return operator delete(entry_x0) __tailcall
