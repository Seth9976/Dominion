// 函数: sub_66c6a0
// 地址: 0x66c6a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx_2 = data_c28c58
int32_t ebx = data_c23bac
uint32_t eax
uint32_t edi

if (edx_2 s> 0)
    edi = zx.d(arg1.w)
    int32_t ecx = 0
    void* ebx_2 = edi * 0x18d0 + data_c23ba8
    
    if (arg1 == 0)
        goto label_66c7a7
    
    do
        if (edi u>= data_c23bac)
            goto label_66c7b5
        
        if (*(ebx_2 + 0x18c8) != arg1)
            goto label_66c7b5
        
        eax = (&data_c27c58)[ecx]
        
        if (eax == *(ebx_2 + 0x1604))
            data_c28c58 = edx_2 - 1
            int32_t result = (&data_c27c58)[edx_2 - 1]
            (&data_c27c58)[ecx] = result
            return result
        
        ecx += 1
    while (ecx s< edx_2)
    
    ebx = data_c23bac
    eax = edi
    goto label_66c70c

eax = zx.d(arg1.w)
edi = eax
int32_t var_14
char* ecx_5

if (arg1 != 0)
label_66c70c:
    
    if (eax u< ebx)
        eax *= 0x18d0
        void* ecx_2 = data_c23ba8 + eax
        
        if (*(ecx_2 + 0x18c8) == arg1)
            eax = *(ecx_2 + 0x1604)
            (&data_c27c58)[edx_2] = eax
            data_c28c58 += 1
            
            if (edi u< ebx && *(ecx_2 + 0x18c8) == arg1)
                data_c28c5c = sub_66b9a0(ecx_2)
                memcpy(&(&data_c27c50)[data_ca9a6c * 0x407], &data_c27c54, 0x1018)
                return sub_66ba80(arg1) __tailcall
    
label_66c7b5:
    char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
    ecx_5 = "DataArrayTryToGet(id) != NULL"
    var_14 = 0x6d
else
label_66c7a7:
    char const* const var_10 = "DataArray<struct UI2>::DataArrayGet"
    var_14 = 0x6c
    ecx_5 = "id != DATAID_NULL"

sub_63b870(eax, &data_801800, ecx_5, "C:\x\ax2017\Engine\DataArray.h", var_14, 
    "DataArray<struct UI2>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
