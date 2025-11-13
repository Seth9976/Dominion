// 函数: _ZN5Botan8EC_GroupC1ERKNS_6BigIntES3_S3_S3_S3_S3_S3_RKNS_3OIDE
// 地址: 0xd262a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
Botan::EC_Group::ec_group_data()
int32_t var_68 = 1
int64_t arg_0
int64_t var_70 = arg_0
int64_t result = Botan::EC_Group_Data_Map::lookup_or_create(&data_23ecee0, arg2, arg3, arg4, arg5, 
    arg6, arg7, arg8)
int64_t var_60_1 = 0
int64_t* x20_1 = *(arg1 + 8)
int64_t var_60
*arg1 = var_60
int64_t var_58
*(arg1 + 8) = var_58

if (x20_1 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20_1[1])
        i = __stlxr(x9_2 - 1, &x20_1[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        result = std::__ndk1::__shared_weak_count::__release_weak()

return result
