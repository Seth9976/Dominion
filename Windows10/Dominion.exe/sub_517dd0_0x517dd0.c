// 函数: sub_517dd0
// 地址: 0x517dd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_cca790
void* ebx_2

if (ecx != 2)
    ebx_2 = data_cca780 + ((ecx + 0xa02) << 3)
else
    ebx_2 = data_cca780 + 0x540 + (data_cca784 << 0xb)

int32_t i_1 = 3
int32_t result
int32_t i

do
    int32_t var_10 = *(ebx_2 + 4)
    int32_t* var_40_1 = &var_10
    int32_t* var_48 = &std::_Func_impl_no_alloc<class <lambda_1a26e074cbf2dcc23cd5d8b5a34d12ea>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t var_44_1 = 1
    int32_t** var_24_1 = &var_48
    int32_t edx_1
    result, edx_1 = sub_50ad20(&var_48, 0, &data_cca794, var_48)
    
    if (result != 0)
        int32_t eax_4
        int32_t ecx_4
        eax_4, ecx_4 = sub_50a6a0(result, edx_1, result, 0, 0)
        int32_t var_24_3 = 0
        result = sub_50ac80(eax_4, result, var_10, ecx_4, 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
