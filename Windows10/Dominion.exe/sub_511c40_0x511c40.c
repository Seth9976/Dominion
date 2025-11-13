// 函数: sub_511c40
// 地址: 0x511c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* ebx_2 = (data_cca784 << 0xb) + data_cca780
int32_t* var_40

if (*(ebx_2 + 0xc) == 0)
    var_40 = &std::_Func_impl_no_alloc<class <lambda_4ce17992127bdcf5bd171802b7ced1a7>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t** var_1c_1 = &var_40
    int32_t eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_50ad20(&var_40, 0, &data_cca794, var_40)
    sub_50a6a0(eax_2, edx_1, eax_2, 0, 0)

uint32_t result

for (int32_t i = 0; i s< 0xa; i += 1)
    int32_t edi_1 = *(ebx_2 + (i << 2) + 0xc)
    
    if (edi_1 == 0)
        result = data_cca780
        
        if (*((data_cca784 << 0xb) + result + 0x30) != edi_1)
            break
        
        var_40 = &std::_Func_impl_no_alloc<class <lambda_a391d0f63133739a9242830e51bdd297>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
        int32_t** var_1c_2 = &var_40
        int32_t eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_50ad20(&var_40, 0, &data_cca794, var_40)
        edi_1 = eax_4
        
        if (edi_1 == 0)
            sub_63b870(eax_4, &data_801800, "what", 
                "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1351, 
                "Surprise_Combo::<lambda_6fbe01b24876e0525cfaa766eef76ee8>::operator ()")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_50a6a0(eax_4, edx_2, edi_1, 0, 0)
    
    result = data_cca780
    
    if (*((data_cca784 << 0xb) + result + 0x30) != 0)
        break
    
    int32_t edx_5
    result, edx_5 = sub_511a60(edi_1)
    
    if (result != 0)
        result = sub_50a6a0(result, edx_5, result, 2, 0)
        
        if (result.b == 0)
            i -= 1

return result
