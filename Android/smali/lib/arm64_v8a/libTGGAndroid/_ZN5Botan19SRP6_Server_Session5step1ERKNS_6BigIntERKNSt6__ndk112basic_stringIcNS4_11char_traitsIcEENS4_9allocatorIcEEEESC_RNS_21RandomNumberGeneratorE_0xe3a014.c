// 函数: _ZN5Botan19SRP6_Server_Session5step1ERKNS_6BigIntERKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_RNS_21RandomNumberGeneratorE
// 地址: 0xe3a014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > 
    var_40
Botan::DL_Group::DL_Group(&var_40)
int64_t result =
    Botan::SRP6_Server_Session::step1(arg1, arg2, &var_40, arg4, *(Botan::DL_Group::data() + 0x160))
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
