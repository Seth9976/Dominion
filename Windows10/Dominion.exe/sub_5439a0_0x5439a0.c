// 函数: sub_5439a0
// 地址: 0x5439a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi
int32_t var_14 = esi
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
char var_1c_1 = 0
*(ecx_2 + eax_2 + 0x17558) |= 8
sub_561af0(eax_2, 0, 3, var_1c_1)
void* eax_3 = sub_573400()
*(eax_3 + 4)
uint32_t result = sub_589750(esi, *(eax_3 + 0xc), 0x3e9, *(eax_3 + 0x28), *(eax_3 + 0x2c), 
    *(eax_3 + 0x30), 0, 0, nullptr, nullptr)
uint32_t result_1 = result

if (result == 0)
    return result

sub_56e370(result, 1, result, 0)
uint32_t esi_2 = zx.d(result_1.w)
int32_t edi_1 = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t eax_6 = *(esi_2 * 0x64 + edi_1 + 0x1a4c)

if (eax_6 != 0xd32 && eax_6 != 0xd34)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_59790fa73a087d544e676e7a768ca14f>, void>::VTable
        * const var_40 = &std::_Func_impl_no_alloc<class <lambda_59790fa73a087d544e676e7a768ca14f>, void>::`vftable'{for `std::_Func_base<void>'}
    uint32_t* var_3c_1 = &result_1
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_59790fa73a087d544e676e7a768ca14f>, void>::VTable
        * const* var_1c_4 = &var_40
    sub_5699b0(var_40)

uint32_t result_2 = result_1
void* eax_10
int32_t ecx_5
int32_t edx_2
eax_10, ecx_5, edx_2 = sub_573400()
int32_t var_1c_5 = 8
return sub_589e00(eax_10, edx_2, *(eax_10 + 4), &result_2, ecx_5, 0x3e9)
