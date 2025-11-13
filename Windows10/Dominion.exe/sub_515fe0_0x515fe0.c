// 函数: sub_515fe0
// 地址: 0x515fe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_20
char const* const var_1c
int32_t* eax
char* ecx

if (arg1 s>= 3)
    eax = (arg1 - 3) * 0x9c + 0x790198
    
    if (*eax == arg1)
        int32_t edx
        edx.b = eax[3] != 0
        int32_t var_10
        uint32_t eax_4
        int32_t ecx_2
        eax_4, ecx_2 = sub_515c00(&var_10, edx + 1, &eax[2], &var_10, 1, nullptr)
        
        if (eax_4 == 0)
            int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_022c50bb1d3eaccdb2fce47704ae03f3>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
            void* var_3c_1 = &eax[2]
            int32_t** var_1c_2 = &var_40
            int32_t eax_6
            int32_t edx_2
            eax_6, edx_2 = sub_50ad20(&var_40, 0, &data_cca794, var_40)
            
            if (eax_6 == 0)
                return sub_63b5f0("couldn't add expansion stamp (nothing meets criteria)")
            
            int32_t var_1c_4 = 0
            int32_t var_20_2 = 0
            var_10 = eax_6
            eax_4, ecx_2 = sub_50a6a0(eax_6, edx_2, eax_6, var_20_2, var_1c_4)
            
            if (eax_4.b == 0)
                return sub_63b5f0("couldn't add expansion stamp (no space for new card)")
        
        int32_t var_1c_6 = 0
        int32_t result = sub_50ac80(eax_4, var_10, eax[2], ecx_2, 0)
        int32_t ecx_5 = eax[3]
        
        if (ecx_5 == 0)
            return result
        
        int32_t var_1c_7 = 0
        return sub_50ac80(result, var_10, ecx_5, ecx_5, 0)
    
    var_1c = "ExpansionCampaignDefGet"
    var_20 = 0x672
    ecx = "retval.exp == exp"
else
    var_1c = "ExpansionCampaignDefGet"
    var_20 = 0x669
    ecx = "exp >= DOM_EXP_INTRIGUE"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_20, 
    var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
