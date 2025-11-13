// 函数: sub_518810
// 地址: 0x518810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t* eax_2 = data_cca780 + 0x58c + (data_cca784 << 0xb)

do
    if (*eax_2 == 0)
        *eax_2 = 0xdb1
        int32_t j = 0
        eax_2[1] = 0x101
        eax_2[2] = 0xffffffff
        eax_2[3] = 0
        eax_2[4] = 0
        eax_2 = data_cca780 + 0x58c + (data_cca784 << 0xb)
        
        do
            if (*eax_2 == 0)
                *eax_2 = 0xdb1
                int32_t k = 0
                eax_2[1] = 0x101
                eax_2[2] = 0xffffffff
                eax_2[3] = 0
                eax_2[4] = 0
                eax_2 = data_cca780 + 0x58c + (data_cca784 << 0xb)
                
                do
                    if (*eax_2 == 0)
                        *eax_2 = 0xdb1
                        eax_2[1] = 0x106
                        eax_2[2] = 0xffffffff
                        eax_2[3] = 0
                        eax_2[4] = 0
                        int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_c41b1b48407204b71c0e1060f66d19f3>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
                        int32_t** var_14 = &var_38
                        int32_t eax_8
                        int32_t edx
                        eax_8, edx = sub_50ad20(&var_38, 0, &data_cca794, var_38)
                        return sub_50a6a0(eax_8, edx, eax_8, 0, 0)
                    
                    k += 1
                    eax_2 = &eax_2[5]
                while (k s< 0x20)
                
                break
            
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
