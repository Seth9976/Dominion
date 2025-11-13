// 函数: _ZN5Botan15XMSS_PrivateKeyD2Ev
// 地址: 0xf22a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
int64_t* entry_x0
*entry_x0 = x8
*(entry_x0 + *(x8 - 0xc8)) = entry_x1[1]
*(entry_x0 + *(*entry_x0 - 0x88)) = entry_x1[2]
*(entry_x0 + *(*entry_x0 - 0xd0)) = entry_x1[3]
void* x0 = entry_x0[0x2c]

if (x0 != 0)
    int64_t x8_6 = entry_x0[0x2e]
    entry_x0[0x2d] = x0
    Botan::deallocate_memory(x0, x8_6 - x0, 1)

if ((zx.d(entry_x0[0x29].b) & 1) != 0)
    operator delete(entry_x0[0x2b])

void* x0_2 = entry_x0[0x25]

if (x0_2 != 0)
    entry_x0[0x26] = x0_2
    operator delete(x0_2)

int64_t* x0_3 = entry_x0[0x24]
entry_x0[0x24] = 0

if (x0_3 != 0)
    (*(*x0_3 + 0x10))()

int64_t* x0_4 = entry_x0[0x23]
entry_x0[0x23] = 0

if (x0_4 != 0)
    (*(*x0_4 + 0x10))()

void* x0_5 = entry_x0[2]
entry_x0[5] = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
entry_x0[1] = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0

if (x0_5 != 0)
    int64_t x8_13 = entry_x0[4]
    entry_x0[3] = x0_5
    Botan::deallocate_memory(x0_5, x8_13 - x0_5, 1)

return Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey() __tailcall
