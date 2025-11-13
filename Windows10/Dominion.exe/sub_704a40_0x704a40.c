// 函数: sub_704a40
// 地址: 0x704a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_8 = eax_1
void* esi = data_147ded4
int32_t var_34_1
char const* const ecx

if (arg2 != 0)
    eax_1 = zx.d(arg2.w)
    
    if (eax_1 u< *(esi + 0x4250))
        int32_t* ebx_2 = eax_1 * 0x14c + *(esi + 0x424c)
        
        if (ebx_2[0x52] == arg2)
            if (*(arg1 + 0x5038) == 0)
                int32_t eax_2 = *ebx_2
                int32_t var_1c = 0
                int32_t var_18[0x4]
                (*__glewGetAttachedShaders)(eax_2, 4, &var_1c, &var_18)
                int32_t esi_1 = 0
                
                if (var_1c s> 0)
                    do
                        (*__glewDeleteShader)(var_18[esi_1])
                        esi_1 += 1
                    while (esi_1 s< var_1c)
                
                (*__glewDeleteProgram)(eax_2)
                esi = data_147ded4
            
            if (*(esi + 0x4058) == arg2)
                *(esi + 0x4058) = 0xffffffff
            
            int32_t edx_1 = *(esi + 0x4258)
            *(esi + 0x4258) = zx.d(ebx_2[0x52].w)
            ebx_2[0x52] = edx_1
            *(esi + 0x425c) -= 1
            uint32_t result = sub_700c30(arg2)
            CookieCheckFunction(result)
            return result
    
    char const* const var_30_5 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_34_1 = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_30_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_34_1 = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_34_1, 
    "DataArray<struct OpenGLBufferData>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
