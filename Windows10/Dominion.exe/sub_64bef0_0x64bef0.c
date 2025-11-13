// 函数: sub_64bef0
// 地址: 0x64bef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (data_cf65bc != 0)
    return 

int32_t edi_1 = sub_687730(0xa0)
memset(edi_1, 0, 0xa0)
int32_t eax_2 = 0
data_cf65bc = edi_1
int32_t var_8_1 = 0
void* ebx_1 = nullptr

while (true)
    int32_t esi_1 = 1 << (eax_2.b + 4)
    int32_t* ecx_2 = ebx_1 + edi_1
    
    if (esi_1 u< 4)
        sub_63b870(eax_2, &data_801800, "itemSize_arg >= sizeof(void*)", 
            "C:\x\ax2017\Engine\xAlloc.cpp", 0x21, "XAllocator::Initialize")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *ecx_2 = 0
    ecx_2[1] = 0
    ecx_2[3] = 0
    ecx_2[4] = esi_1
    ecx_2[2] = divs.dp.d(0x10000, esi_1)
    sub_64be70(ecx_2)
    ebx_1 += 0x14
    eax_2 = var_8_1 + 1
    var_8_1 = eax_2
    
    if (ebx_1 s>= 0x8c)
        *(data_cf65bc + 0x9c) = 0xffffffff
        break
    
    edi_1 = data_cf65bc
