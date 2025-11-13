// 函数: sub_5fce60
// 地址: 0x5fce60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t* edx
ecx, edx = __chkstk(0x3324)
void* eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t ecx_3 = *(eax + 0x71dc)

if (ecx_3 s>= 0x40)
    sub_63b870(eax, &data_801800, "sets.numSets < MAX_SAVE_SETS", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x8d0d, "DomSetSaveNew")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi = eax + 0x6edc + ecx_3 * 0xc
*(eax + 0x71dc) = ecx_3 + 1
sub_63d850(esi, ecx)
sub_63d850(esi + 4, edx)
*edx
int32_t __saved_ebp
void arg_198c
memcpy(&__saved_ebp, sub_4deeb0(&arg_198c), 0x1990)
*(esi + 8) = sub_4e4560(&__saved_ebp)
data_cc8dc8
sub_4d8ad0(esi)
return *(eax + 0x71dc) - 1
