// 函数: _ZN5Botan11BER_Decoder22decode_optional_stringINSt6__ndk19allocatorIhEEEERS0_RNS2_6vectorIhT_EENS_8ASN1_TagEtSA_
// 地址: 0xd24690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3.d
int64_t* x21 = arg2
Botan::BER_Decoder::get_next_object()
uint32_t x23_1 = zx.d(arg4)
int32_t var_50
int32_t var_4c
void* var_48
int64_t var_38
int32_t entry_x4

if (var_50 != x23_1 || var_4c != entry_x4)
    x21[1] = *x21
    Botan::BER_Decoder::push_back(arg1)
else if ((0xa0 & not.d(entry_x4)) != 0)
    Botan::BER_Decoder::push_back(arg1)
    Botan::BER_Decoder::decode(arg1, x21, zx.q(x20), zx.q(x23_1))
else
    int64_t var_7c
    __builtin_memset(&var_7c, 0, 0x1c)
    int32_t var_80_1 = 0xff00
    struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** x0
    int128_t v0_1
    x0, v0_1 = operator new(0x30)
    v0_1 = var_48.o
    __builtin_memset(&var_48, 0, 0x18)
    struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** 
        var_60_1 = x0
    *x0 = &_vtable_for_Botan::(anonymous namespace)::DataSource_BERObject{for `Botan::DataSource'}
    x0[1] = var_50.q
    *(x0 + 0x10) = v0_1
    x0[4] = var_38
    x0[5] = 0
    int64_t var_88 = 0
    Botan::BER_Decoder::decode(&var_88, x21, zx.q(x20), zx.q(x20))
    Botan::BER_Decoder::verify_end()
    int64_t var_58_2 = 0
    
    if (x0 != 0)
        (*x0)->vFunc_7()
    
    void* x0_3 = var_7c
    
    if (x0_3 != 0)
        int64_t var_74 = x0_3
        int64_t var_6c
        Botan::deallocate_memory(x0_3, var_6c - x0_3, 1)

void* x0_5 = var_48

if (x0_5 != 0)
    void* var_40_1 = x0_5
    Botan::deallocate_memory(x0_5, var_38 - x0_5, 1)

return arg1
