// 函数: sub_4f8f00
// 地址: 0x4f8f00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

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
char var_84_1 = 0
*(ecx_2 + eax_2 + 0x17558) |= 8
int32_t var_88_1 = 0
uint32_t result = sub_568960(sub_561af0(eax_2, 0, 2, var_84_1), 0, 0x3eb, 0)

if (result s<= 0)
    return result

int32_t var_70
__builtin_memset(&var_70, 0, 0x30)
int128_t var_40 = var_70.o
int32_t var_60
int128_t var_30_1 = var_60.o
int64_t var_50
int128_t var_20_1 = var_50.o
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_b356ab564aba381191b386deebc61da8>, void>::VTable
    * const var_a8 = &std::_Func_impl_no_alloc<class <lambda_b356ab564aba381191b386deebc61da8>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_b356ab564aba381191b386deebc61da8>, void>::VTable
    * const* var_84_2 = &var_a8
return sub_56a310(&var_a8, &var_40, 0x5d)
