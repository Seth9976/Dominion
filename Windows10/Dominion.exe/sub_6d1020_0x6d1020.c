// 函数: sub_6d1020
// 地址: 0x6d1020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t var_1c
char const* const var_18
int32_t* eax
char* ecx

if (arg1[1] == 0x20)
    eax = sub_5af880(arg1)
    int32_t result = 0
    int32_t ebx_1 = eax[2]
    
    if (ebx_1 s> 0)
        int32_t* edi_2 = *eax + 8
        
        while (true)
            char* eax_1 = *edi_2
            char* ecx_1 = arg2
            
            while (true)
                char edx = *ecx_1
                char temp0_1 = *eax_1
                bool c_1 = edx u< temp0_1
                
                if (edx == temp0_1)
                    if (edx == 0)
                        eax = nullptr
                        break
                    
                    edx = ecx_1[1]
                    char temp1_1 = eax_1[1]
                    c_1 = edx u< temp1_1
                    
                    if (edx == temp1_1)
                        ecx_1 = &ecx_1[2]
                        eax_1 = &eax_1[2]
                        
                        if (edx != 0)
                            continue
                        
                        eax = nullptr
                        break
                
                eax = sbb.d(eax_1, eax_1, c_1) | 1
                break
            
            if (eax == 0)
                return result
            
            result += 1
            edi_2 = &edi_2[0x38]
            
            if (result s>= ebx_1)
                break
    
    var_18 = "FabElement"
    var_1c = 0x756
    ecx = "Halt"
else
    var_18 = "FabDefGet"
    var_1c = 0xeb
    ecx = "ptr->assetType == ASSET_TYPE_FAB"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\FabDef.cpp", var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
