// 函数: sub_f3a078
// 地址: 0xf3a078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(*Botan_FFI::safe_get<Botan::Private_Key, 2140551262u>(*(arg1 + 8)) - 0x88)
Botan::Public_Key::subject_public_key()
void* var_38
int64_t x0_4 = Botan::X509::load_key(&var_38)
void* x0_5 = var_38

if (x0_5 != 0)
    void* var_30_1 = x0_5
    operator delete(x0_5)

void** x0_6 = operator new(0x18)
x0_6[2] = x0_4
x0_6[1].d = 0x2c286519
*x0_6 = _vtable_for_botan_pubkey_struct + 0x10
**(arg1 + 0x10) = x0_6
return 0
