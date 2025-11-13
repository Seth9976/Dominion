// 函数: sub_6f53e0
// 地址: 0x6f53e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg1
int32_t ecx = *eax
int32_t* var_8 = eax
int32_t var_28
char const* const var_24
char* ecx_1

if (ecx != 0)
    char const* const var_14 = "Left"
    char const* const var_10_1 = "Center"
    char const* const var_c_1 = "Right"
    int32_t ebx_3 = (ecx - 1) s/ 3
    int32_t esi_1 = 0
    
    while (true)
        char* ecx_3 = (&var_14)[esi_1]
        char* eax_2 = arg2
        
        while (true)
            int32_t edx
            edx.b = *ecx_3
            char temp0_1 = *eax_2
            bool c_1 = edx.b u< temp0_1
            
            if (edx.b == temp0_1)
                if (edx.b == 0)
                    eax = nullptr
                    break
                
                edx.b = ecx_3[1]
                char temp1_1 = eax_2[1]
                c_1 = edx.b u< temp1_1
                
                if (edx.b == temp1_1)
                    ecx_3 = &ecx_3[2]
                    eax_2 = &eax_2[2]
                    
                    if (edx.b != 0)
                        continue
                    
                    eax = nullptr
                    break
            
            eax = sbb.d(eax_2, eax_2, c_1) | 1
            break
        
        if (eax == 0)
            void* result = (ebx_3 << 1) + 1 + esi_1 + ebx_3
            *var_8 = result
            return result
        
        esi_1 += 1
        
        if (esi_1 s>= 3)
            break
    
    var_24 = "ToHAlign"
    var_28 = 0xf55
    ecx_1 = "Halt"
else
    var_24 = "GetVAlignment"
    var_28 = 0xf39
    ecx_1 = "textAlignment != TA_NONE"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
