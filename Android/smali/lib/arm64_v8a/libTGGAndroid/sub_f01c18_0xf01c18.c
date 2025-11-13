// 函数: sub_f01c18
// 地址: 0xf01c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[3]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::Ed25519_Hashed_Verify_Operation{for `Botan::PK_Ops::Verification'}

if (x0 != 0)
    arg1[4] = x0
    operator delete(x0)

int64_t* result = arg1[1]
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 0x10))
