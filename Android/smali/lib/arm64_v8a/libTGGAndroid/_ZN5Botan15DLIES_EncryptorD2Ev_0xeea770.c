// 函数: _ZN5Botan15DLIES_EncryptorD2Ev
// 地址: 0xeea770
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xd]
*entry_x0 = _vtable_for_Botan::DLIES_Encryptor + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xf]
    entry_x0[0xe] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

int64_t* x0_1 = entry_x0[0xb]
entry_x0[0xb] = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

int64_t* x0_2 = entry_x0[9]
entry_x0[9] = 0

if (x0_2 != 0)
    (*(*x0_2 + 8))()

int64_t* x0_3 = entry_x0[8]
entry_x0[8] = 0

if (x0_3 != 0)
    (*(*x0_3 + 8))()

int64_t* x0_4 = entry_x0[7]
entry_x0[7] = 0

if (x0_4 != 0)
    (*(*x0_4 + 0x18))()

void* x0_5 = entry_x0[4]

if (x0_5 != 0)
    entry_x0[5] = x0_5
    operator delete(x0_5)

void* result = entry_x0[1]

if (result == 0)
    return result

entry_x0[2] = result
return operator delete(result) __tailcall
