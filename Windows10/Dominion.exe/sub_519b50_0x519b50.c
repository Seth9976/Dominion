// 函数: sub_519b50
// 地址: 0x519b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
char esi = 3

if (data_cca790 == 1)
    void* ecx_1 = data_cca780
    
    if (*(ecx_1 + 0x5010) == 0x5dc)
        if ((*(sub_571b30(*(ecx_1 + 0x5014), 0x17) + 0x9c) & 0x800) == 0)
            if ((*(sub_571b30(*(data_cca780 + 0x5014), 0x17) + 0x9c) & 0x40) != 0)
                esi = 2
        else
            esi = 1

int32_t* var_34 = &std::_Func_impl_no_alloc<class <lambda_b7440e8ab837c97426a4696e8af1ab4d>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_10 = &var_34
int32_t eax_7 = sub_50ad20(&var_34, esi, &data_cca794, var_34)
int32_t ecx_8 = data_cca790

if (ecx_8 == 2)
    *((data_cca784 << 0xb) + data_cca780 + 0x544) = eax_7
    return eax_7

int32_t eax_8 = data_cca780
*(eax_8 + (ecx_8 << 3) + 0x5014) = eax_7
return eax_8
