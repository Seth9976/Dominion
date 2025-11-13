// 函数: sub_6dd7c0
// 地址: 0x6dd7c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770fb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i_2 = sub_6dd740(arg1, 1)
void* ebx = data_147abe8
char const* const var_38
int32_t var_34
char const* const var_30
char* ecx

if (ebx != 0)
    void* ebx_1 = *(ebx + 4)
    i_2 = *(ebx_1 + 0x18) * 0x314
    int32_t* i_1 = *(ebx_1 + 0x14)
    int32_t* i_3 = i_2
    
    if (i_1 != 0)
        int32_t* i
        
        do
            i = *i_1
            void* edx_1 = &i_1[1]
            i_2 = i_1
            i_1 = i
            
            if (arg1 u>= edx_1)
                i_2 += &i_3[1]
                
                if (arg1 u< i_2)
                    int32_t eax_5
                    int32_t edx_2
                    edx_2:eax_5 = sx.q(arg1 - edx_1)
                    i_2 = divs.dp.d(edx_2:eax_5, 0x314)
                    
                    if (mods.dp.d(edx_2:eax_5, 0x314) == 0)
                        *(ebx_1 + 0x1c) -= 1
                        int32_t var_8_1 = 0
                        var_8_1.b = 1
                        
                        if (data_cf65bc != 0)
                            int32_t* ecx_1 = arg1[0x1f]
                            
                            if (ecx_1 != 0)
                                int32_t edx_5 = arg1[0x21] << 6
                                arg1[0x20] = 0
                                sub_64c080(ecx_1, edx_5)
                        
                        var_8_1.b = 0
                        `eh vector vbase constructor iterator'(&arg1[7], 0xc, 8, sub_6e0980)
                        var_8_1.b = 2
                        
                        if (data_cf65bc != 0)
                            int32_t* ecx_2 = arg1[4]
                            
                            if (ecx_2 != 0)
                                int32_t edx_7 = arg1[6] << 6
                                arg1[5] = 0
                                sub_64c080(ecx_2, edx_7)
                        
                        var_8_1.b = 3
                        int32_t* j = arg1[1]
                        
                        while (j != 0)
                            int32_t* j_1 = j
                            j = j[1]
                            sub_64c080(j_1, 0xc)
                        
                        arg1[3] = 0
                        arg1[1] = 0
                        arg1[2] = 0
                        int32_t result = *(ebx_1 + 0x10)
                        *arg1 = result
                        *(ebx_1 + 0x10) = arg1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
        while (i != 0)
    
    var_30 = "XTypedAllocator<struct StructureAnim>::Free"
    var_34 = 0x112
    var_38 = "C:\x\ax2017\Engine\xAlloc.h"
    ecx = "IsPointerFromAllocator(pItem)"
else
    var_30 = "GetGameData"
    var_34 = 0x45
    var_38 = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"

sub_63b870(i_2, &data_801800, ecx, var_38, var_34, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
