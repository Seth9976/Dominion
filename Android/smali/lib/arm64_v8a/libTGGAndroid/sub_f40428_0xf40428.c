// 函数: sub_f40428
// 地址: 0xf40428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* x20 = *(arg1 + 8)
int128_t* x0
int128_t v0
int128_t v1
x0, v0, v1 = Botan::allocate_memory(0x20, 1)
v1 = x20[1]
void* var_40 = &x0[2]
*x0 = *x20
x0[1] = v1
void** x0_1 = operator new(0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_2 = operator new(0x40)
Botan::Curve25519_PrivateKey::Curve25519_PrivateKey(x0_2)
x0_1[2] = x0_2 + 0x38
x0_1[1].d = 0x7f96385e
*x0_1 = _vtable_for_botan_privkey_struct + 0x10
**(arg1 + 0x10) = x0_1

if (x0 != 0)
    int128_t* var_40_1 = x0
    Botan::deallocate_memory(x0, 0x20, 1)

return 0
