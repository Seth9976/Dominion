// 函数: sub_517c70
// 地址: 0x517c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_cca790
void* eax = data_cca780
void* eax_2

if (ecx != 2)
    eax_2 = eax + (ecx << 3) + 0x5010
else
    eax_2 = eax + 0x540 + (data_cca784 << 0xb)

int32_t var_10 = *(eax_2 + 4)
int32_t* var_38 = &var_10
int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_1a26e074cbf2dcc23cd5d8b5a34d12ea>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t var_3c = 1
int32_t** var_1c = &var_40
int32_t result
int32_t edx
result, edx = sub_50ad20(&var_40, 0, &data_cca794, var_40)

if (result == 0)
    return result

int32_t eax_6
int32_t ecx_4
eax_6, ecx_4 = sub_50a6a0(result, edx, result, 0, 0)
int32_t var_1c_2 = 0
return sub_50ac80(eax_6, result, var_10, ecx_4, 0)
