// 函数: sub_517f70
// 地址: 0x517f70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
sub_517e90()
int32_t ecx = data_cca790
int32_t i = 0
void* ebx_2

if (ecx != 2)
    ebx_2 = data_cca780 + ((ecx + 0xa02) << 3)
else
    ebx_2 = data_cca780 + 0x540 + (data_cca784 << 0xb)

int32_t var_1c[0x4]
int32_t eax_5

do
    int32_t var_54_1 = *(ebx_2 + 4)
    int32_t* var_58 = &std::_Func_impl_no_alloc<class <lambda_58a405897e0e71b2066f3f25da284cd9>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t** var_34_1 = &var_58
    int32_t eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_50ad20(&var_58, 0, &data_cca794, var_58)
    eax_5 = sub_50a6a0(eax_4, edx_1, eax_4, 0, 1)
    
    if (eax_4 == 0)
        break
    
    var_1c[i] = eax_4
    i += 1
while (i s< 4)

if (i != 0)
    uint32_t eax_7
    int32_t edx_3
    eax_7, edx_3 = sub_511a60(var_1c[sub_63ed10(&data_cc8de0, i)])
    uint32_t result = sub_50a6a0(eax_7, edx_3, eax_7, 2, 0)
    CookieCheckFunction(result)
    return result

sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x1f6d, "Theme_ExpansionA")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
