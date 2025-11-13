// 函数: _ZTv0_n64_NK5Botan20DL_Scheme_PrivateKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xd1262c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x40)

if ((Botan::DL_Group::verify_group(x19 + *(*x19 - 0xc8) + 0x30, arg2) & 1) == 0)
    return 0

void* x8_7 = x19 + *(*x19 - 0xc8)
return Botan::DL_Group::verify_element_pair(x8_7 + 0x30, x8_7 + 8) __tailcall
