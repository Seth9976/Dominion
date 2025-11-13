// 函数: sub_74f0e0
// 地址: 0x74f0e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint8_t* var_8 = arg1
LRESULT result
void* ecx
char* edx_1

if (arg1 != 0)
    edx_1 = arg1
    ecx = &edx_1[1]
    
    do
        result.b = *edx_1
        edx_1 = &edx_1[1]
    while (result.b != 0)

if (arg1 == 0 || edx_1 != ecx)
    WPARAM wParam = 0
    result = SendMessageA(*(data_19e2778 + 0x14), 0x18b, 0, 0)
    
    if (result s> 0)
        do
            LRESULT eax_2 = SendMessageA(*(data_19e2778 + 0x14), 0x199, wParam, 0)
            
            if (eax_2 != 0xffffffff && eax_2 != 0 && *(eax_2 + 0x14) == 0x63)
                int32_t eax_3
                
                if (arg1 != 0)
                    eax_3 = _mbsicmp(*eax_2, arg1)
                
                if ((arg1 == 0 || eax_3 == 0) && *(eax_2 + 0x18) == 0)
                    sub_74ce10(eax_2)
            
            wParam += 1
            result = SendMessageA(*(data_19e2778 + 0x14), 0x18b, 0, 0)
        while (wParam s< result)

return result
