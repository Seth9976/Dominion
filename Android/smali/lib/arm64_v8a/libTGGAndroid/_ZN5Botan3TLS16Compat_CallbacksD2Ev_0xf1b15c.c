// 函数: _ZN5Botan3TLS16Compat_CallbacksD2Ev
// 地址: 0xf1b15c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[0x24]
*entry_x0 = _vtable_for_Botan::TLS::Compat_Callbacks + 0x10

if (&entry_x0[0x20] == x0)
    (*(*x0 + 0x20))()
else if (x0 != 0)
    (*(*x0 + 0x28))()

int64_t* x0_1 = entry_x0[0x1e]

if (&entry_x0[0x1a] == x0_1)
    (*(*x0_1 + 0x20))()
else if (x0_1 != 0)
    (*(*x0_1 + 0x28))()

int64_t* x0_2 = entry_x0[0x18]

if (&entry_x0[0x14] == x0_2)
    (*(*x0_2 + 0x20))()
else if (x0_2 != 0)
    (*(*x0_2 + 0x28))()

int64_t* x0_3 = entry_x0[0x12]

if (&entry_x0[0xe] == x0_3)
    (*(*x0_3 + 0x20))()
else if (x0_3 != 0)
    (*(*x0_3 + 0x28))()

int64_t* x0_4 = entry_x0[0xc]

if (&entry_x0[8] == x0_4)
    (*(*x0_4 + 0x20))()
else if (x0_4 != 0)
    (*(*x0_4 + 0x28))()

int64_t* result = entry_x0[6]

if (&entry_x0[2] == result)
    jump(*(*result + 0x20))

if (result == 0)
    return result

jump(*(*result + 0x28))
