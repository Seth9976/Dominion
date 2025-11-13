// 函数: sub_510310
// 地址: 0x510310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_56b780()
void* eax_1 = sub_573400()
uint32_t ebx = *(eax_1 + 0xc)
int32_t* edi = *(eax_1 + 4)
int32_t eax_3
int32_t edx_3
edx_3:eax_3 =
    muls.dp.d(0x51eb851f, 0xffffe5b8 - edi + sub_5727e0(eax_1, eax, edi, 0x451, ebx, nullptr))
int32_t edx_4 = edx_3 s>> 5
int32_t var_14 = (edx_4 u>> 0x1f) + edx_4
edi[0x540].b = 1
int32_t eax_7 = var_14
uint32_t esi_1 = zx.d(eax_7.w)
int32_t var_10 = eax_7

if (esi_1 u>= 0x320)
    sub_591930()

var_10 = var_10
int32_t var_c = edi[esi_1 * 0x19 + 0x695]
sub_573050(&var_10, ebx, edi, &var_10)
int32_t var_24_1 = var_14
sub_585660(edi, ebx)
TEB* fsbase
void* ecx_4 = *fsbase->ThreadLocalStoragePointer
int32_t eax_12 = *(ecx_4 + 0xf010)

if (eax_12 s<= 0)
    sub_63b870(eax_12, &data_801800, "cs.numContexts > 0", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(ecx_4 + 0xf010) = eax_12 - 1
int32_t result = edi[0x541]
edi[0x540].b = 0

if (result == 3 || result == 5 || result == 4 || result == 6)
    return result

uint32_t eax_14 = ebx

if (ebx == edi[0x673])
    eax_14 = edi[0x674]

return sub_59f9b0(eax_14, ebx, edi, eax_14, 0x43, 0, &var_14, 1, 0x3e9, 0, 0, 0)
