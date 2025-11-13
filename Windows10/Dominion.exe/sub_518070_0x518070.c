// 函数: sub_518070
// 地址: 0x518070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
sub_517e90()
int32_t ecx = data_cca780
int32_t eax_2 = data_cca790
void* esi_2 = (data_cca784 << 0xb) + ecx
void* ebx

if (eax_2 != 2)
    ebx = ecx + ((eax_2 + 0xa02) << 3)
else
    ebx = esi_2 + 0x540

*(esi_2 + 0x548) = *(ebx + 4)
*(esi_2 + 0x54c) = sub_5156c0(*(ebx + 4))
int32_t* var_60
int32_t var_20[0x5]
int32_t i

for (i = 0; i s< 4; i += 1)
    int32_t var_28 = *(ebx + 4)
    int32_t var_2c = 1
    int32_t* var_5c_1 = &var_2c
    int32_t* var_58_1 = &var_28
    var_60 = &std::_Func_impl_no_alloc<class <lambda_8de846b85825e3270cdeb52d3d141248>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t** var_3c_1 = &var_60
    int32_t eax_7
    int32_t edx_1
    eax_7, edx_1 = sub_50ad20(&var_60, 0, &data_cca794, var_60)
    
    if (eax_7 == 0)
        do
            var_2c = *(ebx + 4)
            var_28 = 2
            int32_t* var_5c_2 = &var_28
            int32_t* var_58_2 = &var_2c
            var_60 = &std::_Func_impl_no_alloc<class <lambda_8de846b85825e3270cdeb52d3d141248>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
            int32_t** var_3c_3 = &var_60
            int32_t eax_10
            int32_t edx_2
            eax_10, edx_2 = sub_50ad20(&var_60, 0, &data_cca794, var_60)
            
            if (eax_10 == 0)
                break
            
            sub_50a6a0(eax_10, edx_2, eax_10, 0, 0)
            var_20[i] = eax_10
            i += 1
        while (i s< 4)
        
        break
    
    sub_50a6a0(eax_7, edx_1, eax_7, 0, 0)
    var_20[i] = eax_7

int32_t var_5c_3 = *(ebx + 4)
var_60 = &std::_Func_impl_no_alloc<class <lambda_58a405897e0e71b2066f3f25da284cd9>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_3c_5 = &var_60
int32_t eax_12
int32_t edx_4
eax_12, edx_4 = sub_50ad20(&var_60, 0, &data_cca794, var_60)
sub_50a6a0(eax_12, edx_4, eax_12, 0, 1)

if (eax_12 != 0)
    var_20[i] = eax_12
    i += 1

uint32_t eax_14
int32_t edx_6
eax_14, edx_6 = sub_511a60(var_20[sub_63ed10(&data_cc8de0, i)])
uint32_t result = sub_50a6a0(eax_14, edx_6, eax_14, 2, 0)
CookieCheckFunction(result)
return result
