// 函数: sub_6ee970
// 地址: 0x6ee970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t* eax = sub_6ee800()
int32_t* edi = eax
int32_t* var_1c = edi
int32_t var_60
char const* const ecx

if (edi != 0)
    if (edi[2] s> 0)
        int32_t i = 0
        int32_t esi = 0
        int32_t* ecx_3
        
        do
            int32_t* ecx_2 = *edi + esi
            
            if (i == 0 || not(*arg1 f<= *ecx_2))
                *arg1 = *ecx_2
                edi = var_1c
                
                if (i == 0 || not(ecx_2[1] f<= *arg2))
                    ecx_3 = arg2
                    *ecx_3 = ecx_2[1]
                else
                    ecx_3 = arg2
            else if (ecx_2[1] f<= *arg2)
                ecx_3 = arg2
            else
                ecx_3 = arg2
                *ecx_3 = ecx_2[1]
            
            i += 1
            esi += 0x10
        while (i s< edi[2])
        
        int32_t eax_5 = 0
        int32_t xmm4_1 = *arg1 ^ 0x80000000
        int128_t var_4c
        __builtin_memcpy(&var_4c, 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xa0\x40\x00\x00\x20\x41\x00\x00\x48\x42\x00\x00\x"
        "c8\x42\x00\x00\xfa\x43\x00\x00\x7a\x44\x00\x40\x9c\x45\x00\x40\x1c\x46\x00\x50\x43\x47\x00"
        "50\xc3\x47", 
            0x30)
        float xmm1 = 100000f
        int32_t xmm1_1
        
        while (true)
            float xmm0_3 = *(&var_4c + (eax_5 << 2))
            
            if (xmm0_3 f>= xmm4_1)
                xmm1 = xmm0_3
                xmm1 f- 0
                eax_5:1.b = (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2
                    | (xmm1 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    xmm1_1 = (zx.o(0)).d
                    break
            else
                eax_5 += 1
                
                if (eax_5 u< 0xc)
                    continue
            
            xmm1_1 = xmm1 ^ 0x80000000
            break
        
        int32_t result = 0
        *arg1 = xmm1_1
        int32_t xmm1_2 = *ecx_3
        __builtin_memcpy(&var_4c, 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xa0\x40\x00\x00\x20\x41\x00\x00\x48\x42\x00\x00\x"
        "c8\x42\x00\x00\xfa\x43\x00\x00\x7a\x44\x00\x40\x9c\x45\x00\x40\x1c\x46\x00\x50\x43\x47\x00"
        "50\xc3\x47", 
            0x30)
        float xmm0_4
        
        while (true)
            xmm0_4 = *(&var_4c + (result << 2))
            
            if (xmm0_4 f>= xmm1_2)
                break
            
            result += 1
            
            if (result u>= 0xc)
                *ecx_3 = 0x47c35000
                return result
        
        float xmm2 = xmm0_4
        xmm2 f- 0
        result:1.b = (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2
            | (xmm2 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4))
            xmm2 = 1f
        
        *ecx_3 = xmm2
        return result
    
    char const* const var_5c_1 = "NodeGraphGetMinMax"
    var_60 = 0x2a4
    ecx = "pTrack->paramCount > 0"
else
    char const* const var_5c = "NodeGraphGetMinMax"
    var_60 = 0x2a2
    ecx = "pTrack"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_60, 
    "NodeGraphGetMinMax")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
