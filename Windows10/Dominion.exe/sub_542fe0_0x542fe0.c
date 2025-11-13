// 函数: sub_542fe0
// 地址: 0x542fe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_c = arg1
int32_t esi
int32_t var_10 = esi
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 2, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_2 + 0x17558) |= 8
void* eax_3 = sub_573400()
*(eax_3 + 4)
uint32_t eax_4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8919a164abdc60f77a3001c62450b231>, void>::VTable
    * ecx_4
eax_4, ecx_4 = sub_589750(esi, *(eax_3 + 0xc), 0x3e9, *(eax_3 + 0x28), *(eax_3 + 0x2c), 
    *(eax_3 + 0x30), 0, 1, nullptr, nullptr)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8919a164abdc60f77a3001c62450b231>, void>::VTable
    * const var_38 = ecx_4
var_38 = &std::_Func_impl_no_alloc<class <lambda_8919a164abdc60f77a3001c62450b231>, void>::`vftable'{for `std::_Func_base<void>'}
uint32_t var_34_1 = eax_4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8919a164abdc60f77a3001c62450b231>, void>::VTable
    * const* var_14_2 = &var_38
sub_5699b0(var_38)
var_c = eax_4
void* eax_5
int32_t ecx_5
int32_t edx_2
eax_5, ecx_5, edx_2 = sub_573400()
int32_t var_14_3 = 8
return sub_589e00(eax_5, edx_2, *(eax_5 + 4), &var_c, ecx_5, 0x3e9)
