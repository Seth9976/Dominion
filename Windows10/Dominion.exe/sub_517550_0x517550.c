// 函数: sub_517550
// 地址: 0x517550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_50b8c0(sub_517610)
int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_bf3441e49975343c7c5370f9d5c84d2f>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_1c = &var_40
int32_t i
int32_t edx
i, edx = sub_50ad20(eax, 0, &data_cca794, var_40)
int32_t result = sub_50a6a0(i, edx, i, 4, 1)

if (result.b != 0)
    void* edx_3 = (data_cca784 << 0xb) + data_cca780
    int32_t ecx_1 = 0
    int32_t* eax_1 = edx_3 + 0x34
    
    while (*eax_1 != i)
        ecx_1 += 1
        eax_1 = &eax_1[0xf]
        
        if (ecx_1 s>= 4)
            sub_63b870(eax_1, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1e7d, "CardMod_CardTrait")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    result = ecx_1 * 0xf
    *(edx_3 + (result << 2) + 0x38) = eax

return result
