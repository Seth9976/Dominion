// 函数: sub_55f760
// 地址: 0x55f760
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
*(ecx_2 + eax_2 + 0x17558) |= 8
int32_t* result = sub_562880()

if (result == 0)
    return result

void* eax_3 = sub_573400()
uint32_t esi_1 = zx.d(result.w)
int32_t ebx_1 = *(eax_3 + 0xc)
void* edi_1 = *(eax_3 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_4 = esi_1 * 0x64
int32_t var_8
sub_576e90(eax_4, edi_1, &var_8, ebx_1, *(eax_4 + edi_1 + 0x1a4c), 0)
uint32_t var_1c[0x5]
uint32_t* eax_5 = sub_576c00(&var_1c, var_8)
return sub_561af0(eax_5, 0, (*eax_5).d, 0)
