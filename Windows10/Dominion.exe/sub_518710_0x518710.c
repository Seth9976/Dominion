// 函数: sub_518710
// 地址: 0x518710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t* eax_2 = data_cca780 + 0x58c + (data_cca784 << 0xb)

do
    if (*eax_2 == 0)
        *eax_2 = 0xdb1
        int32_t j = 0
        eax_2[1] = 0x105
        eax_2[2] = 0xffffffff
        eax_2[3] = 0
        eax_2[4] = 0
        eax_2 = data_cca780 + 0x58c + (data_cca784 << 0xb)
        
        do
            if (*eax_2 == 0)
                *eax_2 = 0xdb2
                eax_2[1] = 0x105
                eax_2[2] = 0xffffffff
                eax_2[3] = 0
                eax_2[4] = 0
                int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_dbf6d7d123c8b12767cb94d0d57b0fd7>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
                int32_t** var_14 = &var_38
                int32_t eax_6
                int32_t edx
                eax_6, edx = sub_50ad20(&var_38, 0, &data_cca794, var_38)
                return sub_50a6a0(eax_6, edx, eax_6, 0, 0)
            
            j += 1
            eax_2 = &eax_2[5]
        while (j s< 0x20)
        
        break
    
    i += 1
    eax_2 = &eax_2[5]
while (i s< 0x20)

sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x242, "CampaignAddExtra")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
