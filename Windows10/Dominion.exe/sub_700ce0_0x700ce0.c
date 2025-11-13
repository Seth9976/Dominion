// 函数: sub_700ce0
// 地址: 0x700ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
arg1 = *(arg3 + 0x13c)
var_8:3.b = arg1
void* edx = data_147ded4
void* esi = arg3 + 0x14
void* edi
void* var_14 = edi

if (arg1 == 0)
    goto label_700d1f

uint32_t eax = *(arg3 + 0xdc)
char const* const var_20
int32_t var_1c
void* var_18
char* ecx_2

if (eax u> 0x10)
    var_18 = "OpenGLBindOrCreateVAO"
    var_1c = 0x7f3
    ecx_2 = "vertexBufferData->mBufferFormat >= 0 && vertexBufferData->mBufferFormat < VERTEX_FORMAT_COUNT"
label_700ea8:
    var_20 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
else
    esi = eax * 0xc0 + 0x4378 + edx
label_700d1f:
    void* eax_1 = esi + 4
    int32_t ecx = 0
    
    while (true)
        if (var_8:3.b == 0 || arg4 == 0)
            if (*eax_1 == arg2 && *(eax_1 + 4) == arg4)
                void* eax_8 = *(eax_1 - 4)
                
                if (*(edx + 0x4098) != eax_8)
                    *(edx + 0x4098) = eax_8
                    var_18 = eax_8
                    (*__glewBindVertexArray)(var_18)
                    eax_8 = data_147b06c
                    *(eax_8 + 0x14) += 1
                
                eax_8.b = 1
                return eax_8
        else if (*eax_1 == arg2)
            void* eax_2 = *(eax_1 - 4)
            
            if (*(edx + 0x4098) != eax_2)
                *(edx + 0x4098) = eax_2
                var_18 = eax_2
                (*__glewBindVertexArray)(var_18)
                void* eax_4 = data_147b06c
                edx = data_147ded4
                *(eax_4 + 0x14) += 1
            
            eax = zx.d(arg4.w)
            
            if (eax u< *(edx + 0x4250))
                int32_t ecx_1 = eax * 0x14c
                eax = *(edx + 0x424c)
                
                if (*(ecx_1 + eax + 0x148) == arg4)
                    var_18 = *(ecx_1 + eax)
                    (*__glewBindBuffer)(0x8893, var_18)
                    int32_t eax_6
                    eax_6.b = 1
                    return eax_6
            
            var_18 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
            var_1c = 0x6d
            var_20 = "C:\x\ax2017\Engine\DataArray.h"
            ecx_2 = "DataArrayTryToGet(id) != NULL"
            break
        
        ecx += 1
        eax_1 += 0xc
        
        if (ecx s>= 0x10)
            int32_t eax_7 = 0
            
            while (true)
                void** esp_1
                
                if (*esi == 0)
                    var_18 = esi
                    (*__glewGenVertexArrays)(1, var_18)
                    esp_1 = &var_14
                    eax = *esi
                    
                    if (eax == 0)
                        var_18 = "OpenGLBindOrCreateVAO"
                        var_1c = 0x81a
                        ecx_2 = "entry->mVertexArrayHandle != 0"
                        break
                    
                    void* ecx_3 = data_147ded4
                    *(esi + 4) = arg2
                    *(esi + 8) = arg4
                    
                    if (*(ecx_3 + 0x4098) != eax)
                        *(ecx_3 + 0x4098) = eax
                        var_18 = eax
                        esp_1 = &var_18
                    label_700e86:
                        (*__glewBindVertexArray)()
                        eax = data_147b06c
                        *(eax + 0x14) += 1
                else
                    eax_7 += 1
                    esi += 0xc
                    
                    if (eax_7 s< 0x10)
                        continue
                    else
                        var_18 = "Ran out of VAO slots!"
                        sub_63b5f0(var_18)
                        eax = data_147ded4
                        esp_1 = &var_14
                        
                        if (*(eax + 0x4098) != 0)
                            *(eax + 0x4098) = 0
                            var_18 = nullptr
                            esp_1 = &var_18
                            goto label_700e86
                
                *esp_1
                esp_1[1]
                eax.b = 0
                esp_1[2]
                return eax
            
            goto label_700ea8

sub_63b870(eax, &data_801800, ecx_2, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
