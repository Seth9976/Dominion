// 函数: _ZNK5Botan12EC_PublicKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xd35108
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((Botan::EC_Group::verify_group(arg1 + 8, arg2) & 1) == 0)
    return 0

return Botan::EC_Group::verify_public_element(arg1 + 8) __tailcall
