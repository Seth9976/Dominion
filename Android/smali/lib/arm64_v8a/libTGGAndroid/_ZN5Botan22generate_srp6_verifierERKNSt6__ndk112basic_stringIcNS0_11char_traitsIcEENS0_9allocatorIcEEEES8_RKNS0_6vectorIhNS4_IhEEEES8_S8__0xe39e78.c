// 函数: _ZN5Botan22generate_srp6_verifierERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_RKNS0_6vectorIhNS4_IhEEEES8_S8_
// 地址: 0xe39e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::DL_Group var_40
Botan::DL_Group::DL_Group(&var_40)
int64_t result = Botan::generate_srp6_verifier(arg1, arg2, arg3, &var_40, arg5)
int64_t* var_38

if (var_38 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_38[1])
        i = __stlxr(x9_1 - 1, &var_38[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_38 + 0x10))(var_38)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
