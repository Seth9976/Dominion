// 函数: sub_50e1c0
// 地址: 0x50e1c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t var_34 = ecx
int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_feef0b129ef09c484028e146a8fa87fb>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_14 = &var_38
int32_t result
int32_t edx
result, edx = sub_50ad20(&var_38, 0, &data_cca794, var_38)

if (result == 0)
    sub_63b5f0("out of category cards!")
    return 0

if (sub_50a6a0(result, edx, result, 2, 0) == 0)
    return 0

return result
