// 函数: sub_50b8c0
// 地址: 0x50b8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = data_cca788
int32_t edx = arg1
int32_t var_38 = edx

if (result == 0)
    int32_t edi_1 = 0
    int32_t i_1 = 0
    uint32_t result_2 = data_cca780 + 0xc + (data_cca784 << 0xb)
    int32_t i = 0
    uint32_t result_1 = result_2
    int32_t var_30[0xa]
    
    do
        result_2 = *(result_2 + (i << 2))
        
        if (result_2 == 0)
            break
        
        i_1 += 1
        
        if (edx(result_2) != 0)
            var_30[edi_1] = result_2
            edi_1 += 1
        
        edx = var_38
        i += 1
        result_2 = result_1
    while (i s< 0xa)
    
    if (edi_1 == 0 || edi_1 s< 1)
        while (i_1 s< 0xa)
            int32_t var_70_1 = edx
            int32_t* var_74 = &std::_Func_impl_no_alloc<class <lambda_cbb1869521231323291f419a897ff5a9>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
            int32_t** var_50_2 = &var_74
            int32_t eax_7
            int32_t edx_1
            eax_7, edx_1 = sub_50ad20(&var_74, 0, &data_cca794, var_74)
            result_2 = sub_50a6a0(eax_7, edx_1, eax_7, 4, 0)
            edx = var_38
            var_30[edi_1] = eax_7
            i_1 += 1
            edi_1 += 1
            
            if (edi_1 s>= 1)
                break
    
    int32_t esi_2 = 1
    
    if (edi_1 s< 1)
        esi_2 = edi_1
    
    sub_63eda0(result_2, &var_30, &data_cc8de0, edi_1, esi_2)
    int32_t eax_9 = memcpy(&result_1, &var_30, esi_2 << 2)
    
    if (esi_2 != 1)
        sub_63b870(eax_9, &data_801800, "numAvailable == 1", 
            "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x741, 
            "CampaignContextFavoredPileOrRandomOrAdd")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = result_1

CookieCheckFunction(result)
return result
