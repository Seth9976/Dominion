// 函数: sub_553880
// 地址: 0x553880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
sub_561af0(eax, 0, 3, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 2, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_1 = *(eax_2 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_3 + 0x17558) |= 8
int32_t var_10 = *(sub_573400() + 0xc)
int32_t* var_14 = nullptr
void* eax_6 = sub_573400()
int32_t temp1 = mods.dp.d(sx.q(*(eax_6 + 0xc) + 1), *(*(eax_6 + 4) + 0xd38))
int32_t* var_44 = &var_14
int32_t* var_48 = &std::_Func_impl_no_alloc<class <lambda_ac83ecee7b857c6795996e9a266765c8>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t* var_40 = &var_10
int32_t** var_24_2 = &var_48
void* result = sub_5698b0(&var_48, temp1, temp1, var_48)

if (var_14 == 0)
    return result

sub_56e9c0(1)
int32_t* ebx_1 = var_14
int32_t esi_1 = 0
void* eax_11 = sub_573400()
void* edi_1 = eax_11

if (*edi_1 == 2)
    uint32_t esi_3 = zx.d((*(edi_1 + 0x10)).w)
    int32_t eax_13 = *(sub_573400() + 4)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    eax_11 = esi_3 * 0x64
    esi_1 = *(eax_11 + eax_13 + 0x1a4c)

return sub_5911e0(eax_11, *(edi_1 + 0xc), *(edi_1 + 4), 8, ebx_1, 1, *(edi_1 + 0x28), 
    *(edi_1 + 0x2c), 0, 0xffffffff, 0, esi_1)
