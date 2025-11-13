// 函数: sub_697540
// 地址: 0x697540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg1
int32_t var_24
char const* const var_20
char* ecx

if (eax[1] == 0x1e)
    int32_t* eax_1 = sub_5af880(arg1)
    int32_t result = 0
    int32_t ebx_1 = eax_1[2]
    
    if (ebx_1 s> 0)
        int32_t* edi_2 = *eax_1 + 8
        
        while (true)
            char* eax_2 = arg2
            char* ecx_1 = *edi_2
            int32_t eax_4
            
            while (true)
                char edx = *ecx_1
                char temp0_1 = *eax_2
                bool c_1 = edx u< temp0_1
                
                if (edx == temp0_1)
                    if (edx == 0)
                        eax_4 = 0
                        break
                    
                    edx = ecx_1[1]
                    char temp1_1 = eax_2[1]
                    c_1 = edx u< temp1_1
                    
                    if (edx == temp1_1)
                        ecx_1 = &ecx_1[2]
                        eax_2 = &eax_2[2]
                        
                        if (edx != 0)
                            continue
                        
                        eax_4 = 0
                        break
                
                eax_4 = sbb.d(eax_2, eax_2, c_1) | 1
                break
            
            if (eax_4 == 0)
                return result
            
            result += 1
            edi_2 = &edi_2[0x5e]
            
            if (result s>= ebx_1)
                break
    
    char* var_20_1 = sub_63d7e0(&eax[8])
    char* var_24_1 = arg2
    eax = sub_63b7f0("couldn't find element %s in %s")
    ecx = "Halt"
    var_20 = "UILayoutGetElementIndex"
    var_24 = 0x1fd
else
    var_20 = "UIDefGet"
    var_24 = 0x127
    ecx = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\UIDef.cpp", var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
