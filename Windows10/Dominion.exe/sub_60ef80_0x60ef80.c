// 函数: sub_60ef80
// 地址: 0x60ef80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = __chkstk(0x3324)
int32_t eax = *ecx
int32_t var_14
int32_t eax_2
char const* const ecx_1
void arg_198c
uint32_t eax_3

if (eax == 0)
    void* eax_4 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    eax_2 = ecx[1]
    
    if (eax_2 s<= *(eax_4 + 0x71dc))
        int32_t var_10_2 = 0x1990
        *(eax_4 + eax_2 * 0xc + 0x6ee0)
        eax_3 = sub_4deeb0(&arg_198c)
        goto label_60f01c
    
    char const* const var_10_3 = "ToSetupConfig"
    var_14 = 0xb35e
    ecx_1 = "set.setIdx <= saveSets.numSets"
else
    eax_2 = eax - 1
    
    if (eax == 1)
        ecx[1]
        int32_t var_10_1 = 0x1990
        eax_3 = sub_60fbd0(ecx, &arg_198c)
    label_60f01c:
        int32_t __saved_ebp
        memcpy(&__saved_ebp, eax_3, 0x1990)
        memcpy(arg1, &__saved_ebp, 0x1990)
        return arg1
    
    char const* const var_10 = "ToSetupConfig"
    var_14 = 0xb364
    ecx_1 = "Halt"
sub_63b870(eax_2, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_14, 
    "ToSetupConfig")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
