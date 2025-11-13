// 函数: sub_518ef0
// 地址: 0x518ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_efab13753dd2d9714d6b0c413bdf33e9>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_1c = &var_40
int32_t eax_1
int32_t edx
eax_1, edx = sub_50ad20(&var_40, 0, &data_cca794, var_40)
int32_t* i_1 = sub_50a6a0(eax_1, edx, eax_1, 0, 0)

if (i_1.b != 0)
    void* eax_2 = sub_571b30(eax_1, 0x18)
    i_1 = *(eax_2 + 0x9c) & 0x940
    int32_t var_20_1
    char const* const var_1c_1
    char* ecx_6
    
    if (((*(eax_2 + 0x98) & 0x7f000400) | i_1) == 0)
        int32_t i = 0
        i_1 = data_cca780 + 0x58c + (data_cca784 << 0xb)
        
        do
            if (*i_1 == 0)
                *i_1 = 0xdb8
                i_1[1] = eax_1
                i_1[2] = 0xffffffff
                i_1[3] = 0
                i_1[4] = 0
                goto label_518fb2
            
            i += 1
            i_1 = &i_1[5]
        while (i s< 0x20)
        
        var_1c_1 = "CampaignAddExtra"
        var_20_1 = 0x242
        ecx_6 = "Halt"
    else
        var_1c_1 = "Theme_PileChanges"
        var_20_1 = 0x2075
        ecx_6 = "!IsLandscape(what)"
    
    sub_63b870(i_1, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
        var_20_1, var_1c_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

label_518fb2:
int32_t edi = data_ccb414
int32_t esi_1 = 0

if (edi s<= 0)
    return i_1

do
    int32_t ecx_9 = *((esi_1 << 2) + &data_cca794)
    
    if (ecx_9 != 0x20c)
        for (i_1 = *(data_1597e0c + (((ecx_9 s>> 4 | ecx_9) & data_1597e10) << 2)); i_1 != 0; 
                i_1 = i_1[4])
            if (ecx_9 == *i_1)
                void* ecx_10 = &i_1[1]
                
                if (ecx_10 != 0)
                    i_1 = nullptr
                    int32_t ecx_11 = *(ecx_10 + 4)
                    
                    if (ecx_11 s> 0)
                        do
                            if (*(*ecx_10 + (i_1 << 2)) == 0x40)
                                var_40 = &std::_Func_impl_no_alloc<class <lambda_feef0b129ef09c484028e146a8fa87fb>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
                                int32_t var_3c_1 = 0x40
                                int32_t** var_1c_2 = &var_40
                                int32_t eax_11
                                int32_t edx_3
                                eax_11, edx_3 = sub_50ad20(&var_40, 0, &data_cca794, var_40)
                                
                                if (eax_11 != 0)
                                    return sub_50a6a0(eax_11, edx_3, eax_11, 2, 0)
                                
                                return sub_63b5f0("out of category cards!")
                            
                            i_1 += 1
                        while (i_1 s< ecx_11)
                
                break
    
    esi_1 += 1
while (esi_1 s< edi)

return i_1
