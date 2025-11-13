// 函数: sub_618010
// 地址: 0x618010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = data_171cb68
int32_t* edi = data_171d87c
int32_t var_24 = 0
int32_t* eax_1 = *sub_5af880(data_171ce08)
int32_t ecx_1 = *eax_1
int32_t eax_2 = eax_1[1]
int32_t var_2c = 0
int32_t* eax_4 = *sub_5af880(esi)
int32_t ecx_3 = *eax_4
int32_t eax_5 = eax_4[1]
int32_t var_28 = eax_5
char const* const var_5c
int32_t var_58
char const* const var_54
char* ecx_4

if (edi[1] == 3)
    int32_t* edi_1 = *sub_5af880(edi)
    int32_t eax_7 = edi_1[0xa]
    
    if (eax_7 == 0)
        *arg1 = 0
        return arg1
    
    eax_5 = edi_1[0xd]
    int32_t edx_1 = edi_1[0xe]
    int32_t ecx_7 = *edi_1 + eax_5
    int32_t var_18_1 = ecx_7
    int32_t edi_3 = edi_1[1] + edx_1
    int32_t ecx_8 = ecx_7 - eax_5
    int32_t var_1c_1 = edx_1
    int32_t var_14_1 = edi_3
    
    if (ecx_1 s<= ecx_8)
        int32_t edi_4 = edi_3 - edx_1
        
        if (eax_2 s<= edi_4)
            *arg1 = eax_7
            int32_t temp0_1 = divs.dp.d(sx.q(ecx_8), ecx_1)
            *(arg1 + 4) = eax_5.o
            int32_t temp0_2 = divs.dp.d(sx.q(edi_4), eax_2)
            arg1[5] = temp0_1
            arg1[6] = temp0_2
            eax_5 = temp0_2 * temp0_1
            
            if (eax_5 s<= 0x100)
                arg1[7] = ecx_1
                arg1[8] = eax_2
                int32_t temp0_3 = divs.dp.d(sx.q(ecx_8), ecx_3)
                int32_t temp0_4 = divs.dp.d(sx.q(edi_4), var_28)
                arg1[9] = temp0_3
                arg1[0xa] = temp0_4
                eax_5 = temp0_4 * temp0_3
                
                if (eax_5 s<= 0x100)
                    arg1[0xb] = ecx_3
                    arg1[0xc] = var_28
                    __builtin_memset(&arg1[0x10d], 0, 0x11)
                    return arg1
                
                var_54 = "FifoRectAllocatorInit"
                var_58 = 0xcc72
                ecx_4 = "allocator.dimsReverse.x * allocator.dimsReverse.y <= MAX_ELEMENTS"
            else
                var_54 = "FifoRectAllocatorInit"
                var_58 = 0xcc6f
                ecx_4 = "allocator.dims.x * allocator.dims.y <= MAX_ELEMENTS"
        else
            var_54 = "FifoRectAllocatorInit"
            var_58 = 0xcc6a
            ecx_4 = "elSize.y <= RectIHeight(area)"
    else
        var_54 = "FifoRectAllocatorInit"
        var_58 = 0xcc69
        ecx_4 = "elSize.x <= RectIWidth(area)"
    
    var_5c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    var_54 = "TextureGetDef"
    var_58 = 0x89
    var_5c = "C:\x\ax2017\Engine\Texture.h"
    ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"

sub_63b870(eax_5, &data_801800, ecx_4, var_5c, var_58, var_54)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
