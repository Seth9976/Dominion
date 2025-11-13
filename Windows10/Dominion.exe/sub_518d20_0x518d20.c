// 函数: sub_518d20
// 地址: 0x518d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t eax_1 = sub_50af00(sub_516f30(0x8cb), &var_c)
sub_50af60(eax_1, var_c, &data_cc8de0, eax_1)
sub_516290()
int32_t esi = 0

while (true)
    int32_t eax_3 = 0
    
    while (true)
        if (eax_3 s>= 0x280)
            sub_63b870(eax_3, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x242, "CampaignAddExtra")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* ecx_3 = (data_cca784 << 0xb) + data_cca780 + 0x58c + eax_3
        
        if (*ecx_3 == 0)
            esi += 1
            *ecx_3 = 0xdb5
            ecx_3[1] = 0x100
            ecx_3[2] = 0xffffffff
            ecx_3[3] = 0
            ecx_3[4] = 0
            
            if (esi s< 5)
                break
            
            int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_c7fb985b3a24912dd40de72a7384d434>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
            int32_t** var_14_1 = &var_38
            int32_t eax_5
            int32_t edx_5
            eax_5, edx_5 = sub_50ad20(&var_38, 0, &data_cca794, var_38)
            return sub_50a6a0(eax_5, edx_5, eax_5, 2, 0)
        
        eax_3 += 0x14
