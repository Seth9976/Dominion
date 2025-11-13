// 函数: sub_5184c0
// 地址: 0x5184c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_d37128607cee6e3e957983f8497375ba>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_1c = &var_40
int32_t eax_1
int32_t edx
eax_1, edx = sub_50ad20(&var_40, 0, &data_cca794, var_40)
int32_t esi = eax_1
sub_50a6a0(eax_1, edx, esi, 0, 0)
int32_t ecx_1 = 0

for (int32_t i = 0; i u< 0x3f0; )
    if (*(i + &data_7bfae8) == esi)
        int32_t eax_2 = ecx_1 * 9
        int32_t edx_1 = *((eax_2 << 3) + &data_7bfaec)
        
        if (edx_1 != 0)
            esi = *((eax_2 << 3) + &data_7bfaf0 + (sub_63ed10(&data_cc8de0, edx_1) << 2))
        
        break
    
    i += 0x48
    ecx_1 += 1

void* eax_4
int32_t ecx_3
eax_4, ecx_3 = sub_571b30(esi, 0x17)
int32_t eax_6 = *(eax_4 + 0x98) & 2

if (eax_6 != 0)
    int32_t var_1c_1 = 0
    return sub_50ac80(eax_6, esi, 0xdb1, ecx_3, 0)

int32_t i_1 = 0
int32_t* result = data_cca780 + 0x58c + (data_cca784 << 0xb)

do
    if (*result == 0)
        result[1] = esi
        *result = 0xdb2
        result[2] = 0xffffffff
        result[3] = 0
        result[4] = 0
        return result
    
    i_1 += 1
    result = &result[5]
while (i_1 s< 0x20)

sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x242, "CampaignAddExtra")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
