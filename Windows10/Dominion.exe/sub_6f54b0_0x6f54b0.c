// 函数: sub_6f54b0
// 地址: 0x6f54b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *arg1
int32_t var_28
char const* const var_24
char* ecx

if (eax != 0)
    void* const var_14 = &data_873798
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(eax - 1)
    char const* const var_10_1 = "Middle"
    int32_t esi_1 = 0
    char const* const var_c_1 = "Bottom"
    
    while (true)
        void* ecx_1 = (&var_14)[esi_1]
        char* eax_4 = arg2
        
        while (true)
            int32_t edx_1
            edx_1.b = *ecx_1
            char temp2_1 = *eax_4
            bool c_1 = edx_1.b u< temp2_1
            
            if (edx_1.b == temp2_1)
                if (edx_1.b == 0)
                    eax = 0
                    break
                
                edx_1.b = *(ecx_1 + 1)
                char temp3_1 = eax_4[1]
                c_1 = edx_1.b u< temp3_1
                
                if (edx_1.b == temp3_1)
                    ecx_1 += 2
                    eax_4 = &eax_4[2]
                    
                    if (edx_1.b != 0)
                        continue
                    
                    eax = 0
                    break
            
            eax = sbb.d(eax_4, eax_4, c_1) | 1
            break
        
        if (eax == 0)
            int32_t result = mods.dp.d(edx:eax_2, 3) + (esi_1 << 1) + 1 + esi_1
            *arg1 = result
            return result
        
        esi_1 += 1
        
        if (esi_1 s>= 3)
            break
    
    var_24 = "ToVAlign"
    var_28 = 0xf65
    ecx = "Halt"
else
    var_24 = "GetHAlignment"
    var_28 = 0xf3f
    ecx = "textAlignment != TA_NONE"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
