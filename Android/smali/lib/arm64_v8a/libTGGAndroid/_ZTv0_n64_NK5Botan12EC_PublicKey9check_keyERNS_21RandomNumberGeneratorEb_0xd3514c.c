// 函数: _ZTv0_n64_NK5Botan12EC_PublicKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xd3514c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x40) + 8

if ((Botan::EC_Group::verify_group(x19, arg2) & 1) == 0)
    return 0

return Botan::EC_Group::verify_public_element(x19) __tailcall
