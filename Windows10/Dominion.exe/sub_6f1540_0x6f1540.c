// 函数: sub_6f1540
// 地址: 0x6f1540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_6ee800()
int32_t var_14
char const* const ecx_1

if (eax == 0)
label_6f161a:
    char const* const var_10_1 = "EditorClampNodeValues"
    var_14 = 0x6bb
    ecx_1 = "pNode"
else
    int32_t esi_1 = data_147d474
    
    if (esi_1 s< 0 || esi_1 s>= eax[2])
        goto label_6f161a
    
    int32_t esi_2 = esi_1 << 4
    int32_t* esi_3 = esi_2 + *eax
    
    if (esi_2 == neg.d(*eax))
        goto label_6f161a
    
    int32_t xmm0_1 = *esi_3
    
    if (not(xmm0_1 f<= esi_3[1]))
        esi_3[1] = xmm0_1
    
    eax = sub_6ee800()
    
    if (eax != 0)
        int32_t xmm0_2 = esi_3[2]
        
        if (not(0 f<= xmm0_2))
            esi_3[2] = 0
            xmm0_2 = (zx.o(0)).d
        
        if (not(xmm0_2 f<= 1f))
            esi_3[2] = 0x3f800000
            xmm0_2 = 0x3f800000
        
        int32_t edx = data_147d474
        int32_t xmm1 = xmm0_2
        
        if (edx s> 0)
            int32_t xmm2_1 = *(*eax + edx * 0x10 - 8)
            
            if (not(xmm2_1 f<= xmm0_2))
                esi_3[2] = xmm2_1
                xmm1 = xmm2_1
                edx = data_147d474
        
        int32_t result = eax[2] - 1
        
        if (edx s< result)
            result = *eax
            int32_t xmm0_3 = *(result + edx * 0x10 + 0x18)
            
            if (not(xmm1 f<= xmm0_3))
                esi_3[2] = xmm0_3
        
        return result
    
    char const* const var_10 = "EditorClampNodeValues"
    var_14 = 0x6c3
    ecx_1 = "pTrack"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_14, 
    "EditorClampNodeValues")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
