// 函数: sub_65f160
// 地址: 0x65f160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
void* esi = arg3
int32_t ecx = arg5
void* var_18 = esi
char const* const var_12c_1
int32_t var_128_1
char const* const var_124_1
char* ecx_1

if (ecx != 0xffffffff)
    arg1 = arg6
    
    if (arg1 == 0xffffffff)
        var_124_1 = "UpdateToNewLine"
        var_128_1 = 0x2a69
        var_12c_1 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "lastEntryToMoveInclusive != -1"
    else if (ecx s<= 0)
    label_65f2c6:
        float xmm1_6 = arg4[7]
        arg4[1] = arg1
        float xmm0_7 = xmm1_6 f+ arg4[6]
        arg4[2] = arg1
        arg1 = arg4[4] + 1
        *arg4 = ecx
        xmm1_6 - 0f
        int32_t* var_1c_2 = arg1
        arg4[4] = arg1
        arg4[6] = xmm0_7
        arg1:1.b = (xmm1_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_6, 0f) ? 1 : 0) << 2
            | (xmm1_6 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            if (ecx s>= 0 && ecx s< *(esi + 0x18))
                arg1 = *(esi + 0x14)
                int32_t edi_3 = 0
                int32_t i = ecx * 0x34
                float xmm2_2 = *(i + arg1 + 0x10) ^ (data_8937c0.o).d
                
                if (ecx s> arg6)
                label_65f391:
                    arg4[5] = edi_3
                    return arg4
                
                while (i s>= 0)
                    if (ecx s>= *(esi + 0x18))
                        break
                    
                    arg1 = *(esi + 0x14) + i
                    ecx += 1
                    i += 0x34
                    float xmm0_9 = xmm2_2 f+ arg1[4]
                    arg1[3] = edi_3
                    edi_3 += 1
                    arg1[2] = var_1c_2
                    esi = var_18
                    arg1[4] = xmm0_9
                    arg1[5] = xmm1_6 f+ arg1[5]
                    
                    if (ecx s> arg6)
                        goto label_65f391
            
            goto label_65f39d
        
        var_124_1 = "UpdateToNewLine"
        var_128_1 = 0x2a8c
        var_12c_1 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "lineParamsPrevLine.lineSpacing != 0"
    else
        arg1 = *arg4
        
        if (arg1 s>= 0)
            int32_t edx = *(esi + 0x18)
            
            if (arg1 s>= edx)
                goto label_65f39d
            
            int32_t edi_1 = *(esi + 0x14)
            
            if (ecx - 1 s< 0 || ecx - 1 s>= edx)
                goto label_65f39d
            
            int32_t var_124_2 = ecx - 1
            float xmm1_1 = *(arg1 * 0x34 + edi_1 + 0x10)
            int32_t eax_2 = (ecx - 1) * 0x34
            float xmm0_3 = *(eax_2 + edi_1 + 0x18) f+ *(eax_2 + edi_1 + 0x10) - xmm1_1
            void var_118
            void var_a0
            __builtin_memcpy(&var_a0, sub_65efc0(&var_118, *(esi + 0x10), esi, &var_118, ecx - 1), 
                0x78)
            int32_t var_90
            float eax_5 = sub_6b7590(var_90)
            ecx = arg5
            esi = var_18
            int32_t var_14_1 = 0
            arg1 = arg4
            int32_t edx_2 = *arg1
            float xmm1_5 = (*arg2 - xmm0_3) * eax_5 - xmm1_1
            
            if (edx_2 s< ecx)
                int32_t edi_2 = edx_2 * 0x34
                
                do
                    if (edi_2 s< 0)
                        goto label_65f39d
                    
                    if (edx_2 s>= *(esi + 0x18))
                        goto label_65f39d
                    
                    arg1 = *(esi + 0x14) + edi_2
                    
                    if ((arg1[1].b & 2) == 0)
                        ecx = arg5
                        
                        if (arg1[3] != var_14_1)
                            var_124_1 = "UpdateToNewLine"
                            var_128_1 = 0x2a7d
                            var_12c_1 = "C:\x\ax2017\Engine\UI2.cpp"
                            ecx_1 = "entry.entryIdxOnLine == i"
                            goto label_65f3b6
                        
                        var_14_1 += 1
                        arg1[4] = xmm1_5 f+ arg1[4]
                    
                    edx_2 += 1
                    edi_2 += 0x34
                while (edx_2 s< ecx)
            
            arg1 = arg6
            goto label_65f2c6
        
    label_65f39d:
        var_124_1 = "XDynArray<struct TextEntry>::operator []"
        var_128_1 = 0xd4
        var_12c_1 = "C:\x\ax2017\Engine\xDynArray.h"
        ecx_1 = "index >= 0 && index < mSize"
else
    var_124_1 = "UpdateToNewLine"
    var_128_1 = 0x2a68
    var_12c_1 = "C:\x\ax2017\Engine\UI2.cpp"
    ecx_1 = "firstEntryToMoveNewLine != -1"

label_65f3b6:
sub_63b870(arg1, &data_801800, ecx_1, var_12c_1, var_128_1, var_124_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
