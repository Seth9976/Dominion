// 函数: _ZN5Botan24XMSS_Signature_OperationD2Ev
// 地址: 0xf22dbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
int64_t* entry_x0
*entry_x0 = x8
*(entry_x0 + *(x8 - 0x38)) = entry_x1[1]
void* x0 = entry_x0[0x6a]

if (x0 != 0)
    int64_t x8_2 = entry_x0[0x6c]
    entry_x0[0x6b] = x0
    Botan::deallocate_memory(x0, x8_2 - x0, 1)

if ((zx.d(entry_x0[0x67].b) & 1) != 0)
    operator delete(entry_x0[0x69])

void* x0_2 = entry_x0[0x63]

if (x0_2 != 0)
    entry_x0[0x64] = x0_2
    operator delete(x0_2)

int64_t* x0_3 = entry_x0[0x62]
entry_x0[0x62] = 0

if (x0_3 != 0)
    (*(*x0_3 + 0x10))()

int64_t* x0_4 = entry_x0[0x61]
entry_x0[0x61] = 0

if (x0_4 != 0)
    (*(*x0_4 + 0x10))()

if ((zx.d(entry_x0[0x59].b) & 1) != 0)
    operator delete(entry_x0[0x5b])

if ((zx.d(entry_x0[0x56].b) & 1) != 0)
    operator delete(entry_x0[0x58])

Botan::XMSS_PrivateKey::~XMSS_PrivateKey()
return Botan::XMSS_PublicKey::~XMSS_PublicKey() __tailcall
