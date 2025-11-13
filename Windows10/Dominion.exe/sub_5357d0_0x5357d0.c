// 函数: sub_5357d0
// 地址: 0x5357d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_c = arg1
uint32_t var_1c = arg1
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
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
*(ecx_2 + eax_3 + 0x17558) |= 2
uint32_t result = sub_563430(arg3, arg2, var_c)

if (result == 0)
    return result

void* eax_4 = sub_573400()
uint32_t esi_1 = zx.d(result.w)
int32_t ebx_1 = *(eax_4 + 0xc)
void* edi = *(eax_4 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_5 = esi_1 * 0x64
sub_576e90(eax_5, edi, &var_c, ebx_1, *(eax_5 + edi + 0x1a4c), 0)
int32_t var_1c_1 = 0xc
int32_t var_20_2 = 1
int32_t var_24_2 = 0
return sub_5657e0(esi_1, var_c.b, 4)
