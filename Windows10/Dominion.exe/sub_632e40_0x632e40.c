// 函数: sub_632e40
// 地址: 0x632e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
int32_t edi = *(arg3 + 0xe0)
int32_t edi_1

if (edi == 0)
label_632eaa:
    edi_1 = arg4
else
    while (true)
        uint32_t eax = zx.d(edi.w)
        
        if (eax u< data_b809e4)
            eax *= 0x1c30
            void* ecx_1 = data_b809e0 + eax
            
            if (*(ecx_1 + 0x1c28) == edi)
                edi_1 = arg4
                
                if (esi s>= edi_1 || *(ecx_1 + 0x23c) != *(arg2 + (esi << 2)))
                    sub_632db0(arg3)
                    break
                
                edi = *(ecx_1 + 0x244)
                esi += 1
                
                if (edi == 0)
                    goto label_632eaa
                
                continue
        
        sub_63b870(eax, &data_801800, "DataArrayTryToGet(id) != NULL", 
            "C:\x\ax2017\Engine\DataArray.h", 0x6d, "DataArray<struct DomGfx>::DataArrayGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

if (*(arg3 + 0xe0) == 0)
    goto label_632ec1

if (esi == edi_1)
    return 

sub_632db0(arg3)
label_632ec1:
int32_t edi_2 = edi_1 - 1

if (edi_1 - 1 s< 0)
    return 

int32_t temp1_1

do
    uint32_t eax_2 = sub_631f30(arg2, 0x23, arg3, 0, *(arg2 + (edi_2 << 2)), 0)
    sub_5cd5d0(eax_2, arg3, eax_2, 0)
    temp1_1 = edi_2
    edi_2 -= 1
    arg1 = *(eax_2 + 0x1c28)
    *(eax_2 + 0x244) = *(arg3 + 0xe0)
    *(arg3 + 0xe0) = arg1
while (temp1_1 - 1 s>= 0)
