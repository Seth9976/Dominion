// 函数: sub_5c9ba0
// 地址: 0x5c9ba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t ecx = data_ccea08
int32_t eax = *arg2
int32_t ebx = *arg3

if (ecx != 0)
    int32_t eax_1 = ecx(eax, ebx, arg5)
    
    if (eax_1 s>= 0 && (eax_1 s> 0 || eax s< ebx))
        int32_t ecx_1 = *arg2
        *arg2 = *arg3
        *arg3 = ecx_1
    
    int32_t ecx_2 = data_ccea08
    int32_t ebx_1 = *arg2
    eax = *arg4
    
    if (ecx_2 != 0)
        int32_t result = ecx_2(eax, ebx_1, arg5)
        
        if (result s< 0 || (result s<= 0 && eax s>= ebx_1))
            return result
        
        int32_t ebx_2 = *arg4
        *arg4 = *arg2
        int32_t ecx_4 = data_ccea08
        *arg2 = ebx_2
        eax = *arg3
        
        if (ecx_4 != 0)
            result = ecx_4(ebx_2, eax, arg5)
            
            if (result s>= 0 && (result s> 0 || ebx_2 s< eax))
                int32_t ecx_5 = *arg2
                result = *arg3
                *arg2 = result
                *arg3 = ecx_5
            
            return result

sub_63b870(eax, &data_801800, "gPile.fnItemCompare", 
    "C:\x\ax2017\Jams\Dominion\code\PileLayout.cpp", 0x16, "ItemCompare")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
