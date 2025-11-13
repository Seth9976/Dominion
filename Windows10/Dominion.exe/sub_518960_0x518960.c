// 函数: sub_518960
// 地址: 0x518960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t* eax_2 = data_cca780 + 0x58c + (data_cca784 << 0xb)

do
    if (*eax_2 == 0)
        *eax_2 = 0xdb2
        int32_t j = 0
        eax_2[1] = 0x102
        eax_2[2] = 0xffffffff
        eax_2[3] = 2
        eax_2[4] = 0
        eax_2 = data_cca780 + 0x58c + (data_cca784 << 0xb)
        
        do
            if (*eax_2 == 0)
                *eax_2 = 0xdb2
                int32_t k = 0
                eax_2[1] = 0x102
                eax_2[2] = 0xffffffff
                eax_2[3] = 2
                eax_2[4] = 0
                eax_2 = data_cca780 + 0x58c + (data_cca784 << 0xb)
                
                do
                    if (*eax_2 == 0)
                        *eax_2 = 0xdb2
                        eax_2[1] = 0x102
                        eax_2[2] = 0xffffffff
                        eax_2[3] = 2
                        eax_2[4] = 0
                        int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_2954ddcdf513eba04a6219a860eab10c>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
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
