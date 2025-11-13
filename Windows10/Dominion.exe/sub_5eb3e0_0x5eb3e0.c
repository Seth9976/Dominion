// 函数: sub_5eb3e0
// 地址: 0x5eb3e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg5
int32_t eax = *(arg3 + 0x3a20)
int32_t var_38
char const* const ecx

if (eax s< 0x80)
    int32_t ecx_1 = eax * 0x74
    *(arg3 + 0x3a20) = eax + 1
    *(ecx_1 + arg3 + 0x24) = 0
    *(ecx_1 + arg3 + 0x20) = 1
    int32_t xmm0_1 = *(arg3 + 8)
    *(ecx_1 + arg3 + 0x28) = 0
    *(ecx_1 + arg3 + 0x2c) = xmm0_1
    float xmm2_1 = *(arg3 + 8)
    xmm2_1 f- 0
    eax:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
        | (xmm2_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm2_1 = xmm2_1 + 15f
        *(arg3 + 8) = xmm2_1
    
    *(arg3 + 4) = __maxss_xmmss_memss(0x45282000, *(arg3 + 4))
    *(arg3 + 8) = xmm2_1 + 360f
    *(ecx_1 + arg3 + 0x30) = arg2
    
    if (arg6 != 0)
        void* edx = arg4
        void* eax_1 = 5
        
        if (edx == 3)
            eax_1 = edx + 3
        else if (edx == 4)
            eax_1 = 3
        
        if (arg6 s<= eax_1)
            int32_t eax_6 = *(arg3 + 0x3a20)
            void* ecx_6 = eax_6 * 0x74
            *(arg3 + 0x3a20) = eax_6 + 1
            *(ecx_6 + arg3 + 0x24) = 0
            *(ecx_6 + arg3 + 0x20) = edx
            int32_t xmm0_5 = *(arg3 + 8)
            *(ecx_6 + arg3 + 0x28) = 0
            *(ecx_6 + arg3 + 0x2c) = xmm0_5
            float edx_5 = sub_5eb310(edx)
            int32_t ecx_8 = 0
            float xmm1_5 = *(arg3 + 8) + 15f
            *(arg3 + 4) = __maxss_xmmss_memss(0x45282000, *(arg3 + 4))
            *(arg3 + 8) = xmm1_5 + edx_5
            
            if (arg6 s> 0)
                void* edx_8 = ecx_6 + 0x30 + arg3
                
                do
                    int32_t eax_8 = *(ebx + (ecx_8 << 2))
                    edx_8 += 0x10
                    ecx_8 += 1
                    *(edx_8 - 0x10) = eax_8
                while (ecx_8 s< arg6)
            
            eax_1 = ecx_6
            *(eax_1 + arg3 + 0x90) = arg6
            
            if (arg8 != 0)
                int32_t eax_9 = *(arg3 + 0x3a20)
                int32_t ebx_1 = eax_9 * 0x74
                *(arg3 + 0x3a20) = eax_9 + 1
                *(ebx_1 + arg3 + 0x24) = 0
                *(ebx_1 + arg3 + 0x20) = arg4
                int32_t xmm0_7 = *(arg3 + 8)
                *(ebx_1 + arg3 + 0x28) = 0
                *(ebx_1 + arg3 + 0x2c) = xmm0_7
                float edx_9
                eax_1, edx_9 = sub_5eb310(arg4)
                int32_t ecx_10 = 0
                float xmm1_8 = *(arg3 + 8) + 15f
                *(arg3 + 4) = __maxss_xmmss_memss(0x45282000, *(arg3 + 4))
                *(arg3 + 8) = xmm1_8 + edx_9
                
                if (arg8 s> 0)
                    void* edx_11 = arg3 + 0x30 + ebx_1
                    
                    do
                        eax_1 = *(arg7 + (ecx_10 << 2))
                        edx_11 += 0x10
                        ecx_10 += 1
                        *(edx_11 - 0x10) = eax_1
                    while (ecx_10 s< arg8)
                
                *(ebx_1 + arg3 + 0x90) = arg8
        else if (arg6 s> 0)
            void* i
            
            do
                int32_t eax_2 = *(arg3 + 0x3a20)
                void* ecx_2 = eax_2 * 0x74
                *(arg3 + 0x3a20) = eax_2 + 1
                *(ecx_2 + arg3 + 0x24) = 0
                *(ecx_2 + arg3 + 0x20) = edx
                int32_t xmm0_3 = *(arg3 + 8)
                *(ecx_2 + arg3 + 0x28) = 0
                *(ecx_2 + arg3 + 0x2c) = xmm0_3
                float edx_1 = sub_5eb310(edx)
                float xmm1_2 = *(arg3 + 8) + 15f
                void* eax_4 = arg6
                void* edi_2 = eax_4
                int32_t xmm0_4 = __maxss_xmmss_memss(0x45282000, *(arg3 + 4))
                
                if (eax_1 u< eax_4)
                    edi_2 = eax_1
                
                int32_t ecx_4 = 0
                *(arg3 + 4) = xmm0_4
                *(arg3 + 8) = xmm1_2 + edx_1
                
                if (edi_2 != 0)
                    void* edx_4 = ecx_2 + 0x30 + arg3
                    
                    do
                        int32_t eax_5 = *(ebx + (ecx_4 << 2))
                        edx_4 += 0x10
                        ecx_4 += 1
                        *(edx_4 - 0x10) = eax_5
                    while (ecx_4 s< edi_2)
                    
                    eax_4 = arg6
                
                ebx += edi_2 << 2
                edx = arg4
                i = eax_4 - edi_2
                arg6 = i
                *(ecx_2 + arg3 + 0x90) = edi_2
            while (i s> 0)
            
            return i
        
        return eax_1
    
    char const* const var_34_1 = "KingdomViewAddEntry"
    var_38 = 0x63a5
    ecx = "numRow1"
else
    char const* const var_34 = "KingdomViewAddEntry"
    var_38 = 0x6396
    ecx = "kv.numEntries < MAX_KINGDOM_VIEW_ENTRIES"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_38, 
    "KingdomViewAddEntry")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
